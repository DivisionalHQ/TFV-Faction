class CfgPatches
{
	class tfv_custom_faction
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"NOR_units",
			"NOR_Core",	
			"NOR_Backpacks",
			"NOR_Equip",
			"NOR_Law",
			"NOR_Uniforms"};
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
		flag="\tfv_faction\data\nor_faction_flag.paa";
		icon="\tfv_faction\data\nor_faction_icon.paa";
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
	class NOR_SL_Wood;
	
		class TFV_SL_Wood: NOR_SL_Wood
		{
		side = 1;
		faction = "TFV_Units";
		displayName = "Squad Leader TFV";
		};
};