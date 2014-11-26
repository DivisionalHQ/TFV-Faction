class DefaultEventHandlers;
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
	class TFV_Officer_Base_Wood: B_Soldier_SL_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		scopeCurator=2;
		side = 1;
		faction="TFV_Units";
		vehicleClass="TFV_Wood";
		displayName="Test SL";
		identityTypes[]= {"LanguageENG_F","Head_EURO"};
		author="TFV";
		nakedUniform="U_BasicBody";
		uniformClass = "TFV_Uniform_Officer";
		class EventHandlers
		{
			init="[(_this select 0),""tfv_nor_flag_insignia""] call BIS_fnc_setUnitInsignia";
		};
	};
};

