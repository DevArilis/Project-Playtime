#pragma once
#include "include/helper.h"
#include "include/Console.hpp"
#include "include/Game.hpp"
#include "include/D3D11Window.hpp"
#include "include/Hooking.hpp"
#include "libs/SDK.h"
#include "libs/SDK/BasicTypes_Package.cpp"
#include "libs/SDK/CoreUObject_Package.cpp"
#include "libs/SDK/Engine_Package.cpp"
#include "libs/SDK/BP_NetworkCharacter_Package.cpp"
#include "libs/SDK/BP_NetworkBoxy_Package.cpp"
#include "libs/SDK/BP_NetworkHuggy_Package.cpp"
#include "libs/SDK/BP_NetworkMommy_Package.cpp"
#include "libs/SDK/BP_PuzzlePillar_Package.cpp"

using namespace DX11_Base;
using namespace CG;

#define KeyPressed( k ) ( GetAsyncKeyState(k) & 0x8000 )
#define Nullcheck(x) if (x == NULL || x == nullptr || !x) {return;}
#define NullcheckC(x) if (x == NULL || x == nullptr || !x) {continue;}
#define M_PI 3.14159265358979323846
int PostRenderIndex = 99;


void DrawLine(UCanvas * canvas, FVector2D Position1, FVector2D Position2, float Thickness, CG::FLinearColor Color) {
    canvas->K2_DrawLine(Position1, Position2, Thickness, Color);
}

void DrawBox(UCanvas * canvas, FVector2D TopLeft, FVector2D DownRight, CG::FLinearColor Color, float Thickness) {
    auto h = DownRight.Y - TopLeft.Y;
    auto w = DownRight.X - TopLeft.X;

    auto downleft = FVector2D{ TopLeft.X, DownRight.Y };
    auto topright = FVector2D{ DownRight.X, TopLeft.Y };

    DrawLine(canvas, TopLeft, { TopLeft.X, TopLeft.Y + h * 1 }, Thickness, Color);
    DrawLine(canvas, TopLeft, { TopLeft.X + w * 1, TopLeft.Y }, Thickness, Color);

    DrawLine(canvas, DownRight, { DownRight.X, DownRight.Y - h * 1 }, Thickness, Color);
    DrawLine(canvas, DownRight, { DownRight.X - w * 1, DownRight.Y }, Thickness, Color);

    DrawLine(canvas, downleft, { downleft.X, downleft.Y - h * 1 }, Thickness, Color);
    DrawLine(canvas, downleft, { downleft.X + w * 1, downleft.Y }, Thickness, Color);

    DrawLine(canvas, topright, { topright.X, topright.Y + h * 1 }, Thickness, Color);
    DrawLine(canvas, topright, { topright.X - w * 1, topright.Y }, Thickness, Color);
}

inline UFont* get_font()
{
    static UFont* font;
    if (!font)
        font = UObject::FindObject<UFont>("Font RobotoDistanceField.RobotoDistanceField");

    return font;
}

float distanceTo(FVector main, FVector other)
{
    float dx = main.X - other.X;
    float dy = main.Y - other.Y;
    float dz = main.Z - other.Z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

CG::FLinearColor rgb2rgbfl(float r, float g, float b) {
    r = r / 255;
    g = g / 255;
    b = b / 255;
    return CG::FLinearColor(r, g, b, 1.f);
}

FVector inline VectorSubtract(FVector Vector1, FVector Vector2)
{
    FVector Vec;
    Vec.X = Vector1.X - Vector2.X;
    Vec.Y = Vector1.Y - Vector2.Y;
    Vec.Z = Vector1.Z - Vector2.Z;
    return Vec;
}

FVector inline VectorAdd(FVector Vector1, FVector Vector2)
{
    FVector Vec;
    Vec.X = Vector1.X + Vector2.X;
    Vec.Y = Vector1.Y + Vector2.Y;
    Vec.Z = Vector1.Z + Vector2.Z;
    return Vec;
}

void GetDesktopResolution(float& horizontal, float& vertical)
{
    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    horizontal = desktop.right;
    vertical = desktop.bottom;
}

void ClientBGThread()
{
    while (g_Running) {
        g_Menu->Loops();
        std::this_thread::sleep_for(0ms);
        std::this_thread::yield();
    }
}

inline float horizontal = 0;
inline float vertical = 0;

int random(int min, int max) //range : [min, max]
{
    static bool first = true;
    if (first)
    {
        srand(time(NULL)); //seeding for the first time only!
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}


typedef void(__thiscall* post_render_type)(UGameViewportClient*, UCanvas*);
post_render_type original_post_render = nullptr;
void Hook(UGameViewportClient* vp_client, UCanvas* canvas)
{
    try
    {
        GetDesktopResolution(horizontal, vertical);
        auto winCenter = FVector2D{ static_cast<float>(horizontal * 0.5), static_cast<float>(vertical * 0.5) };
        canvas->K2_DrawText(get_font(), FString(L"[Project Playtime Internal V1]\nDefault Menu Key: INSERT"), FVector2D(10, 15), FVector2D(0.5f, 0.5f), rgb2rgbfl(252, 232, 3), 1.0f, CG::FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, CG::FLinearColor(0, 0, 0, 1));
        UWorld** _UWorld = reinterpret_cast<UWorld**>(UWorld::GWorld);
        Nullcheck(_UWorld);
        Nullcheck(*_UWorld);
        UGameInstance* OwningGameInstance = (*_UWorld)->OwningGameInstance;
        Nullcheck(OwningGameInstance);
        auto GameState = (*_UWorld)->GameState;
        Nullcheck(GameState);
        auto PersistentLevel = (*_UWorld)->PersistentLevel;
        Nullcheck(PersistentLevel);
        UWorld* _GWorld = UWorld::GWorld[0];
        Nullcheck(_GWorld);
        ULocalPlayer* LocalPlayer = _GWorld->OwningGameInstance->LocalPlayers[0];
        Nullcheck(LocalPlayer);
        auto PlayerController = LocalPlayer->PlayerController;
        Nullcheck(PlayerController);
        ABP_NetworkCharacter_C* SelfPlayerCharacter = static_cast<ABP_NetworkCharacter_C*>(PlayerController->AcknowledgedPawn);
        Nullcheck(SelfPlayerCharacter);

        if (KeyPressed(VK_SPACE) && g_Menu->BHOP) {
            SelfPlayerCharacter->Jump();
        }
        if (!SelfPlayerCharacter->bPlayerIsDown) { SelfPlayerCharacter->CustomTimeDilation = g_Menu->SpeedValue; }
        if (g_Menu->QuickBreath) {
            SelfPlayerCharacter->BreathRechargeTime = 0.00001f;
            SelfPlayerCharacter->CanHoldBreath = true;
        }

        
        
        if (SelfPlayerCharacter->bPlayerIsDown && g_Menu->InstantRevive) {
            SelfPlayerCharacter->CustomTimeDilation = 5;
        }


        if (canvas && g_Menu->ESPEnabled) {
            TArray<AActor*> Players{};
            TArray<AActor*> Boxy{};
            TArray<AActor*> Huggy{};
            TArray<AActor*> Mommy{};
            TArray<AActor*> PuzzlePillars{};
            const auto GameplayStats = (UGameplayStatics*)UGameplayStatics::StaticClass();
            GameplayStats->GetAllActorsOfClass((*_UWorld), ABP_NetworkCharacter_C::StaticClass(), &Players);
            GameplayStats->GetAllActorsOfClass((*_UWorld), ABP_NetworkBoxy_C::StaticClass(), &Boxy);
            GameplayStats->GetAllActorsOfClass((*_UWorld), ABP_NetworkHuggy_C::StaticClass(), &Huggy);
            GameplayStats->GetAllActorsOfClass((*_UWorld), ABP_NetworkMommy_C::StaticClass(), &Mommy);
            GameplayStats->GetAllActorsOfClass((*_UWorld), ABP_PuzzlePillar_C::StaticClass(), &PuzzlePillars);

            for (int i = 0; i < Players.Count(); i++)
            {
                if (g_Menu->ESPIgnoreTeam) { continue; }
                auto actor = Players[i];
                auto PlayerCharacter = (ABP_NetworkCharacter_C*)(actor);
                NullcheckC(PlayerCharacter);
                
                if (PlayerCharacter->RootComponent == nullptr)
                    continue;
                if (PlayerCharacter->RootComponent->RelativeLocation == FVector{})
                    continue;
                if (PlayerCharacter->PlayerState == SelfPlayerCharacter->PlayerState)
                    continue;
                NullcheckC(PlayerCharacter->PlayerState);
                auto mesh = PlayerCharacter->Mesh;
                if (!mesh) continue;


                CG::TArray<CG::UMaterialInterface*> materials = PlayerCharacter->Mesh->GetMaterials();

                if (g_Menu->WireframeChams) {
                    
                    for (int i = 0; i < materials.Count(); i++)
                    {
                        if (!materials.IsValidIndex(i))  continue;

                        auto base_mat = materials[i]->GetBaseMaterial();

                        base_mat->Wireframe = true;
                        base_mat->bDisableDepthTest = true;
                        base_mat->BlendMode = EBlendMode::BLEND_Additive;
                        base_mat->LightmassSettings.EmissiveBoost = 999;
                        base_mat->LightmassSettings.DiffuseBoost = 0;


                        mesh->SetMaterial(i, base_mat);
                    }
                }

                bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);
                FVector ActorLoc = PlayerCharacter->RootComponent->RelativeLocation;
                FVector2D w2sRes;
                PlayerController->ProjectWorldLocationToScreen(ActorLoc, &w2sRes, false);
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) { continue; }
         
                float Distance = distanceTo(SelfPlayerCharacter->RootComponent->RelativeLocation, PlayerCharacter->RootComponent->RelativeLocation);
                //FString Player_Name = FString((Character->PlayerState->GetPlayerName().wc_str() + std::wstring(L" [") + std::to_wstring(()) + L"m]").c_str());
                FString Player_Name = FString((PlayerCharacter->PlayerState->GetPlayerName().wc_str() + std::wstring(L" [") + std::to_wstring((int)(round(Distance) / 100)) + std::wstring(L"m]")).c_str());
                if (g_Menu->ESPNametags) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawText(get_font(), Player_Name, FVector2D{ w2sRes.X - 20, w2sRes.Y - 40 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(0, 255, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }
                    else {
                        canvas->K2_DrawText(get_font(), Player_Name, FVector2D{ w2sRes.X - 20, w2sRes.Y - 40 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(0, 255, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }

                }

                if (g_Menu->ESPSnaplines) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));

                    }
                    else if (!g_Menu->ESPVisibleOnly) {
                        if (EntityVisible) {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));
                        }
                        else {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(0, 255, 0));
                        }
                    }
                }
                //Firearm->RateOfFire = 0.f;
            }

            for (int i = 0; i < Boxy.Count(); i++)
            {
                if (!g_Menu->ESPMonsters) { continue; }
                auto actor = Boxy[i];
                auto MonsterCharacter = (ABP_NetworkBoxy_C*)(actor);
                NullcheckC(MonsterCharacter);

                if (MonsterCharacter->RootComponent == nullptr)
                    continue;
                if (MonsterCharacter->RootComponent->RelativeLocation == FVector{})
                    continue;
                if (MonsterCharacter->PlayerState == SelfPlayerCharacter->PlayerState)
                    continue;
                NullcheckC(MonsterCharacter->PlayerState);
                auto mesh = MonsterCharacter->Mesh;
                if (!mesh) continue;

                CG::TArray<CG::UMaterialInterface*> materials = MonsterCharacter->Mesh->GetMaterials();

                if (g_Menu->WireframeChams) {

                    for (int i = 0; i < materials.Count(); i++)
                    {
                        if (!materials.IsValidIndex(i))  continue;

                        auto base_mat = materials[i]->GetBaseMaterial();

                        base_mat->Wireframe = true;
                        base_mat->bDisableDepthTest = true;
                        base_mat->BlendMode = EBlendMode::BLEND_Additive;
                        base_mat->LightmassSettings.EmissiveBoost = 999;
                        base_mat->LightmassSettings.DiffuseBoost = 0;

                       mesh->SetMaterial(i, base_mat);
                    }
                }

                bool EntityVisible = PlayerController->LineOfSightTo(MonsterCharacter, { 0.f,0.f,0.f }, false);
                FVector ActorLoc = MonsterCharacter->RootComponent->RelativeLocation;
                FVector2D w2sRes;
                PlayerController->ProjectWorldLocationToScreen(ActorLoc, &w2sRes, false);
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) { continue; }
                float Distance = distanceTo(SelfPlayerCharacter->RootComponent->RelativeLocation, MonsterCharacter->RootComponent->RelativeLocation);
                FString Monster_Name = FString((L"[Boxy Boo]" + std::wstring(L" [") + std::to_wstring((int)(round(Distance) / 100)) + std::wstring(L"m]")).c_str());
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) {
                    canvas->K2_DrawText(get_font(), Monster_Name, FVector2D(15, 50), FVector2D(0.5f, 0.5f), rgb2rgbfl(252, 232, 3), 1.0f, CG::FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, CG::FLinearColor(0, 0, 0, 1));
                    continue;
                }
                if (g_Menu->ESPMonsterNametags) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawText(get_font(), Monster_Name, FVector2D{ w2sRes.X - 50, w2sRes.Y - 100 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(255, 0, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }
                    else {
                        canvas->K2_DrawText(get_font(), Monster_Name, FVector2D{ w2sRes.X - 20, w2sRes.Y - 40 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(255, 0, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }

                }

                if (g_Menu->ESPMonsterSnaplines) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));

                    }
                    else if (!g_Menu->ESPVisibleOnly) {
                        if (EntityVisible) {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));
                        }
                        else {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(255, 0, 0));
                        }
                    }
                }
            }

            for (int i = 0; i < Huggy.Count(); i++)
            {
                if (!g_Menu->ESPMonsters) { continue; }
                auto actor = Huggy[i];
                auto MonsterCharacter = (ABP_NetworkHuggy_C*)(actor);
                NullcheckC(MonsterCharacter);

                if (MonsterCharacter->RootComponent == nullptr)
                    continue;
                if (MonsterCharacter->RootComponent->RelativeLocation == FVector{})
                    continue;
                if (MonsterCharacter->PlayerState == SelfPlayerCharacter->PlayerState)
                    continue;
                NullcheckC(MonsterCharacter->PlayerState);
                auto mesh = MonsterCharacter->Mesh;
                if (!mesh) continue;

                CG::TArray<CG::UMaterialInterface*> materials = MonsterCharacter->Mesh->GetMaterials();

                if (g_Menu->WireframeChams) {

                    for (int i = 0; i < materials.Count(); i++)
                    {
                        if (!materials.IsValidIndex(i))  continue;

                        auto base_mat = materials[i]->GetBaseMaterial();

                        base_mat->Wireframe = true;
                        base_mat->bDisableDepthTest = true;
                        base_mat->BlendMode = EBlendMode::BLEND_Additive;
                        base_mat->LightmassSettings.EmissiveBoost = 999;
                        base_mat->LightmassSettings.DiffuseBoost = 0;

                        mesh->SetMaterial(i, base_mat);
                    }
                }

                bool EntityVisible = PlayerController->LineOfSightTo(MonsterCharacter, { 0.f,0.f,0.f }, false);
                FVector ActorLoc = MonsterCharacter->RootComponent->RelativeLocation;
                FVector2D w2sRes;
                PlayerController->ProjectWorldLocationToScreen(ActorLoc, &w2sRes, false);
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) { continue; }
                float Distance = distanceTo(SelfPlayerCharacter->RootComponent->RelativeLocation, MonsterCharacter->RootComponent->RelativeLocation);
                FString Monster_Name = FString((L"[Huggy Wuggy]" + std::wstring(L" [") + std::to_wstring((int)(round(Distance) / 100)) + std::wstring(L"m]")).c_str());
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) {
                    canvas->K2_DrawText(get_font(), Monster_Name, FVector2D(15, 50), FVector2D(0.5f, 0.5f), rgb2rgbfl(252, 232, 3), 1.0f, CG::FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, CG::FLinearColor(0, 0, 0, 1));
                    continue;
                }
                if (g_Menu->ESPMonsterNametags) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawText(get_font(), Monster_Name, FVector2D{ w2sRes.X - 50, w2sRes.Y - 100 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(255, 0, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }
                    else {
                        canvas->K2_DrawText(get_font(), Monster_Name, FVector2D{ w2sRes.X - 20, w2sRes.Y - 40 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(255, 0, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }

                }

                if (g_Menu->ESPMonsterSnaplines) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));

                    }
                    else if (!g_Menu->ESPVisibleOnly) {
                        if (EntityVisible) {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));
                        }
                        else {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(255, 0, 0));
                        }
                    }
                }
            }

            for (int i = 0; i < Mommy.Count(); i++)
            {
                if (!g_Menu->ESPMonsters) { continue; }
                auto actor = Mommy[i];
                auto MonsterCharacter = (ABP_NetworkMommy_C*)(actor);
                NullcheckC(MonsterCharacter);

                if (MonsterCharacter->RootComponent == nullptr)
                    continue;
                if (MonsterCharacter->RootComponent->RelativeLocation == FVector{})
                    continue;
                if (MonsterCharacter->PlayerState == SelfPlayerCharacter->PlayerState)
                    continue;
                NullcheckC(MonsterCharacter->PlayerState);
                auto mesh = MonsterCharacter->Mesh;
                if (!mesh) continue;

                CG::TArray<CG::UMaterialInterface*> materials = MonsterCharacter->Mesh->GetMaterials();

                if (g_Menu->WireframeChams) {

                    for (int i = 0; i < materials.Count(); i++)
                    {
                        if (!materials.IsValidIndex(i))  continue;

                        auto base_mat = materials[i]->GetBaseMaterial();

                        base_mat->Wireframe = true;
                        base_mat->bDisableDepthTest = true;
                        base_mat->BlendMode = EBlendMode::BLEND_Additive;
                        base_mat->LightmassSettings.EmissiveBoost = 999;
                        base_mat->LightmassSettings.DiffuseBoost = 0;

                        mesh->SetMaterial(i, base_mat);
                    }
                }

                bool EntityVisible = PlayerController->LineOfSightTo(MonsterCharacter, { 0.f,0.f,0.f }, false);
                FVector ActorLoc = MonsterCharacter->RootComponent->RelativeLocation;
                FVector2D w2sRes;
                PlayerController->ProjectWorldLocationToScreen(ActorLoc, &w2sRes, false);
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) { continue; }
                float Distance = distanceTo(SelfPlayerCharacter->RootComponent->RelativeLocation, MonsterCharacter->RootComponent->RelativeLocation);
                FString Monster_Name = FString((L"[Mommy Long Legs]" + std::wstring(L" [") + std::to_wstring((int)(round(Distance) / 100)) + std::wstring(L"m]")).c_str());
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) {
                    canvas->K2_DrawText(get_font(), Monster_Name, FVector2D(15, 50), FVector2D(0.5f, 0.5f), rgb2rgbfl(252, 232, 3), 1.0f, CG::FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, CG::FLinearColor(0, 0, 0, 1));
                    continue;
                }
                if (g_Menu->ESPMonsterNametags) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawText(get_font(), Monster_Name, FVector2D{ w2sRes.X - 50, w2sRes.Y - 100 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(255, 0, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }
                    else {
                        canvas->K2_DrawText(get_font(), Monster_Name, FVector2D{ w2sRes.X - 20, w2sRes.Y - 40 }, FVector2D(0.45f, 0.45f), EntityVisible ? rgb2rgbfl(252, 232, 3) : rgb2rgbfl(255, 0, 0), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
                    }

                }

                if (g_Menu->ESPMonsterSnaplines) {
                    if (g_Menu->ESPVisibleOnly) {
                        if (EntityVisible)
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));

                    }
                    else if (!g_Menu->ESPVisibleOnly) {
                        if (EntityVisible) {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(252, 232, 3));
                        }
                        else {
                            canvas->K2_DrawLine(g_Menu->ESPSnaplinesPosition ? FVector2D(960, 1080) : FVector2D(960, 0), w2sRes, 1, rgb2rgbfl(255, 0, 0));
                        }
                    }
                }
            }

            for (int i = 0; i < PuzzlePillars.Count(); i++)
            {
                if (!g_Menu->ESPPuzzlePillars) { continue; }
                auto actor = PuzzlePillars[i];
                auto Pillar = (ABP_PuzzlePillar_C*)(actor);
                NullcheckC(Pillar);
                if (Pillar->RootComponent == nullptr) { continue; }
                if (Pillar->RootComponent->RelativeLocation == FVector{}) { continue; }
                if (Pillar->Solved) { Pillar->SetHighlight(false); continue; } else { Pillar->SetHighlight(true); }
                FVector ActorLoc = Pillar->RootComponent->RelativeLocation;
                FVector2D w2sRes;
                PlayerController->ProjectWorldLocationToScreen(ActorLoc, &w2sRes, false);
                if (w2sRes.X <= 0 || w2sRes.Y <= 0) { continue; }
                
                float Distance = distanceTo(SelfPlayerCharacter->RootComponent->RelativeLocation, Pillar->RootComponent->RelativeLocation);
                FString Player_Name = FString((std::wstring(L"Puzzle Pillar") + std::wstring(L" [") + std::to_wstring((int)(round(Distance) / 100)) + std::wstring(L"m]")).c_str());
                canvas->K2_DrawText(get_font(), Player_Name, FVector2D{ w2sRes.X - 20, w2sRes.Y - 40 }, FVector2D(0.45f, 0.45f), rgb2rgbfl(252, 232, 3), 1.0f, FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, FLinearColor(0, 0, 0, 1));
            }
        }

    }
    catch (std::exception& e)
    {
        return original_post_render(vp_client, canvas);
    }
    return original_post_render(vp_client, canvas);
}



void InitializeCheeze() {
    InitSdk();
    UWorld** _UWorld = reinterpret_cast<UWorld**>(UWorld::GWorld);
    Nullcheck(_UWorld);

    UGameInstance* OwningGameInstance = (*_UWorld)->OwningGameInstance;
    Nullcheck(OwningGameInstance);

    UWorld* _GWorld = UWorld::GWorld[0];
    Nullcheck(_GWorld);

    ULocalPlayer* LocalPlayer = _GWorld->OwningGameInstance->LocalPlayers[0];
    Nullcheck(LocalPlayer);

    auto GameViewportClient = LocalPlayer->ViewportClient;
    void** GameViewportClient_VTable = *reinterpret_cast<void***>(GameViewportClient);

    DWORD OldProtection;

    VirtualProtect(&GameViewportClient_VTable[PostRenderIndex], 8, PAGE_EXECUTE_READWRITE, &OldProtection);
    original_post_render = decltype(original_post_render)(GameViewportClient_VTable[PostRenderIndex]);
    GameViewportClient_VTable[PostRenderIndex] = Hook;
    VirtualProtect(&GameViewportClient_VTable[PostRenderIndex], 8, OldProtection, &OldProtection);

    return;
}

DWORD WINAPI MainThread_Initialize()
{
    g_Console = std::make_unique<Console>();

#if DEBUG
    g_Console->InitializeConsole("Project Playtime - Debug Console");
#endif

    ///  ESTABLISH GAME DATA   
    g_GameData = std::make_unique<GameData>();
    g_GameVariables = std::make_unique<GameVariables>();

    ///  CREATE WINDOW AND ESTABLISH HOOKS
    g_D3D11Window = std::make_unique<D3D11Window>();
    g_Hooking = std::make_unique<Hooking>();
    g_Menu = std::make_unique<Menu>();
    g_Hooking->Hook();
    InitializeCheeze();

#if DEBUG
    g_Console->printdbg("Main::Initialized\n", g_Console->color.white);
#endif

    std::thread WCMUpdate(ClientBGThread);	//	Initialize Loops Thread
    ///  RENDER LOOP
    g_Running = TRUE;
    while (g_Running)
    {
        if (GetAsyncKeyState(VK_INSERT) & 1) g_GameVariables->m_ShowMenu = !g_GameVariables->m_ShowMenu;
    }

    ///  EXIT
    WCMUpdate.join();						//	Exit Loops Thread
    FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
    return EXIT_SUCCESS;
}