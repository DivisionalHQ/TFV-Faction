class CfgPatches
{
	class tfv_core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class cfgFactionClasses
{
	class tfv_units
	{		
		displayname="TF Valkyrie";
		side=1;
		priority=2;
		flag="\tfv_core\data\tfv_units_flag.paa";
		icon="\tfv_core\data\tfv_units_icon.paa";
	};
};