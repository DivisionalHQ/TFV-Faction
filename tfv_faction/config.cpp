class CfgPatches
{
	class tfv_custom_faction
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
	class I_officer_F;
	
		// Officer Base - WIP, must change uniform
		class TFV_Officer_Base_Wood: B_Soldier_SL_F
		{
			_generalMacro="B_Soldier_F";
			scope=2;
			scopeCurator=2;
			side = 1;
			faction="TFV_Units";
			vehicleClass="TFV_Wood";
			displayName="Test SL";
			identityTypes[]=
				{
				"LanguageENG_F",
				"Head_EURO"
				};
			author="TFV";
			nakedUniform="NOR_BasicBody";
			uniformClass = "TFV_Uniform_Officer";
			/*hiddenSelections[] = {"camo1","camo2","insignia"};
			
			hiddenSelectionsTextures[]=
				{
					"\tfv_uniform\data\uniforms\nor_indep_uniform_wood_co.paa"
				};*/
				
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
		
};

