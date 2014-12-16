class CfgPatches
{
	class tfv_groups
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgFactionClasses
{
	class tfv_units;
};

class CfgGroups
{
	class West
	{
		name = "$STR_A3_CfgGroups_West0";
			class tfv_units
			{
				name = "TF Valkyrie";
				class Infantry
				{
					name = "Infantry";
					class TFV_wood
					{
						name = "Section (Wood)";
						side = 1;
						rarityGroup = 0.3;
						faction = "TFV_Units";
						
						class Unit0
						{
						side = 1;
						vehicle = "TFV_SL_Wood";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
						
						class Unit1
						{
						side = 1;
						vehicle = "TFV_FTL_Wood";
						rank = "CORPORAL";
						position[] = {3,0,0};
						};
						
						class Unit2
						{
						side = 1;
						vehicle = "TFV_Medic_Wood";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
						
						class Unit3
						{
						side = 1;
						vehicle = "TFV_MG1_Wood";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
						
						class Unit4
						{
						side = 1;
						vehicle = "TFV_MG2_Wood";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
						
						class Unit5
						{
						side = 1;
						vehicle = "TFV_Rifleman_Wood";
						rank = "PRIVATE";
						position[] = {12,0,0};
						};
					
						class Unit6
						{
						side = 1;
						vehicle = "TFV_AT_Wood";
						rank = "PRIVATE";
						position[] = {14,0,0};
						};
						
						class Unit7
						{
						side = 1;
						vehicle = "TFV_Grenadier_Wood";
						rank = "PRIVATE";
						position[] = {16,0,0};
						};				
						
					};
					
					class TFV_Wood_Recon
					{
						name = "Recon Team (Wood)";
						side = 1;
						rarityGroup = 0.3;
						faction = "TFV_Units";
						
						class Unit0
						{
						side = 1;
						vehicle = "TFV_Sniper_Wood";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
						
						class Unit1
						{
						side = 1;
						vehicle = "TFV_Spotter_Wood";
						rank = "CORPORAL";
						position[] = {0,5,0};
						};
					
					};
					
					class TFV_Desert
					{
						name = "Section (Desert)";
						side = 1;
						rarityGroup = 0.3;
						faction = "TFV_Units";
						
						class Unit0
						{
						side = 1;
						vehicle = "TFV_SL_Desert";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
						
						class Unit1
						{
						side = 1;
						vehicle = "TFV_FTL_Desert";
						rank = "CORPORAL";
						position[] = {3,0,0};
						};
						
						class Unit2
						{
						side = 1;
						vehicle = "TFV_Medic_Desert";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
						
						class Unit3
						{
						side = 1;
						vehicle = "TFV_MG1_Desert";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
						
						class Unit4
						{
						side = 1;
						vehicle = "TFV_MG2_Desert";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
						
						class Unit5
						{
						side = 1;
						vehicle = "TFV_Rifleman_Desert";
						rank = "PRIVATE";
						position[] = {12,0,0};
						};
					
						class Unit6
						{
						side = 1;
						vehicle = "TFV_AT_Desert";
						rank = "PRIVATE";
						position[] = {14,0,0};
						};
						
						class Unit7
						{
						side = 1;
						vehicle = "TFV_Grenadier_Desert";
						rank = "PRIVATE";
						position[] = {16,0,0};
						};				
						
					};
					
					class TFV_Desert_Recon
					{
						name = "Recon Team (Desert)";
						side = 1;
						rarityGroup = 0.3;
						faction = "TFV_Units";
						
						class Unit0
						{
						side = 1;
						vehicle = "TFV_Sniper_Desert";
						rank = "PRIVATE";
						position[] = {0,5,0};
						};
						
						class Unit1
						{
						side = 1;
						vehicle = "TFV_Spotter_Desert";
						rank = "CORPORAL";
						position[] = {3,0,0};
						};
					
					};
					
				};
			};
		};
	};
};