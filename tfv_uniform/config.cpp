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

class CfgVehicles
{
	class B_Soldier_F;
	class TFV_Officer_Base_Wood: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="TFV_Uniform_Officer";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\tfv_uniform\data\uniforms\nor_indep_uniform_wood_co.paa"
		};
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};

};


//Uniform Base
	
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	
	class TFV_Uniform_Officer: Uniform_Base
	{
		author="TFV";
		scope=2;
		displayName="TFV Officer Uniform";
		picture = "\tfv_uniform\data\ui\nor_uniform_officer_wood_icon_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TFV_Officer_Test_SL";
			containerClass="Supply40";
			mass=40;
		};
	};	
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
