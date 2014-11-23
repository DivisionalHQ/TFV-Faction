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

class CfgFactionClasses
{
	class TFV_Units;
};

class CfgVehicles
{
	class NOR_SL_Wood;
	
		class TFV_SL_Wood: NOR_SL_Wood
		{
		
		
		};
};