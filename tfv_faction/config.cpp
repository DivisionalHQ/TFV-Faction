class CfgPatches
{
	class tfv_custom_faction
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"Pedersen/Loberg"};
		version = 0.1;
		versionStr = "0.1";
	};
};

class cfgFactionClasses
{
	class TFV_Units
	{		
		displayname="TF Valkyrie";
		side=1;
		priority=2;
		flag="\tfv_faction\data\tfv_faction_flag.paa";
		icon="\tfv_faction\data\tfv_faction_icon.paa";
	};
};

class CfgVehicleClasses
{
	class TFV_Wood
	{
		displayName="Men (Woodland)";
	};
};

class CfgVehicles
{
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
	class B_Soldier_F;
	
		// Officer Base - WIP, must change uniform
		class TFV_Officer_Base_Wood: B_Soldier_F
		{
		uniformClass = "TFV_Uniform_Officer";
		side = 1;
		hiddenSelections[] = {"camo","insignia"};
		/*
		hiddenSelectionsTextures[]=
			{
				"\tfv_faction\data\nor_indep_uniform_wood_co.paa"
			};*/
		class EventHandlers
			{
				init="[(_this select 0),""tfv_nor_flag_insignia""] call BIS_fnc_setUnitInsignia";
			};
		
		};
		

		// Soldier Base
		class TFV_Soldier_Base_Wood: B_Soldier_F
		{
		uniformClass = "TFV_Uniform_Basic";
		side = 1;
		hiddenSelections[] = {"camo","insignia"};
		/*
		hiddenSelectionsTextures[]=
			{
				"\tfv_faction\data\nor_indep_uniform_wood_co.paa"
			}; */
		class EventHandlers
			{
				init="[(_this select 0),""tfv_nor_flag_insignia""] call BIS_fnc_setUnitInsignia";
			};
		
		};
		
		

	//Faction Classes - all units built upon base above, either Officer Base or Soldier Base. Pilot Base will be added. 
	
	class TFV_SL_Wood: TFV_Officer_Base_Wood
		{
		displayName = "Section Leader";
		faction = "TFV_Units";
		backpack=""; //not defined yet
		};
		
	class TFV_TL_Wood: TFV_Officer_Base_Wood
		{
		displayName = "Team Leader";
		faction = "TFV_Units";
		};
		
	class TFV_Medic_Wood: TFV_Soldier_Base_Wood
		{
		displayName = "Combat Medic";
		faction = "TFV_Units";
		};
		
	class TFV_Rifleman_Wood: TFV_Soldier_Base_Wood
		{
		displayName = "Rifleman";
		faction = "TFV_Units";
		};
		
	class TFV_MG1_Wood: TFV_Soldier_Base_Wood
		{
		displayName = "MG1";
		faction = "TFV_Units";
		};
		
	class TFV_MG2_Wood: TFV_Soldier_Base_Wood
		{
		displayName = "MG2";
		faction = "TFV_Units";
		};

	class TFV_AT_Wood: TFV_Soldier_Base_Wood
		{
		displayName = "Rifleman (AT)";
		faction = "TFV_Units";
		};

	class TFV_GR_Wood: TFV_Soldier_Base_Wood
		{
		displayName = "Grenadier";
		faction = "TFV_Units";
		};
		
	class TFV_HPilot_Wood: TFV_Officer_Base_Wood
		{
		displayName = "Pilot (Heli)";
		faction = "TFV_Units";
		};
		
	class TFV_JPilot_Wood: TFV_Officer_Base_Wood
		{
		displayName = "Pilot (Fixed-Wing)";
		faction = "TFV_Units";
		};
};

