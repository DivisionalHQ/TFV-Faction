class CfgPatches
{
	class tfv_Weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class arifle_mas_hk416_gl;
	class RH_g19t;
	class tfv_arifle_mas_hk416_gl: arifle_mas_hk416_gl
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "RH_ta31rco_2D";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "RH_peq2_top";
				slot = "PointerSlot";
			};
		};
	};
	
	class tfv_RH_g19t: RH_g19t
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "RH_gemtech9";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "RH_M6X";
				slot = "PointerSlot";
			};
		};
	};
	
	
};