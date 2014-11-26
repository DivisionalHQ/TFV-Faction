/* This will contain vests, helmets and other hats if neccessary*/

class CfgPatches
{
	class tfv_custom_equip
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

class cfgWeapons
{
class V_PlateCarrier1_rgr;
class VestItem;
class TFV_Vest_Standard_Wood: V_PlateCarrier1_rgr
	{
		_generalMacro="V_PlateCarrier1_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\vest\nor_carrier_standard_wood_co.paa"
		};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply140";
			mass=60;
			armor=20;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};


};