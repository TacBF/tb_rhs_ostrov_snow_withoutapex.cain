// USA - Marines (MARPAT-WD)
// Author: Cole

class TB_BLUBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_BLUBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag", 20},
			{"rhsusf_20Rnd_762x51_m118_special_Mag", 5},
			{"rhsusf_100Rnd_762x51", 5},
			{"rhs_200rnd_556x45_M_SAW", 5},
			{"rhsusf_5Rnd_300winmag_xm2010", 10},
			{"SmokeShell", 10},
			{"rhs_mag_m67", 10},
			{"rhs_mag_M441_HE", 10},
			{"CUP_SMAW_HEAA_M", 2},
			{"CUP_M136_M", 2},
			{"LaserBatteries", 2},
			{"20Rnd_556x45_UW_mag", 20},
			{"rhs_mag_an_m14_th3", 6},
			{"rhs_mag_m7a3_cs", 7}
		};
	transportWeapons[] = {{"rhs_weap_rsp30_green", 10}, {"rhs_weap_M136",2}, {"rhs_weap_m16a4_carryhandle",2}, {"rhs_weap_m72a7", 2}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_West_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_West_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mine_M19_mag", 3},			
			{"APERSMine_Range_Mag", 6},			
			{"APERSTripMine_Wire_Mag", 2},
			{"ClaymoreDirectionalMine_Remote_Mag", 2},
			{"SLAMDirectionalMine_Wire_Mag", 4},
			{"APERSBoundingMine_Range_Mag", 4}
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"rhsusf_assault_eagleaiii_coy", 2}};
		transportItems[] = {{"MineDetector", 2}, {"ToolKit", 1}};
	};
};