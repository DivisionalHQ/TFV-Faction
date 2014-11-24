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
	
	class TFV_SL_Wood: B_Soldier_SL_F
		{
		side = 1;
		faction = "TFV_Units";
		displayName = "TFV Squad Leader";
		uniformClass = "TFV_Uniform_Basic";
		hiddenSelections[] = {"camo"};
		};
		
		class TFV_TL_Wood: B_Soldier_TL_F
		{
		side = 1;
		faction = "TFV_Units";
		displayName = "TFV Team Leader";
		uniformClass = "TFV_Uniform_Basic";
		hiddenSelections[] = {"camo"};
		};
		
		
};

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	
	class TFV_Uniform_Basic: Uniform_Base
	{
		scope=2;
		displayName = "TFV Basic Uniform"
		picture = "\tfv_faction\data\ui\nor_uniform_wood_icon_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"\tfv_faction\data\nor_indep_uniform_wood_co.paa"
		};
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	};
};
