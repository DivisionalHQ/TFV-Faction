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
	
	//WOOD
	
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

		};
	};
	
	class TFV_Kitbag_Wood_Lead: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag Lead (Wood)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_wood_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_wood_co.paa"
		};
		class TransportItems
		{
			class _xx_caf_MNVG
			{
				name = "caf_MNVG";
				count = 1;
			};
			
			class _xx_ItemcTab
			{
				name = "ItemcTab";
				count = 1;
			};
		};
	};
		
	class TFV_Backpack_Medic_Wood: B_Kitbag_Base
	{
		scope = 1;
		displayName = "TFV Medic Backpack (Wood)";
		author = "TFV";
		picture = "\tfv_backpacks\data\ui\nor_kitbag_wood_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\tfv_backpacks\data\nor_kitbag_medic_wood_co.paa"};
		class TransportMagazines
		{
		
		};
		class TransportItems
		{
			class _xx_AGM_Bandage
			{
				name = "AGM_Bandage";
				count = 30;
			};
			
			class _xx_AGM_Morphine
			{
				name = "AGM_Morphine";
				count = 10;
			};
			
			class _xx_AGM_Epipen
			{
				name = "AGM_Epipen";
				count = 10;
			};
			
			class _xx_AGM_Bloodbag
			{
				name = "AGM_Bloodbag";
				count = 4;
			};
		};
	};	
	
	class TFV_Kitbag_Wood_AT: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag AT (Wood)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_wood_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_wood_co.paa"
		};
		
		class TransportMagazines
		{
			class _xx_STI_84MM_HEAT
			{
				magazine = "STI_84MM_HEAT";
				count = 2;
			};
		
		};
		
		class TransportItems
		{

		};
	};
	
	class TFV_Kitbag_Wood_Grenadier: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag Grenadier (Wood)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_wood_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_wood_co.paa"
		};
		
		class TransportMagazines
		{
			name = "1Rnd_HE_Grenade_shell";
			count = 5;
		};
		
		class TransportItems
		{

		};
	};
	
	
	//DESERT
		
	class TFV_Kitbag_Desert: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag (Desert)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_Desert_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_Desert_co.paa"
		};
		class TransportItems
		{

		};
	};
	
	class TFV_Kitbag_Desert_Lead: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag Lead (Desert)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_Desert_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_Desert_co.paa"
		};
		class TransportItems
		{
			class _xx_caf_MNVG
			{
				name = "caf_MNVG";
				count = 1;
			};
			
			class _xx_ItemcTab
			{
				name = "ItemcTab";
				count = 1;
			};
		};
	};
		
	class TFV_Backpack_Medic_Desert: B_Kitbag_Base
	{
		scope = 1;
		displayName = "TFV Medic Backpack (Desert)";
		author = "TFV";
		picture = "\tfv_backpacks\data\ui\nor_kitbag_Desert_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\tfv_backpacks\data\nor_kitbag_medic_Desert_co.paa"};
		class TransportMagazines
		{
		
		};
		class TransportItems
		{
			class _xx_AGM_Bandage
			{
				name = "AGM_Bandage";
				count = 30;
			};
			
			class _xx_AGM_Morphine
			{
				name = "AGM_Morphine";
				count = 10;
			};
			
			class _xx_AGM_Epipen
			{
				name = "AGM_Epipen";
				count = 10;
			};
			
			class _xx_AGM_Bloodbag
			{
				name = "AGM_Bloodbag";
				count = 4;
			};
		};
	};	
	
	class TFV_Kitbag_Desert_AT: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag AT (Desert)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_Desert_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_Desert_co.paa"
		};
		
		class TransportMagazines
		{
			class _xx_STI_84MM_HEAT
			{
				magazine = "STI_84MM_HEAT";
				count = 2;
			};
		};
		
		class TransportItems
		{

		};
	};
	
	class TFV_Kitbag_Desert_Grenadier: B_Kitbag_Base
	{
		scope=2;
		displayName="TFV Kitbag Grenadier (Desert)";
		author="TFV";
		picture="\tfv_backpacks\data\ui\nor_kitbag_Desert_icon_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\tfv_backpacks\data\nor_kitbag_Desert_co.paa"
		};
		
		class TransportMagazines
		{
			name = "1Rnd_HE_Grenade_shell";
			count = 5;
		};
		
		class TransportItems
		{

		};
	};
};
	
