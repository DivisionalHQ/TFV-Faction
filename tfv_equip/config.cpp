/* This will contain vests, helmets and other hats if neccessary*/

class CfgPatches
{
	class tfv_custom_equip
	{
		units[] = {};
		weapons[] = {"helmet_loberg"};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"TFV"};
		version = 0.1;
		versionStr = "0.1";
	};
};

class cfgWeapons
{
	class V_PlateCarrier2_rgr;
	class VestItem;
	class ItemCore;
	class HeadgearItem;
	
	//Generic Vest and Helmet
	
	class TFV_Vest_Standard_Wood: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\tfv_equip\data\vest\wood\Wood_Carrier_Generic.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\tfv_equip\data\vest\desert\Desert_Carrier_Generic.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	
	// FNG Vests and Helmets
	
	class TFV_Vest_Standard_Wood_FNG: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - FNG";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\tfv_equip\data\vest\wood\Wood_Carrier_FNG.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_FNG: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - FNG";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\tfv_equip\data\vest\desert\Desert_Carrier_FNG.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_FNG: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - FNG";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_FNG.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_FNG.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	
	//Personal Vests and Helmets Wood
	
	
	//EKLUND
	class TFV_Vest_Standard_Wood_Eklund: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Eklund";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Eklund.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Eklund: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Eklund";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Eklund.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_eklund: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Eklund";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Eklund.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Eklund.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
		
	//GREPPERUD
	class TFV_Vest_Standard_Wood_Grepperud: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Grepperud";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Grepperud.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};

	class TFV_Vest_Standard_Desert_Grepperud: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Grepperud";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Grepperud.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_Grepperud: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Grepperud";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Grepperud.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Grepperud.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};	

	//HAAGENRUD
	class TFV_Vest_Standard_Wood_Haagenrud: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Haagenrud";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Haagenrud.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	
	class TFV_Vest_Standard_Desert_Haagenrud: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Haagenrud";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Haagenrud.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_haagenrud: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Haagenrud";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Haagenrud.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Haagenrud.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};	

	//HANSLIEN
	class TFV_Vest_Standard_Wood_Hanslien: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Hanslien";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Hanslien.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Hanslien: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Hanslien";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Hanslien.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_hanslien: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Hanslien";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Hanslien.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Hanslien.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	//HOFSTAD
	class TFV_Vest_Standard_Wood_Hofstad: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Hofstad";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Hofstad.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Hofstad: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Hofstad";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Hofstad.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_hofstad: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Hofstad";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Hofstad.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Hofstad.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};	
	
	//VANHOVEN/PLAZ
	class TFV_Vest_Standard_Wood_Hoven: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Hoven";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Hoven.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Hoven: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Hoven";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Hoven.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_hoven: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Van Hoven";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_VanHoven.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_VanHoven.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	//HUSBY
	class TFV_Vest_Standard_Wood_Husby: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Husby";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Husby.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Husby: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Husby";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Husby.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_husby: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Husby";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Husby.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Husby.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	// LOBERG
	
	class TFV_Vest_Standard_Wood_Loberg: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Loberg";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Loberg.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
		class TFV_Vest_Standard_Desert_Loberg: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Loberg";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Loberg.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_loberg: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Loberg";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Loberg.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Loberg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	//MARTHINSEN
	class TFV_Vest_Standard_Wood_Marthinsen: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Marthinsen";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Marthinsen.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Marthinsen: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Marthinsen";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Marthinsen.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_marthinsen: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Marthinsen";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Marthinsen.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Marthinsen.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	
	//MYKLEBUST
	class TFV_Vest_Standard_Wood_Myklebust: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Myklebust";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Myklebust.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Myklebust: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Myklebust";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Myklebust.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_myklebust: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Myklebust";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Myklebust.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Myklebust.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	//MYRVANG
	class TFV_Vest_Standard_Wood_Myrvang: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Myrvang";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Myrvang.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};

	class TFV_Vest_Standard_Desert_Myrvang: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Myrvang";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Myrvang.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};	

	class tfv_helmet_wood_myrvang: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Myrvang";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Myrvang.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Myrvang.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	//PEDERSEN
	class TFV_Vest_Standard_Wood_Pedersen: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Pedersen";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Pedersen.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Pedersen: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Pedersen";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Pedersen.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_pedersen: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Pedersen";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Pedersen.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Pedersen.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};	

	//VEDAL
	class TFV_Vest_Standard_Wood_Vedal: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Vedal";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Vedal.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Vedal: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Vedal";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Vedal.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};

	class tfv_helmet_wood_vedal: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Vedal";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Vedal.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Vedal.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};
	
	//WALKDEN
	class TFV_Vest_Standard_Wood_Walkden: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Walkden";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Walkden.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class TFV_Vest_Standard_Desert_Walkden: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Walkden";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Walkden.paa"};
		author="TFV";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=80;
			armor=30;
			passThrough=0.5;
			hiddenSelections[]= {"camo"};
		};
	};
	
	class tfv_helmet_wood_walkden: ItemCore
	{
		scope=2;
		author="TFV";
		displayName="TFV Standard Helmet Wood - Walkden";
		picture="\tfv_equip\data\gui\grey.paa";
		model="\tfv_equip\tfv_helmet_model.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_equip\data\helmets\wood\H_W_Walkden.paa",
			"\tfv_equip\data\helmets\wood\vdo_peltor_grey_co.paa",
			"\tfv_equip\data\helmets\wood\B_Walkden.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\tfv_equip\tfv_helmet_model.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Camo3"
			};
		};
	};

};
