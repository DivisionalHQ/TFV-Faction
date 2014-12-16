_unit = _this select 0; // reference to the unit

_TFVWood = ["TFV_SL_Wood","TFV_FTL_Wood","TFV_Medic_Wood","TFV_MG1_Wood","TFV_MG2_Wood","TFV_Rifleman_Wood","TFV_AT_Wood","TFV_Grenadier_Wood","TFV_CrewCO_Wood","TFV_Crew_Wood","TFV_HeliPilot_Wood","TFV_HeliCrew_Wood","TFV_JetPilot_Wood"];
_TFVWoodRecon = [];

_TFVDesert = ["TFV_SL_Desert","TFV_FTL_Desert","TFV_Medic_Desert","TFV_MG1_Desert","TFV_MG2_Desert","TFV_Rifleman_Desert","TFV_AT_Desert","TFV_Grenadier_Desert","TFV_CrewCO_Desert","TFV_Crew_Desert","TFV_HeliPilot_Desert","TFV_HeliCrew_Desert","TFV_JetPilot_Desert"];
_TFVDesertRecon = [];

_TFVSquadLeader = 			["TFV_SL_Wood","TFV_SL_Desert"];
_TFVFireTeamLeader =			["TFV_FTL_Wood","TFV_FTL_Desert"];
_TFVMedic = 				["TFV_Medic_Wood","TFV_Medic_Desert"];
_TFVAutoRifleman1 = 			["TFV_MG1_Wood","TFV_MG1_Desert"];
_TFVAutoRifleman2 =			["TFV_MG2_Wood","TFV_MG2_Desert"];
_TFVRifleMan = 				["TFV_Rifleman_Wood","TFV_Rifleman_Desert"];
_TFVAntiTank = 				["TFV_AT_Wood","TFV_AT_Desert"];
_TFVGrenadier = 			["TFV_Grenadier_Wood","TFV_Grenadier_Desert"];
_TFVCrewCommand = 			["TFV_CrewCO_Wood","TFV_CrewCO_Desert"];
_TFVCrewMembers = 			["TFV_Crew_Wood","TFV_Crew_Desert"];
_TFVHeliPilot = 			["TFV_HeliPilot_Wood","TFV_HeliPilot_Desert"];
_TFVHeliCrew = 				["TFV_HeliCrew_Wood","TFV_HeliCrew_Desert"];
_TFVJetPilot = 				["TFV_JetPilot_Wood","TFV_JetPilot_Desert"];
_TFVSniper =				["TFV_Sniper_Wood","TFV_Sniper_Desert"];
_TFVSpotter =				["TFV_Spotter_Wood","TFV_Spotter_Desert"];

if (!(local _unit)) exitwith {}; // if unit is not local to the client, terminate script

//FNG --------------------------------------------------------------
	
	//RAVOSK-----------------------------------------------------------------------
		if (((profilename find "Ravosk") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_FNG";
			_unit addVest "TFV_Vest_Standard_Wood_FNG";
		};

		if (((profilename find "Ravosk") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_FNG";
			_unit addVest "TFV_Vest_Standard_Desert_FNG";
		};


//PERSONAL UNIFORMS--------------------------------------------------------------

	//EKLUND---------------------------------------------------------------------
		if (((profilename find "Eklund") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Eklund";
			_unit addVest "TFV_Vest_Standard_Wood_Eklund";
		};

		if (((profilename find "Eklund") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Eklund";
			_unit addVest "TFV_Vest_Standard_Desert_Eklund";
		};
 
	//GJERDE---------------------------------------------------------------------
		if (((profilename find "Gjerde") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Gjerde";
			_unit addVest "TFV_Vest_Standard_Wood_Gjerde";
		};
		
		if (((profilename find "Gjerde") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Gjerde";
			_unit addVest "TFV_Vest_Standard_Desert_Gjerde";
		};
	
	//GREPPERUD---------------------------------------------------------------------
		if (((profilename find "Grepperud") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Grepperud";
			_unit addVest "TFV_Vest_Standard_Wood_Grepperud";
		};
	
		if (((profilename find "Grepperud") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Grepperud";
			_unit addVest "TFV_Vest_Standard_Desert_Grepperud";
		};

	//HAAGENRUD----------------------------------------------------------------------
 
		if (((profilename find "Haagenrud") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Haagenrud";
			_unit addVest "TFV_Vest_Standard_Wood_Haagenrud";
		};

		if (((profilename find "Haagenrud") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Haagenrud";
			_unit addVest "TFV_Vest_Standard_Desert_Haagenrud";
		};
 
	//HANSLIEN---------------------------------------------------------------------
		if (((profilename find "Hanslien") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Hanslien";
			_unit addVest "TFV_Vest_Standard_Wood_Hanslien";
		};
	
		if (((profilename find "Hanslien") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Hanslien";
			_unit addVest "TFV_Vest_Standard_Desert_Hanslien";
		};
	
	//HOFSTAD----------------------------------------------------------------------
 
		if (((profilename find "Hofstad") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Hofstad";
			_unit addVest "TFV_Vest_Standard_Wood_Hofstad";
		};

		 if (((profilename find "Hofstad") != -1) && (typeOf _unit) in _TFVDesert) then {
			_unit forceAddUniform "TFV_Uniform_Desert_Hofstad";
			_unit addVest "TFV_Vest_Standard_Desert_Hofstad";
		};

	//VAN HOVEN----------------------------------------------------------------------
 
		if (((profilename find "Hoven") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Hoven";
			_unit addVest "TFV_Vest_Standard_Wood_Hoven";
		};
	
		 if (((profilename find "Hoven") != -1) && (typeOf _unit) in _TFVDesert) then 
	 	{
			_unit forceAddUniform "TFV_Uniform_Desert_Hoven";
			_unit addVest "TFV_Vest_Standard_Desert_Hoven";
		};

	//HUSBY----------------------------------------------------------------------
	
		if (((profilename find "Husby") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Husby";
			_unit addVest "TFV_Vest_Standard_Wood_Husby";
		};

		if (((profilename find "Husby") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Husby";
			_unit addVest "TFV_Vest_Standard_Desert_Husby";
		};
 
	//JENSEN----------------------------------------------------------------------
	
		if (((profilename find "Jensen") != -1) && (typeOf _unit) in _TFVWood) then
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Jensen";
			_unit addVest "TFV_Vest_Standard_Wood_Jensen";
		};
 
		if (((profilename find "Jensen") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Jensen";
			_unit addVest "TFV_Vest_Standard_Desert_Jensen";
		};
 
	//LØBERG----------------------------------------------------------------------
	
		if (((profilename find "Løberg") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Loberg";
			_unit addVest "TFV_Vest_Standard_Wood_Loberg";
		};
	
		if (((profilename find "Løberg") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Loberg";
			_unit addVest "TFV_Vest_Standard_Desert_Loberg";
		};

	//MARTHINSEN----------------------------------------------------------------------
	
	 	if (((profilename find "Marthinsen") != -1) && (typeOf _unit) in _TFVDesert) then 
	 	{
			_unit forceAddUniform "TFV_Uniform_Desert_Marthinsen";
			_unit addVest "TFV_Vest_Standard_Desert_Marthinsen";
		};
	
		if (((profilename find "Marthinsen") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Marthinsen";
			_unit addVest "TFV_Vest_Standard_Wood_Marthinsen";
		};

	//MURVOLD----------------------------------------------------------------------
 
		if (((profilename find "Murvold") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Murvold";
			_unit addVest "TFV_Vest_Standard_Wood_Murvold";
		};

		if (((profilename find "Murvold") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Murvold";
			_unit addVest "TFV_Vest_Standard_Desert_Murvold";
		};
	
	//MYKLEBUST----------------------------------------------------------------------
 
		if (((profilename find "Myklebust") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Myklebust";
			_unit addVest "TFV_Vest_Standard_Wood_Myklebust";
		};

	 	if (((profilename find "Myklebust") != -1) && (typeOf _unit) in _TFVDesert) then 
	 	{
			_unit forceAddUniform "TFV_Uniform_Desert_Myklebust";
			_unit addVest "TFV_Vest_Standard_Desert_Myklebust";
		};
	
	//MYRVANG----------------------------------------------------------------------
 
		if (((profilename find "Myrvang") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Myrvang";
			_unit addVest "TFV_Vest_Standard_Wood_Myrvang";
		};

		if (((profilename find "Myrvang") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Myrvang";
			_unit addVest "TFV_Vest_Standard_Desert_Myrvang";
		};
	
	//PEDERSEN----------------------------------------------------------------------
 
		if (((profilename find "Pedersen") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Pedersen";
			_unit addVest "TFV_Vest_Standard_Wood_Pedersen";
		};
	
	 	if (((profilename find "Pedersen") != -1) && (typeOf _unit) in _TFVDesert) then 
	 	{
			_unit forceAddUniform "TFV_Uniform_Desert_Pedersen";
			_unit addVest "TFV_Vest_Standard_Desert_Pedersen";
		};

	//VEDAL----------------------------------------------------------------------
	
		if (((profilename find "Vedal") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Vedal";
			_unit addVest "TFV_Vest_Standard_Wood_Vedal";
		};
	
		if (((profilename find "Vedal") != -1) && (typeOf _unit) in _TFVDesert) then 
		{
			_unit forceAddUniform "TFV_Uniform_Desert_Vedal";
			_unit addVest "TFV_Vest_Standard_Desert_Vedal";
		};

	//WALKDEN----------------------------------------------------------------------
	
		if (((profilename find "Walkden") != -1) && (typeOf _unit) in _TFVWood) then 
		{
			_unit forceAddUniform "TFV_Uniform_Wood_Walkden";
			_unit addVest "TFV_Vest_Standard_Wood_Walkden";
		};
	
	 	if (((profilename find "Walkden") != -1) && (typeOf _unit) in _TFVDesert) then 
	 	{
			_unit forceAddUniform "TFV_Uniform_Desert_Walkden";
			_unit addVest "TFV_Vest_Standard_Desert_Walkden";
		};

//CUSTOM UNIT LOADOUT-----------------------------------------------------------------

	//SQUADLEADER-------------------------------------------------------------------------

		if ((typeOf _unit) in _TFVSquadLeader) then {
	
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
	
		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			for "_i" from 1 to 2 do {_unit addItemToUniform "RH_15Rnd_45cal_fnp";};
			_unit addItemToVest "muzzle_mas_snds_M";
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "AGM_MapTools";
			for "_i" from 1 to 5 do {_unit addItemToVest "cse_bandage_basic";};
			_unit addItemToVest "ItemcTab";
			_unit addItemToVest "RH_gemtech45";
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			_unit addItemToVest "1Rnd_SmokeGreen_Grenade_shell";
			_unit addItemToVest "1Rnd_SmokeRed_Grenade_shell";
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			_unit addItemToVest "SmokeShellGreen";
			_unit addItemToVest "SmokeShellRed";
			for "_i" from 1 to 8 do {_unit addItemToVest "30Rnd_mas_556x45_Stanag";};
			_unit addBackpack "tf_rt1523g_big_bwmod";
			for "_i" from 1 to 5 do {_unit addItemToBackpack "AGM_CableTie";};
			for "_i" from 1 to 5 do {_unit addItemToBackpack "cse_bandage_basic";};
			for "_i" from 1 to 2 do {_unit addItemToBackpack "UGL_FlareCIR_F";};
			_unit addHeadgear "vdo_opscore_multicam_2_devgru_peltor";
					
		comment "Add weapons";
			_unit addWeapon "arifle_mas_hk416_gl_v";
			_unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15_black";
			_unit addPrimaryWeaponItem "optic_Hamr";
			_unit addWeapon "RH_fnp45t";
			_unit addHandgunItem "RH_X300";
			_unit addHandgunItem "RH_docter";
			_unit addWeapon "AGM_Vector";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";
			
		comment "Set identity";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	
	};
	
	
//FIRETEAMLEADER-------------------------------------------------------------------------

	if ((typeOf _unit) in _TFVFireTeamLeader) then {
	
	comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
	
		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			for "_i" from 1 to 2 do {_unit addItemToUniform "RH_15Rnd_45cal_fnp";};
			_unit addItemToVest "muzzle_mas_snds_M";
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "AGM_MapTools";
			for "_i" from 1 to 5 do {_unit addItemToVest "cse_bandage_basic";};
			_unit addItemToVest "ItemcTab";
			_unit addItemToVest "RH_gemtech45";
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			_unit addItemToVest "1Rnd_SmokeGreen_Grenade_shell";
			_unit addItemToVest "1Rnd_SmokeRed_Grenade_shell";
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			_unit addItemToVest "SmokeShellGreen";
			_unit addItemToVest "SmokeShellRed";
			for "_i" from 1 to 8 do {_unit addItemToVest "30Rnd_mas_556x45_Stanag";};
			_unit addBackpack "tf_rt1523g_big_bwmod";
			for "_i" from 1 to 5 do {_unit addItemToBackpack "AGM_CableTie";};
			for "_i" from 1 to 5 do {_unit addItemToBackpack "cse_bandage_basic";};
			for "_i" from 1 to 2 do {_unit addItemToBackpack "UGL_FlareCIR_F";};
			_unit addHeadgear "vdo_opscore_multicam_2_devgru_peltor";
					
		comment "Add weapons";
			_unit addWeapon "arifle_mas_hk416_gl_v";
			_unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15_black";
			_unit addPrimaryWeaponItem "optic_Hamr";
			_unit addWeapon "RH_fnp45t";
			_unit addHandgunItem "RH_X300";
			_unit addHandgunItem "RH_docter";
			_unit addWeapon "AGM_Vector";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";
			
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	
	};

//MEDIC-------------------------------------------------------------------------------

	if ((typeOf _unit) in _TFVMedic) then 
	{	
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;

		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "RH_17Rnd_9x19_g17";
			_unit addItemToVest "muzzle_MK18D_L";
			for "_i" from 1 to 10 do {_unit addItemToVest "cse_bandage_basic";};
			for "_i" from 1 to 5 do {_unit addItemToVest "cse_morphine";};
			for "_i" from 1 to 5 do {_unit addItemToVest "cse_epinephrine";};
			for "_i" from 1 to 4 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "RH_gemtech9";
			for "_i" from 1 to 6 do {_unit addItemToVest "SmokeShell";};
			_unit addItemToVest "HandGrenade";
			for "_i" from 1 to 3 do {_unit addItemToVest "30Rnd_556x45_Stanag";};
			_unit addBackpack "NOR_Kitbag_Medic_Wood";
			for "_i" from 1 to 4 do {_unit addItemToBackpack "cse_blood_iv";};
			for "_i" from 1 to 30 do {_unit addItemToBackpack "cse_bandage_basic";};
			for "_i" from 1 to 10 do {_unit addItemToBackpack "cse_morphine";};
			for "_i" from 1 to 10 do {_unit addItemToBackpack "cse_epinephrine";};
			_unit addHeadgear "vdo_opscore_green_2_peltor";
			_unit addGoggles "Pomi_Goggles_Grn";

		comment "Add weapons";
			_unit addWeapon "RHARD_MK18AFG_F";
			_unit addPrimaryWeaponItem "PEQ15_A3_Top";
			_unit addPrimaryWeaponItem "FHQ_optic_AIM";
			_unit addWeapon "RH_g19t";
			_unit addHandgunItem "RH_M6X";
			_unit addWeapon "Binocular";

		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";

		comment "Set insignia";
			[_unit,"MedA"] call bis_fnc_setUnitInsignia;
	};
	
//GRENADIER-------------------------------------------------------------------------------

	if ((typeOf _unit) in _TFVGrenadier) then 
	{
	
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
		
		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			for "_i" from 1 to 2 do {_unit addItemToUniform "RH_15Rnd_45cal_fnp";};
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "muzzle_mas_snds_M";
			_unit addItemToVest "RH_gemtech45";
			_unit addItemToVest "HandGrenade";
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 4 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
			for "_i" from 1 to 6 do {_unit addItemToVest "1Rnd_Smoke_Grenade_shell";};
			for "_i" from 1 to 7 do {_unit addItemToVest "30Rnd_mas_556x45_Stanag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "UGL_FlareCIR_F";};
			_unit addBackpack "NOR_Carryall_Wood";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "SmokeShell";};
			for "_i" from 1 to 2 do {_unit addItemToBackpack "1Rnd_HE_Grenade_shell";};
			_unit addHeadgear "vdo_opscore_green_2_peltor";
			_unit addGoggles "Pomi_Goggles_Grn";
		
		comment "Add weapons";
			_unit addWeapon "arifle_mas_m4_m203c_v";
			_unit addPrimaryWeaponItem "RH_peq2_top";
			_unit addPrimaryWeaponItem "FHQ_optic_AIM";
			_unit addWeapon "RH_fnp45t";
			_unit addHandgunItem "RH_X300";
			_unit addHandgunItem "RH_docter";
			_unit addWeapon "Binocular";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";
		
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	};
	
//MACHINE GUNNER 1--------------------------------------------------------------------------
	if ((typeOf _unit) in _TFVAutoRifleman1) then 
	{
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
		
		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			_unit addItemToUniform "RH_17Rnd_9x19_g17";
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShell";};
			_unit addItemToVest "R3F_100Rnd_762x51_MINIMI";
			_unit addBackpack "NOR_Carryall_Wood";
			_unit addItemToBackpack "R3F_100Rnd_762x51_MINIMI";
			_unit addHeadgear "vdo_opscore_green_2_peltor";
			_unit addGoggles "Pomi_Goggles_Grn";
		
		comment "Add weapons";
			_unit addWeapon "R3F_Minimi_762";
			_unit addPrimaryWeaponItem "FHQ_optic_AIM";
			_unit addWeapon "RH_g19t";
			_unit addHandgunItem "RH_gemtech9";
			_unit addHandgunItem "RH_M6X";
			_unit addWeapon "Binocular";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";
		
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	};
	
//MACHINE GUNNER 2--------------------------------------------------------------------------

	if ((typeOf _unit) in _TFVAutoRifleman2) then 
	{
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
		
		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			_unit addItemToUniform "RH_17Rnd_9x19_g17";
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShell";};
			_unit addItemToVest "R3F_200Rnd_556x45_MINIMI";
			_unit addBackpack "NOR_Carryall_Wood";
			_unit addItemToBackpack "R3F_200Rnd_556x45_MINIMI";
			_unit addHeadgear "vdo_opscore_green_2_peltor";
			_unit addGoggles "Pomi_Goggles_Grn";
		
		comment "Add weapons";
			_unit addWeapon "R3F_Minimi";
			_unit addPrimaryWeaponItem "FHQ_optic_AIM";
			_unit addWeapon "RH_g19t";
			_unit addHandgunItem "RH_gemtech9";
			_unit addHandgunItem "RH_M6X";
			_unit addWeapon "Binocular";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";
		
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	};

	
//RIFLEMAN
	if ((typeOf _unit) in _TFVRifleMan) then 
	{
	
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
	
		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_Clacker";
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			for "_i" from 1 to 2 do {_unit addItemToUniform "RH_17Rnd_9x19_g17";};
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "RH_gemtech9";
			_unit addItemToVest "muzzle_MK18D_L";
			for "_i" from 1 to 6 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			for "_i" from 1 to 7 do {_unit addItemToVest "30Rnd_556x45_Stanag";};
			_unit addBackpack "NOR_Carryall_Wood";
			_unit addItemToBackpack "MineDetector";
			for "_i" from 1 to 4 do {_unit addItemToBackpack "DemoCharge_Remote_Mag";};
			_unit addItemToBackpack "ClaymoreDirectionalMine_Remote_Mag";
			_unit addHeadgear "vdo_opscore_multicam_2_devgru_peltor";
			_unit addGoggles "Pomi_Goggles_Snd";
					
		comment "Add weapons";
			_unit addWeapon "RHARD_MK18AFG_F";
			_unit addPrimaryWeaponItem "PEQ15_A3_Top";
			_unit addPrimaryWeaponItem "FHQ_optic_AIM";
			_unit addWeapon "RH_g19t";
			_unit addHandgunItem "RH_M6X";
			_unit addWeapon "Binocular";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";
	
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	};

//ANTI-TANK-----------------------------------------------------------
	if ((typeOf _unit) in _TFVAntiTank) then 
	{
	
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
	
		comment "Add containers";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			for "_i" from 1 to 2 do {_unit addItemToUniform "RH_15Rnd_45cal_fnp";};
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "muzzle_mas_snds_M";
			_unit addItemToVest "RH_gemtech45";
			_unit addItemToVest "HandGrenade";
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 6 do {_unit addItemToVest "30Rnd_mas_556x45_Stanag";};
			_unit addBackpack "NOR_Carryall_Wood";
			_unit addItemToBackpack "STI_84MM_HEAT";
			_unit addHeadgear "vdo_opscore_green_2_peltor";
			_unit addGoggles "Pomi_Goggles_Grn";
					
		comment "Add weapons";
			_unit addWeapon "arifle_mas_m4c";
			_unit addPrimaryWeaponItem "RH_peq2_top";
			_unit addPrimaryWeaponItem "FHQ_optic_AIM";
			_unit addWeapon "STI_MAAWS";
			_unit addWeapon "RH_fnp45t";
			_unit addHandgunItem "RH_X300";
			_unit addHandgunItem "RH_docter";
			_unit addWeapon "Binocular";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask2_t";
	
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	};

//SNIPER-----------------------------------------------------------
	if ((typeOf _unit) in _TFVSniper) then 
	{
	
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeUniform _unit;
			removeVest _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
	
		comment "Add containers";
			_unit forceAddUniform "NOR_Ghillie_Wood";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			for "_i" from 1 to 3 do {_unit addItemToUniform "RH_15Rnd_45cal_fnp";};
			_unit addVest "TFV_Vest_Standard_Wood";
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "RH_gemtech45";
			_unit addItemToVest "muzzle_mas_snds_SHc";
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShellPurple";};
			for "_i" from 1 to 2 do {_unit addItemToVest "B_IR_Grenade";};
			_unit addItemToVest "HandGrenade";
			for "_i" from 1 to 8 do {_unit addItemToVest "5Rnd_mas_762x51_Stanag";};
			_unit addBackpack "NOR_Carryall_Wood";
			_unit addItemToBackpack "C1987_MP7_suppressor";
			_unit addItemToBackpack "FHQ_optic_AIM";
			_unit addItemToBackpack "C1987_MP7_folded2";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "SmokeShell";};
			for "_i" from 1 to 3 do {_unit addItemToBackpack "C1987_40Rnd_46x30_mp7";};
					
		comment "Add weapons";
			_unit addWeapon "srifle_mas_m24_v";
			_unit addPrimaryWeaponItem "optic_LRPS";
			_unit addWeapon "RH_fnp45t";
			_unit addHandgunItem "RH_X300";
			_unit addHandgunItem "RH_docter";
			_unit addWeapon "AGM_Vector";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask_t";
	
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	};

//SPOTTER-----------------------------------------------------------
	if ((typeOf _unit) in _TFVSpotter) then 
	{
	
		comment "Remove existing items";
			removeAllWeapons _unit;
			removeAllItems _unit;
			removeAllAssignedItems _unit;
			removeUniform _unit;
			removeVest _unit;
			removeBackpack _unit;
			removeHeadgear _unit;
			removeGoggles _unit;
	
		comment "Add containers";
			_unit forceAddUniform "NOR_Ghillie_Wood";
			for "_i" from 1 to 2 do {_unit addItemToUniform "cse_bandage_basic";};
			_unit addItemToUniform "AGM_IR_Strobe_Item";
			for "_i" from 1 to 3 do {_unit addItemToUniform "RH_15Rnd_45cal_fnp";};
			_unit addVest "TFV_Vest_Standard_Wood";
			for "_i" from 1 to 5 do {_unit addItemToVest "AGM_CableTie";};
			_unit addItemToVest "RH_gemtech45";
			_unit addItemToVest "AGM_ItemKestrel";
			_unit addItemToVest "AGM_MapTools";
			_unit addItemToVest "ItemcTab";
			_unit addItemToVest "hlc_muzzle_snds_M14";
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShellPurple";};
			for "_i" from 1 to 2 do {_unit addItemToVest "B_IR_Grenade";};
			_unit addItemToVest "HandGrenade";
			for "_i" from 1 to 9 do {_unit addItemToVest "hlc_20Rnd_762x51_B_M14";};
			_unit addBackpack "tf_rt1523g_big";
			_unit addItemToBackpack "C1987_MP7_suppressor";
			_unit addItemToBackpack "FHQ_optic_AIM";
			_unit addItemToBackpack "C1987_MP7_folded2";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "SmokeShell";};
					
		comment "Add weapons";
			_unit addWeapon "hlc_rifle_m14dmr";
			_unit addPrimaryWeaponItem "hlc_optic_LRT_m14";
			_unit addWeapon "RH_fnp45t";
			_unit addHandgunItem "RH_X300";
			_unit addHandgunItem "RH_docter";
			_unit addWeapon "AGM_Vector";
		
		comment "Add items";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "tf_microdagr";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
			_unit linkItem "NVGoggles_mas_mask_t";
	
		comment "Set insignia";
			[_unit,"NOR_Insignia_viking_BW"] call bis_fnc_setUnitInsignia;
	};
