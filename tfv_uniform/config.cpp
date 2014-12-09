class CfgPatches
{
	class tfv_custom_uniform
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

class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};

class CfgUnitInsignia
{
	class tfv_nor_flag_insignia
	{
		displayName="TFV_NOR_INSIGNIA";
		texture="\tfv_uniform\data\insignias\nor_insg_flag_color_co.paa";
		author="TFV";
	};
};

class CfgVehicles
{
	class B_Soldier_F;
	class TFV_Uniform_Base_Wood: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\nor_indep_uniform_wood_co.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\desert\nor_indep_uniform_desert_co.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	//FNG Uniform Base
	
	class TFV_Uniform_Base_Wood_FNG: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_FNG";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\FNG_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_FNG: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]={"\tfv_uniform\data\uniforms\desert\FNG_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	//Personal Uniforms Base - Remember to create uniform below
	
	class TFV_Uniform_Base_Wood_Eklund: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Eklund";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Eklund_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Eklund: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Eklund";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Eklund_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Gjerde: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Gjerde";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Gjerde_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Gjerde: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Gjerde";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Gjerde_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Grepperud: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Grepperud";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Grepperud_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Grepperud: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Grepperud";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Grepperud_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Haagenrud: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Haagenrud";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Haagenrud_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Haagenrud: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Haagenrud";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Haagenrud_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Hanslien: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Hanslien";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Hanslien_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Hanslien: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Hanslien";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Hanslien_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Hofstad: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Hofstad";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Hofstad_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Hofstad: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Hofstad";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Hofstad_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Hoven: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Hoven";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Hoven_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Hoven: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Hoven";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Hoven_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Husby: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Husby";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Husby_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Husby: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Husby";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Husby_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Jensen: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Jensen";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Jensen_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Jensen: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Jensen";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Jensen_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Loberg: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Loberg";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Loberg_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Loberg: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Loberg";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Loberg_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Marthinsen: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Marthinsen";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Marthinsen_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Marthinsen: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Marthinsen";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Marthinsen_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	
	class TFV_Uniform_Base_Wood_Murvold: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Murvold";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Murvold_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Murvold: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Murvold";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Murvold_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Myklebust: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Myklebust";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Myklebust_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Myklebust: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Myklebust";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Myklebust_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Myrvang: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Myrvang";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Myrvang_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Myrvang: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Myrvang";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Myrvang_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Pedersen: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Pedersen";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Pedersen_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Pedersen: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Pedersen";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Pedersen_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Vedal: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Vedal";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Vedal_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Vedal: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Vedal";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Vedal_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Wood_Walkden: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Wood_Walkden";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]= {"\tfv_uniform\data\uniforms\wood\personal\Walkden_Upper_Woodland_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class TFV_Uniform_Base_Desert_Walkden: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Desert_Walkden";
		hiddenSelections[]= {"Camo","insignia"};
		hiddenSelectionsTextures[]=
		{"\tfv_uniform\data\uniforms\desert\personal\Walkden_Upper_Desert_Normal.paa"};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	

};

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	
	class TFV_Uniform_Wood: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class TFV_Uniform_Desert: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert";
			containerClass="Supply40";
			mass=40;
		};
	};

	//FNG
	class TFV_Uniform_Wood_FNG: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - FNG)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_FNG";
			containerClass="Supply40";
			mass=40;
		};
	};
	
		class TFV_Uniform_Desert_FNG: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - FNG)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_FNG";
			containerClass="Supply40";
			mass=40;
		};
	};
	
//Personal Uniforms
	
	//EKLUND------------------------------------------------------------------------------------------------	
	
	class TFV_Uniform_Wood_Eklund: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Eklund)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Eklund";
			containerClass="Supply40";
			mass=40;
		};
	};
	
		class TFV_Uniform_Desert_Eklund: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Eklund)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Eklund";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//GJERDE------------------------------------------------------------------------------------------------	
	
	class TFV_Uniform_Wood_Gjerde: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Gjerde)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Gjerde";
			containerClass="Supply40";
			mass=40;
		};
	};
	
		class TFV_Uniform_Desert_Gjerde: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Gjerde)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Gjerde";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//GREPPERUD------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Grepperud: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Grepperud)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Grepperud";
			containerClass="Supply40";
			mass=40;
		};
	};
	
		class TFV_Uniform_Desert_Grepperud: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Grepperud)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Grepperud";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//HAAGENRUD------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Haagenrud: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Haagenrud)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Haagenrud";
			containerClass="Supply40";
			mass=40;
		};
	};
	
		class TFV_Uniform_Desert_Haagenrud: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Haagenrud)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Haagenrud";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//HANSLIEN------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Hanslien: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Hanslien)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Hanslien";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Hanslien: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Hanslien)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Hanslien";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//HOFSTAD------------------------------------------------------------------------------------------------	

		class TFV_Uniform_Wood_Hofstad: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Hofstad)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Hofstad";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Hofstad: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Hofstad)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Hofstad";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//HOVEN------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Hoven: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Hoven)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Hoven";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Hoven: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Hoven)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Hoven";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//HUSBY------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Husby: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Husby)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Husby";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Husby: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Husby)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Husby";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//JENSEN------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Jensen: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Jensen)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Jensen";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Jensen: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Jensen)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Jensen";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//LOBERG------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Loberg: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Loberg)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Loberg";
			containerClass="Supply40";
			mass=40;
		};
	};
	
		class TFV_Uniform_Desert_Loberg: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Loberg)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Loberg";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	
	//MARTHINSEN------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Marthinsen: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Marthinsen)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Marthinsen";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Marthinsen: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Marthinsen)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Marthinsen";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//MURVOLD------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Murvold: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Murvold)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Murvold";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Murvold: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Murvold)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Murvold";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//MYKLEBUST------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Myklebust: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Myklebust)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Myklebust";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Myklebust: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Myklebust)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Myklebust";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	
	//MYRVANG------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Myrvang: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Myrvang)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Myrvang";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Myrvang: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Myrvang)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Myrvang";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//PEDERSEN------------------------------------------------------------------------------------------------	
	
		class TFV_Uniform_Wood_Pedersen: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Pedersen)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Pedersen";
			containerClass="Supply40";
			mass=40;
		};
	};
	
		class TFV_Uniform_Desert_Pedersen: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Pedersen)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Pedersen";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//VEDAL------------------------------------------------------------------------------------------------
	
		class TFV_Uniform_Wood_Vedal: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Vedal)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Vedal";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Vedal: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Vedal)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Vedal";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	//WALKDEN--------------------------------------------------------------------------------------------------
	
		class TFV_Uniform_Wood_Walkden: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Wood - Walkden)";
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Wood_Walkden";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
		class TFV_Uniform_Desert_Walkden: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Combat Uniform (Desert - Walkden)";
		picture = "\tfv_uniform\data\ui\nor_uniform_desert_icon_ca.paa"; 
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Uniform_Base_Desert_Walkden";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	
	
};


