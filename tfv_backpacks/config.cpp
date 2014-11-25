class CfgPatches
{
	class tfv_custom_backpack
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

class CfgVehicles
{
	class B_Kitbag_Base;
	class TFV_Kitbag_Wood: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag (Wood)";
		author="Vasilyevich";
		picture="\tfv_backpacks\data\ui\nor_kitbag_wood_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_wood_co.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine="30Rnd_mas_556x45_Stanag";
				count=3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count=3;
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
			};
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