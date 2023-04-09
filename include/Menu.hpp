#pragma once
#include "helper.h"
#include "Game.hpp"
#include "D3D11Window.hpp"

namespace DX11_Base {
	class Menu
	{
	public:
		ImColor dbg_RAINBOW{};				//	RAINBOW THEME COLORS
		bool dbg_RAINBOW_THEME = FALSE;		//	RAINBOW THEME BOOLEAN
		float sOpacity = 0.80;				//	Opacity for SunShade Window
		bool dbg_ALERTS = TRUE;

		//	INITIALIZE CLASS
		Menu()  noexcept = default;
		~Menu() noexcept = default;
		Menu(Menu const&) = delete;
		Menu(Menu&&) = delete;
		Menu& operator=(Menu const&) = delete;
		Menu& operator=(Menu&&) = delete;

		//	FORWARD DECLARE FUNCTIONS
		void Draw();
		void MainMenu();
		void HUD(bool* p_open);
		void Loops();

		char* MenuName = (char*)("Project Playtime Internal V1 - ArilisDev");

		// Character Config
		bool BHOP = false;
		float SpeedValue = 1.0f;
		bool QuickBreath = false;
		bool InstantRevive = false;
		bool NoDetection;

		// ESP Config
		bool ESPEnabled = false;
		bool ESPNametags = false;
		bool ESPSnaplines = false;
		bool ESPMonsterNametags = false;
		bool ESPMonsterSnaplines = false;
		bool ESPSnaplinesPosition = false;
		bool ESPVisibleOnly = false;
		bool ESPIgnoreTeam = false;
		bool ESPMonsters = false;
		bool ESPPuzzlePillars = false;
		bool WireframeChams = false;

		// Weapon Config
		bool TurncapModifierEnabled = false;
		bool NoParryCooldown = false;
		int HoldParryKey = 86;
		bool FastShoot = false;
		bool Confuser = false;
		bool InstantPommel = false;
		bool NoDisarm = false;
		int HoldPomelKey = 20;
		bool HoldPommelCheck = false;
		float TurncapX = 0.f;
		float TurncapY = 0.f;
		bool InfiniteAmmo = false;

		// Player Config
		bool AntiAFK = true;
		bool HighJump = false;
		bool Climb = false;
		bool EnableDodge = false;
		float DodgeDuration = 0.375f;
		bool AdvancedMovement = false;
		bool Fly = false;
		bool SkipWarmup = false;

	private:
		bool m_StyleInit{};
	};
	inline std::unique_ptr<Menu> g_Menu;
}
