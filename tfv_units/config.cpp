class DefaultEventHandlers;
class CfgPatches
{
	class tfv_custom_units
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"TFV"};
		version = 0.1;
		versionStr = "0.1";
	};
};

class CfgFactionClasses
{
	class tfv_units;
};

class CfgVehicleClasses
{
	class TFV_Wood
	{
		displayName="Men (Woodland)";
	};
	
	class TFV_Desert
	{
		displayName = "Men (Desert)";
	};
	
};

class CfgVehicles
{
	class I_soldier_F;
	class I_officer_F;
	class B_medic_F;
	class B_Soldier_SL_F;
	class B_Soldier_TL_F;
	class B_soldier_AR_F;
	class B_soldier_AT_F;
	class B_soldier_M_F;
	class B_sniper_F;
	class B_crew_F;
	class B_spotter_F;
	class B_soldier_exp_F;
	class B_Pilot_F;
	class B_helicrew_F;
	class TFV_SL_Wood: B_Soldier_SL_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Squad Leader (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood_Lead";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
	};
	
	class TFV_FTL_Wood: B_Soldier_TL_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Team Leader (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood_Lead";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
	};
	
	class TFV_Medic_Wood: B_medic_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Combat Medic (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Backpack_Medic_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_MG1_Wood: B_soldier_AR_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Machine Gunner 1 (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_MG2_Wood: B_soldier_AR_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Machine Gunner 2 (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};

	class TFV_Rifleman_Wood: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Rifleman (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_AT_Wood: B_soldier_AT_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Rifleman AT (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood_AT";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","mas_launch_maaws_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","mas_launch_maaws_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_Grenadier_Wood: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Grenadier (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood_Grenadier";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
	};
	
	class TFV_Sniper_Wood: B_sniper_F
	{
		_generalMacro="B_sniper_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Sniper (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
	};
	
	class TFV_Spotter_Wood: B_spotter_F
	{
		_generalMacro="B_spotter_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Spotter (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
	};
	
	class TFV_CrewCO_Wood: B_crew_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Crew Commander (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_Crew_Wood: B_crew_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Crew (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_HeliPilot_Wood: B_Pilot_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Helicopter Pilot (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_HeliCrew_Wood: B_helicrew_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Helicopter Crew (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_JetPilot_Wood: B_Pilot_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Fixed-Wing Pilot (Wood)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Wood";
		backpack = "TFV_Kitbag_Wood";
		linkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Wood","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_SL_Desert: B_Soldier_SL_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Squad Leader (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert_Lead";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
		
	};
	
	class TFV_FTL_Desert: B_Soldier_TL_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Team Leader (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert_Lead";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
	};
	
	class TFV_Medic_Desert: B_medic_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Combat Medic (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Backpack_Medic_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_MG1_Desert: B_soldier_AR_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Machine Gunner 1 (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_MG2_Desert: B_soldier_AR_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Machine Gunner 2 (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_mas_Mk48_F_t","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};

	class TFV_Rifleman_Desert: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Rifleman (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_AT_Desert: B_soldier_AT_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Rifleman AT (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert_AT";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","mas_launch_maaws_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","mas_launch_maaws_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_Grenadier_Desert: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Grenadier (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_gl_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","1Rnd_HE_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareCIR_F","UGL_FlareCIR_F"};
	};
	
	class TFV_Sniper_Desert: B_sniper_F
	{
		_generalMacro="B_sniper_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Sniper (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_Spotter_Desert: B_spotter_F
	{
		_generalMacro="B_spotter_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Spotter (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
	};
	
	class TFV_CrewCO_Desert: B_crew_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Crew Commander (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_Crew_Desert: B_crew_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Crew (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_HeliPilot_Desert: B_Pilot_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Helicopter Pilot (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_HeliCrew_Desert: B_helicrew_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Helicopter Crew (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	class TFV_JetPilot_Desert: B_Pilot_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Desert";
		displayName="Fixed-Wing Pilot (Desert)";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Desert";
		backpack = "TFV_Kitbag_Desert";
		linkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"TFV_Vest_Standard_Desert","NVGoggles_mas","NOR_Helmet_ECH_Grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_hk416_a","hgun_mas_glocksf_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
	};
	
	
};
	


