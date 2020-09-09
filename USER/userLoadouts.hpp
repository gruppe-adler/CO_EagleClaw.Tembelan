/*
*   Hier können eigene factions für grad-loadout eingetragen werden.
*   Anleitung im Wiki.
*/


class co_fallenEagle {

    class Type {
        //Rifleman
        class Soldier_F {
			primaryWeapon = "arifle_TRG21_F";
			primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
			primaryWeaponMuzzle = "muzzle_snds_M";
			primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
			primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
			handgunWeapon = "hgun_Pistol_heavy_01_green_F";
			handgunWeaponMuzzle = "hlc_muzzle_Evo40";
			handgunWeaponPointer = "hlc_acc_DBALPL";
			handgunWeaponOptics = "optic_MRD_black";
			uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
			addItemsToUniform[] = {LIST_4("ACE_packingBandage"),LIST_4("ACE_elasticBandage"),LIST_4("ACE_quikclot"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red"),LIST_3("11Rnd_45ACP_Mag")};
			vest = "LOP_V_CarrierLite_OLV";
			addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade")};
			backpack = "B_AssaultPack_blk";
			addItemsToBackpack[] = {LIST_4("ACE_tourniquet"),LIST_4("ACE_splint"),LIST_2("ACE_morphine"),LIST_2("ACE_epinephrine")};
			headgear = "rhsusf_opscore_fg_pelt_cam";
			goggles = "rhs_googles_clear";
			map = "ItemMap";
			gps = "ItemGPS";
			radio = "TFAR_anprc152";
			compass = "ItemCompass";
			watch = "ItemWatch";
			nvgoggles = "NVGoggles_OPFOR";
		};

        //Asst. Autorifleman
        class soldier_AAR_F: Soldier_F {
			primaryWeapon = "arifle_TRG21_F";
			primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
			primaryWeaponMuzzle = "muzzle_snds_M";
			primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
			primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
			handgunWeapon = "hgun_Pistol_heavy_01_green_F";
			handgunWeaponMuzzle = "hlc_muzzle_Evo40";
			handgunWeaponPointer = "hlc_acc_DBALPL";
			handgunWeaponOptics = "optic_MRD_black";
			uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
			addItemsToUniform[] = {LIST_4("ACE_packingBandage"),LIST_4("ACE_elasticBandage"),LIST_4("ACE_quikclot"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red"),LIST_3("11Rnd_45ACP_Mag")};
			vest = "LOP_V_CarrierLite_OLV";
			addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade")};
			backpack = "B_AssaultPack_blk";
			addItemsToBackpack[] = {LIST_4("ACE_tourniquet"),LIST_4("ACE_splint"),LIST_2("ACE_morphine"),LIST_2("ACE_epinephrine")};
			headgear = "rhsusf_opscore_fg_pelt_cam";
			goggles = "rhs_googles_clear";
			map = "ItemMap";
			gps = "ItemGPS";
			radio = "TFAR_anprc152";
			compass = "ItemCompass";
			watch = "ItemWatch";
			nvgoggles = "NVGoggles_OPFOR";
        };

        //Asst. Gunner (MMG) / Ammo Bearer
        class soldier_A_F: Soldier_F {
            primaryWeapon = "arifle_TRG21_F";
            primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
            primaryWeaponMuzzle = "muzzle_snds_M";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk_light";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMuzzle = "hlc_muzzle_Evo40";
            handgunWeaponPointer = "hlc_acc_DBALPL";
            handgunWeaponOptics = "optic_MRD_black";
            uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
            addItemsToUniform[] = {LIST_3("11Rnd_45ACP_Mag"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red")};
            vest = "LOP_V_CarrierLite_OLV";
            addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade")};
            backpack = "B_Carryall_oli";
            addItemsToBackpack[] = {};
            headgear = "rhsusf_opscore_fg_pelt_cam";
            goggles = "rhs_googles_yellow";
            map = "ItemMap";
            gps = "ItemGPS";
            radio = "TFAR_anprc152";
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "NVGoggles_OPFOR";
            };

        //Asst. Gunner (HMG/GMG)
        class support_AMG_F: Soldier_F {
            backpack = "RHS_M2_MiniTripod_Bag";
        };

        //Asst. Missile Specialist (AA)
        class soldier_AAA_F: Soldier_F {
            backpack = "SMM_Carryall_BW_FT";
            addItemsToBackpack[] = {
                LIST_2("rhs_fim92_mag")
            };
        };

        //Asst. Missile Specialist (AT)
        class soldier_AAT_F: Soldier_F {
            primaryWeapon = "arifle_TRG21_F";
            primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
            primaryWeaponMuzzle = "muzzle_snds_M";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk_light";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMuzzle = "hlc_muzzle_Evo40";
            handgunWeaponPointer = "hlc_acc_DBALPL";
            handgunWeaponOptics = "optic_MRD_black";
            uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
            addItemsToUniform[] = {LIST_3("11Rnd_45ACP_Mag"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red")};
            vest = "LOP_V_CarrierLite_OLV";
            addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade")};
            backpack = "B_Carryall_oli";
            addItemsToBackpack[] = {};
            headgear = "rhsusf_opscore_fg_pelt_cam";
            goggles = "rhs_googles_yellow";
            map = "ItemMap";
            gps = "ItemGPS";
            radio = "TFAR_anprc152";
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "NVGoggles_OPFOR";
        };

        //Autorifleman
        class soldier_AR_F: Soldier_F {
			primaryWeapon = "arifle_TRG21_F";
			primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
			primaryWeaponMuzzle = "muzzle_snds_M";
			primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
			primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
			handgunWeapon = "hgun_Pistol_heavy_01_green_F";
			handgunWeaponMuzzle = "hlc_muzzle_Evo40";
			handgunWeaponPointer = "hlc_acc_DBALPL";
			handgunWeaponOptics = "optic_MRD_black";
			uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
			addItemsToUniform[] = {LIST_4("ACE_packingBandage"),LIST_4("ACE_elasticBandage"),LIST_4("ACE_quikclot"),LIST_3("11Rnd_45ACP_Mag"),LIST_2("rhs_mag_100Rnd_556x45_M855A1_cmag_mixed")};
			vest = "LOP_V_CarrierLite_OLV";
			addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade"),LIST_2("rhs_mag_100Rnd_556x45_M855A1_cmag_mixed")};
			backpack = "B_AssaultPack_blk";
			addItemsToBackpack[] = {LIST_4("ACE_tourniquet"),LIST_4("ACE_splint"),LIST_2("ACE_morphine"),LIST_2("ACE_epinephrine"),"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed"};
			headgear = "rhsusf_opscore_fg_pelt_cam";
			goggles = "rhs_googles_clear";
			map = "ItemMap";
			gps = "ItemGPS";
			radio = "TFAR_anprc152";
			compass = "ItemCompass";
			watch = "ItemWatch";
			nvgoggles = "NVGoggles_OPFOR";
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
            primaryWeapon = "arifle_TRG21_F";
            primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
            primaryWeaponMuzzle = "muzzle_snds_M";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMuzzle = "hlc_muzzle_Evo40";
            handgunWeaponPointer = "hlc_acc_DBALPL";
            handgunWeaponOptics = "optic_MRD_black";
            uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
            addItemsToUniform[] = {LIST_8("ACE_packingBandage"),LIST_20("ACE_elasticBandage"),LIST_20("ACE_quikclot"),LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red"),LIST_2("11Rnd_45ACP_Mag")};
            vest = "LOP_V_CarrierLite_OLV";
            addItemsToVest[] = {LIST_12("ACE_packingBandage"),LIST_2("SmokeShell"),LIST_2("HandGrenade")};
            backpack = "B_AssaultPack_blk";
            addItemsToBackpack[] = {LIST_6("ACE_tourniquet"),LIST_12("ACE_splint"),LIST_15("ACE_epinephrine"),LIST_15("ACE_morphine"),LIST_10("ACE_bloodIV_500"),LIST_10("ACE_salineIV_500")};
            headgear = "rhsusf_opscore_fg_pelt_cam";
            goggles = "rhs_googles_clear";
            map = "ItemMap";
            gps = "ItemGPS";
            radio = "TFAR_anprc152";
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "NVGoggles_OPFOR";
        };

        //Explosive Specialist
        class soldier_exp_F: Soldier_F {
            backpack = "SMM_Kitbag_BW_FT";
            addItemsToBackpack[] = {
                "ACE_Clacker",
                "ACE_M26_Clacker",
                "SatchelCharge_Remote_Mag",
                LIST_5("DemoCharge_Remote_Mag")
            };
        };

        //Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon = "rhs_weap_hk416d10_m320";
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
                LIST_6("1Rnd_HE_Grenade_shell"),
                LIST_2("1Rnd_SmokeRed_Grenade_shell")
            };
        };

        //Heavy Gunner (MMG)
        class HeavyGunner_F: Soldier_F {
            primaryWeapon = "LMG_Zafir_F";
            primaryWeaponMagazine= "150Rnd_762x54_Box_Tracer";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
            primaryWeaponMuzzle = "";
            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMuzzle = "hlc_muzzle_Evo40";
            handgunWeaponPointer = "hlc_acc_DBALPL";
            handgunWeaponOptics = "optic_MRD_black";
            uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
            addItemsToUniform[] = {LIST_3("11Rnd_45ACP_Mag")};
            vest = "LOP_V_CarrierLite_OLV";
            addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade"),"150Rnd_762x54_Box"};
            backpack = "B_Carryall_oli";
            addItemsToBackpack[] = {LIST_3("150Rnd_762x54_Box"),LIST_3("150Rnd_762x54_Box_Tracer")};
            headgear = "rhsusf_opscore_fg_pelt_cam";
            goggles = "rhs_googles_yellow";
            map = "ItemMap";
            gps = "ItemGPS";
            radio = "TFAR_anprc152";
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "NVGoggles_OPFOR";
            };

        //Gunner (HMG/GMG)
        class support_MG_F: Soldier_F {
            backpack = "RHS_M2_Gun_Bag";
        };

        //Marksman
        class soldier_M_F: Soldier_F {
            primaryWeapon = "rhs_weap_hk416d145";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_Mk262_Stanag";
            primaryWeaponOptics ="optic_DMS";
            primaryWeaponUnderbarrel ="bipod_01_F_blk";
            binoculars = "ACE_VectorDay";
            addItemsToVest[] = {
                LIST_2("SmokeShell"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_8("rhs_mag_30Rnd_556x45_Mk262_Stanag"),
                LIST_4("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red")
            };
        };

        //Missile Specialist (AA)
        class soldier_AA_F: Soldier_F {
            secondaryWeapon = "rhs_weap_fim92";
            secondaryWeaponMagazine = "rhs_fim92_mag";
            backpack = "SMM_Carryall_BW_FT";
            addItemsToBackpack[] = {
                "rhs_fim92_mag"
            };
        };

        //Missile Specialist (AT)
        class soldier_AT_F: Soldier_F {
            primaryWeapon = "arifle_TRG21_F";
            primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
            primaryWeaponMuzzle = "muzzle_snds_M";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk_light";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            secondaryWeapon = "rhs_weap_fgm148";
            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMuzzle = "hlc_muzzle_Evo40";
            handgunWeaponPointer = "hlc_acc_DBALPL";
            handgunWeaponOptics = "optic_MRD_black";
            uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
            addItemsToUniform[] = {"FirstAidKit",LIST_3("11Rnd_45ACP_Mag"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red")};
            vest = "LOP_V_CarrierLite_OLV";
            addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade")};
            backpack = "B_Carryall_oli";
            addItemsToBackpack[] = {"rhs_fgm148_magazine_AT"};
            headgear = "rhsusf_opscore_fg_pelt_cam";
            goggles = "rhs_googles_yellow";
            map = "ItemMap";
            gps = "ItemGPS";
            radio = "TFAR_anprc152";
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "NVGoggles_OPFOR";
            };

        //Repair Specialist
        class soldier_repair_F: Soldier_F {
            backpack = "SMM_Kitbag_BW_FT";
            addItemsToBackpack[] = {
                "ToolKit",
                "ACE_wirecutter"
            };
        };

        //Rifleman (AT)
        class soldier_LAT_F: Soldier_F {
            primaryWeapon = "arifle_TRG21_F";
            primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
            primaryWeaponMuzzle = "muzzle_snds_M";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            secondaryWeapon = "rhs_weap_m72a7";
            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMuzzle = "hlc_muzzle_Evo40";
            handgunWeaponPointer = "hlc_acc_DBALPL";
            handgunWeaponOptics = "optic_MRD_black";
            uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
            addItemsToUniform[] = {LIST_4("ACE_packingBandage"),LIST_4("ACE_elasticBandage"),LIST_4("ACE_quikclot"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red"),LIST_3("11Rnd_45ACP_Mag")};
            vest = "LOP_V_CarrierLite_OLV";
            addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade")};
            backpack = "B_AssaultPack_blk";
            addItemsToBackpack[] = {LIST_4("ACE_tourniquet"),LIST_4("ACE_splint"),LIST_2("ACE_morphine"),LIST_2("ACE_epinephrine"),"ACE_EntrenchingTool"};
            headgear = "rhsusf_opscore_fg_pelt_cam";
            goggles = "rhs_googles_clear";
            map = "ItemMap";
            gps = "ItemGPS";
            radio = "TFAR_anprc152";
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "NVGoggles_OPFOR";
        };

        //Squad Leader
        class Soldier_SL_F: Soldier_F {
            primaryWeapon = "arifle_TRG21_F";
            primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
            primaryWeaponMuzzle = "muzzle_snds_M";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMuzzle = "hlc_muzzle_Evo40";
            handgunWeaponPointer = "hlc_acc_DBALPL";
            handgunWeaponOptics = "optic_MRD_black";
            uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
            addItemsToUniform[] = {LIST_4("ACE_packingBandage"),LIST_4("ACE_elasticBandage"),LIST_4("ACE_quikclot"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red"),LIST_3("11Rnd_45ACP_Mag")};
            vest = "LOP_V_CarrierLite_OLV";
            addItemsToVest[] = {LIST_2("SmokeShell"),LIST_2("HandGrenade")};
            backpack = "B_AssaultPack_blk";
            addItemsToBackpack[] = {LIST_4("ACE_tourniquet"),LIST_4("ACE_splint"),LIST_2("ACE_morphine"),LIST_2("ACE_epinephrine"),"ACE_EntrenchingTool"};
            headgear = "rhsusf_opscore_fg_pelt_cam";
            goggles = "rhs_googles_clear";
            binoculars = "Laserdesignator_03";
            map = "ItemMap";
            gps = "ItemGPS";
            radio = "TFAR_anprc152";
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "NVGoggles_OPFOR";
        };

        //Team Leader
        class Soldier_TL_F: Soldier_F {
			primaryWeapon = "arifle_TRG21_F";
			primaryWeaponMagazine= "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red";
			primaryWeaponMuzzle = "muzzle_snds_M";
			primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
			primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
			handgunWeapon = "hgun_Pistol_heavy_01_green_F";
			handgunWeaponMuzzle = "hlc_muzzle_Evo40";
			handgunWeaponPointer = "hlc_acc_DBALPL";
			handgunWeaponOptics = "optic_MRD_black";
			uniform = "LOP_U_IRA_Fatigue_GRK_OLV";
			addItemsToUniform[] = {LIST_4("ACE_packingBandage"),LIST_4("ACE_elasticBandage"),LIST_4("ACE_quikclot"),LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red"),LIST_3("11Rnd_45ACP_Mag"),"ACE_EntrenchingTool"};
			vest = "LOP_V_CarrierLite_OLV";
			addItemsToVest[] = {LIST_4("SmokeShell"),LIST_4("HandGrenade")};
			backpack = "B_AssaultPack_blk";
			addItemsToBackpack[] = {LIST_4("ACE_tourniquet"),LIST_4("ACE_splint"),LIST_2("ACE_morphine"),LIST_2("ACE_epinephrine")};
			headgear = "rhsusf_opscore_fg_pelt_cam";
			goggles = "rhs_googles_clear";
			map = "ItemMap";
			gps = "ItemGPS";
			radio = "TFAR_anprc152";
			compass = "ItemCompass";
			watch = "ItemWatch";
			nvgoggles = "NVGoggles_OPFOR";
        };
    };
};
