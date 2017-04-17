class TacBF
{
	class Supply
	{
	// Generates cargo IDs (More effecient broadcasting for these items + their ammo)
	staticWeapons[] = {"rhs_Igla_AA_pod_msv", "RHS_Stinger_AA_pod_D", "rhs_Kornet_9M133_2_msv", "RDS_M2StaticMG_MiniTripod_FIA", "RDS_M2StaticMG_FIA", "RDS_KORD_high_CSAT", "RDS_KORD_CSAT", "RDS_DSHKM_CSAT", "RDS_DSHkM_Mini_TriPod_CSAT", "RDS_M252_FIA", "RDS_2b14_82mm_CSAT", "RDS_TOW_TriPod_FIA", "RDS_Metis_CSAT", "rhs_SPG9M_MSV", "RDS_D30_CSAT", "RDS_ZU23_CSAT", "RDS_M119_FIA"};
	
		class CargoCollections
		{
			// West Statics
			class statics_westLight {
				transportClear = 1;
				cargo[] = {
					{"RDS_M2StaticMG_MiniTripod_FIA", 2, 4},
					{"RDS_M2StaticMG_FIA", 2, 4},
					{"TB_Box_West_Mines_F", 2, 0},
					{"ICE_emptySandbagsTimberStack", 10,0}
				};
			};
			class statics_west {
				transportClear = 1;
				cargo[] = {
					{"RDS_M2StaticMG_MiniTripod_FIA", 3, 6},
					{"RDS_M2StaticMG_FIA", 3, 6},
					{"RDS_TOW_TriPod_FIA", 1, 2},
					{"TB_Box_West_Mines_F", 4, 0},
					{"ICE_emptySandbagsCrate_supply", 3,0}
				};
			};
			class statics_westHeavy {
				transportClear = 1;
				cargo[] = {
					{"RDS_M2StaticMG_MiniTripod_FIA", 4, 8},
					{"RDS_M2StaticMG_FIA", 4, 8},
					{"RDS_TOW_TriPod_FIA", 4, 8},
					{"RDS_M252_FIA", 1, 4},
					{"TB_Box_West_Mines_F", 6, 0},
					{"ICE_emptySandbagsCrate_supply", 6,0},
					{"RHS_Stinger_AA_pod_D", 2, 2}
				};
			};
			
			// East Statics
			class statics_eastLight {
				transportClear = 1;
				cargo[] = {
					{"RDS_KORD_CSAT", 2, 4},
					{"RDS_KORD_high_CSAT", 2, 4},
					{"TB_Box_East_Mines_F", 2, 0},
					{"ICE_emptySandbagsTimberStack", 10,0}
				};
			};
			class statics_east {
				transportClear = 1;
				cargo[] = {
					{"RDS_KORD_CSAT", 3, 6},
					{"RDS_KORD_high_CSAT", 3, 6},
					{"RDS_Metis_CSAT", 1, 2},
					{"TB_Box_East_Mines_F", 4, 0},
					{"ICE_emptySandbagsCrate_supply", 3,0}
				};
			};
			class statics_eastHeavy {
				transportClear = 1;
				cargo[] = {
					{"RDS_KORD_CSAT", 4, 8},
					{"RDS_KORD_high_CSAT", 4, 8},
					{"rhs_Kornet_9M133_2_msv", 4, 8},
					{"RDS_2b14_82mm_CSAT", 2, 4},
					{"TB_Box_East_Mines_F", 6, 0},
					{"ICE_emptySandbagsCrate_supply", 6,0},
					{"rhs_SPG9M_MSV", 4, 4},
					{"rhs_Igla_AA_pod_msv", 2, 2}
				};
			};
			
			// RES Statics
			class statics_resLight {
				transportClear = 1;
				cargo[] = {
					{"RDS_DSHkM_Mini_TriPod_CSAT", 2, 4},
					{"RDS_DSHKM_CSAT", 2, 4},
					{"TB_Box_East_Mines_F", 2, 0},
					{"ICE_emptySandbagsTimberStack", 10,0}
				};
			};
			class statics_res {
				transportClear = 1;
				cargo[] = {
					{"RDS_DSHkM_Mini_TriPod_CSAT", 3, 6},
					{"RDS_DSHKM_CSAT", 3, 6},
					{"rhs_SPG9M_MSV", 1, 2},
					{"TB_Box_East_Mines_F", 4, 0},
					{"ICE_emptySandbagsCrate_supply", 3,0}
				};
			};
			class statics_resHeavy {
				transportClear = 1;
				cargo[] = {
					{"RDS_DSHkM_Mini_TriPod_CSAT", 4, 8},
					{"RDS_DSHKM_CSAT", 4, 8},
					{"rhs_SPG9M_MSV", 2, 4},
					{"RDS_2b14_82mm_CSAT", 1, 3},
					{"TB_Box_East_Mines_F", 6, 0},
					{"ICE_emptySandbagsCrate_supply", 6,0}
				};
			};
			
			//FO Statics
			class rds_westFO {
				transportClear = 1;
				cargo[] = {
					{"RDS_M2StaticMG_FIA", 2, 4},
					{"RDS_M2StaticMG_MiniTripod_FIA", 2, 4},
					{"RDS_TOW_TriPod_FIA", 1, 0},
					{"TB_Box_West_Mines_F", 1, 0},
					{"ICE_emptySandbagsCrate_supply", 2,0}
				};
			};
			class rds_eastFO {
				transportClear = 1;
				cargo[] = {
					{"RDS_KORD_high_CSAT", 2, 4},
					{"RDS_KORD_CSAT", 2, 4},
					{"RDS_Metis_CSAT", 1, 0},
					{"TB_Box_East_Mines_F", 1, 0},
					{"ICE_emptySandbagsCrate_supply", 2,0}
				};
			};
		};

		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG 
			{
				crateCollection = "rds_westFO";
				crateMass = 1750; 
			};
			class ICE_ForwardOutpost_container_EastMG 
			{
				crateCollection = "rds_eastFO";
				crateMass = 1750; 
			};
		};
	};
};