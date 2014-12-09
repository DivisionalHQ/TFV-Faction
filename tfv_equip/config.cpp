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
	class V_PlateCarrier2_rgr;
	class VestItem;
	
	//Generic Vests
	
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
	
	
	// FNG Vests
	
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
	
	
	//Personal Vests Wood
	
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
	
	class TFV_Vest_Standard_Wood_Gjerde: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Gjerde";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Gjerde.paa"};
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
	
	class TFV_Vest_Standard_Wood_Jensen: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Jensen";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Jensen.paa"};
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
	
	class TFV_Vest_Standard_Wood_Murvold: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Wood - Murvold";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\wood\personal\Wood_Carrier_Murvold.paa"};
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

	//Personal Vests Desert	

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
	
	class TFV_Vest_Standard_Desert_Gjerde: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Gjerde";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Gjerde.paa"};
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
	
	class TFV_Vest_Standard_Desert_Jensen: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Jensen";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Jensen.paa"};
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
	
	class TFV_Vest_Standard_Desert_Murvold: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		scope=2;
		picture="\tfv_equip\data\vest\ui\nor_carrier_rig_1_coyote_icon_ca.paa";
		displayName="TFV Standard Vest Desert - Murvold";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"\tfv_equip\data\vest\desert\personal\Desert_Carrier_Murvold.paa"};
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


};