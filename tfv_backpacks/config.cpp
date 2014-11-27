class CfgPatches
{
	class tfv_custom_backpack
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

class CfgVehicles
{
	class B_Kitbag_Base;
	class TFV_Kitbag_Wood: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag (Wood)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_wood_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_wood_co.paa"
		};
		class TransportItems
		{
			class _xx_itemCtab
			{
				name="itemCTab";
				count=1;
			};
		};
	};
		
		
		
	};
	
};