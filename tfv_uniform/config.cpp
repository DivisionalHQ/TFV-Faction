class CfgPatches
{
	class tfv_custom_uniform
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

	//Uniform Base
	
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	
	class TFV_Uniform_Officer: Uniform_Base
	{
		scope=2;
		displayName = "TFV Officer Uniform"
		picture = "\tfv_uniform\data\ui\nor_uniform_officer_wood_icon_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"\tfv_uniform\data\uniforms\nor_indep_uniform_officer_wood_co.paa"
		};
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
        {
            uniformModel = "-";
            /*uniformClass = "TFV_Rifleman_Wood"; */
            containerClass = "Supply40"; 
            mass = 40; //Weight
            hiddenSelections[] = {"camo"};
        };
	};
	
	class TFV_Uniform_Basic: Uniform_Base
	{
		scope=2;
		displayName = "TFV Basic Uniform"
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"\tfv_uniform\data\uniforms\nor_indep_uniform_wood_co.paa"
		};
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
        {
            uniformModel = "-";
            /*uniformClass = "TFV_SL_Wood"; */
            containerClass = "Supply40"; 
            mass = 40; //Weight
            hiddenSelections[] = {"camo"};
        };
	};
	
	//Personal Uniforms
	
	class TFV_Loberg_Wood: Uniform_Base
	{
		scope=2;
		displayName = "TFV Uniform Loberg"
		picture = "\tfv_uniform\data\ui\nor_uniform_wood_icon_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"\tfv_uniform\data\uniforms\personal\Loberg_Upper_Woodland_Normal.paa"
		};
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
        {
            uniformModel = "-";
            /*uniformClass = "TFV_SL_Wood"; */
            containerClass = "Supply40"; 
            mass = 40; //Weight
            hiddenSelections[] = {"camo"};
        };
	};	

	
	
};

class CfgUnitInsignia
{
	class tfv_nor_flag_insignia
	{
		displayName="TFV_NOR_INSIGNIA";
		texture="\tfv_uniform\data\insignias\nor_insg_flag_color_co.paa";
		author="Loberg";
	};
};