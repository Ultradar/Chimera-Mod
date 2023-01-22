class CfgPatches
{
	class pzpl_pronelauncher
	{
		name="PZPL - Prone Launcher";
		units[]={};
		weapons[]={};
		requiredVersion=1.8200001;
		requiredAddons[]=
		{
			"ace_common",
			"pzpl_main"
		};
		author="$STR_pzpl_common_ACETeam";
		authors[]=
		{
			"PiZZADOX"
		};
		url="$STR_pzpl_main_URL";
		version="0.1.3.3";
		versionStr="0.1.3.3";
		versionAr[]={0,1,3,3};
	};
};
class CfgMovesBasic
{
	class Default;
	class NoActions;
	class Actions
	{
		class CivilStandActions;
		class CivilProneActions: CivilStandActions
		{
			SecondaryWeapon="ACE_LauncherProne";
			weaponOn="ACE_LauncherProne";
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			SecondaryWeapon="ACE_LauncherProne";
			weaponOn="ACE_LauncherProne";
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			SecondaryWeapon="ACE_LauncherProne";
			weaponOn="ACE_LauncherProne";
			weaponOff="AmovPpneMstpSrasWrflDnon";
		};
		class LauncherKneelActions: NoActions
		{
			Lying="AmovPknlMstpSrasWlnrDnon";
			PlayerProne="AmovPknlMstpSrasWlnrDnon";
			Down="AmovPknlMstpSrasWlnrDnon";
		};
		class LauncherStandActions: LauncherKneelActions
		{
			Default="AmovPercMstpSrasWlnrDnon";
			PlayerStand="AmovPercMstpSrasWlnrDnon";
			Stand="AmovPercMstpSrasWlnrDnon";
			Up="AmovPknlMstpSrasWlnrDnon";
			Lying="AmovPercMstpSrasWlnrDnon";
			PlayerProne="AmovPercMstpSrasWlnrDnon";
			Down="AmovPercMstpSrasWlnrDnon";
		};
		class ACE_LauncherProneActions: LauncherKneelActions
		{
			StopRelaxed="ACE_LauncherProne";
			Default="ACE_LauncherProne";
			Up="ACE_LauncherProne";
			Crouch="ACE_LauncherProne";
			PlayerCrouch="ACE_LauncherProne";
			Down="ACE_LauncherProne";
			Stand="ACE_LauncherProne";
			PlayerStand="ACE_LauncherProne";
			TurnL="AmovPpneMrunSrasWlnr_turnL";
			TurnLRelaxed="AmovPpneMrunSrasWlnr_turnL";
			TurnR="AmovPpneMrunSrasWlnr_turnR";
			TurnRRelaxed="AmovPpneMrunSrasWlnr_turnR";
			Stop="ACE_LauncherProne";
			Civil="AmovPpneMstpSnonWnonDnon";
			CivilLying="AmovPpneMstpSnonWnonDnon";
			BinocOff="ACE_LauncherProne";
			Gear="AinvPpneMstpSnonWnonDnon";
			BinocOn="AwopPpneMstpSoptWbinDnon_Lnr";
			HandGunOn="AmovPpneMstpSrasWpstDnon";
			stance="ManStanceProne";
			ReloadRPG="LauncherProne_Reload_Start";
			weaponOn="ACE_LauncherProne";
			WeaponOff="AmovPpneMstpSrasWrflDnon";
			WalkB="AmovPpneMrunSrasWlnrDb";
			WalkRB="AmovPpneMrunSrasWlnrDbr";
			WalkLB="AmovPpneMrunSrasWlnrDbl";
			WalkR="AmovPpneMrunSrasWlnrDr";
			WalkL="AmovPpneMrunSrasWlnrDl";
			WalkRF="AmovPpneMrunSrasWlnrDfr";
			WalkLF="AmovPpneMrunSrasWlnrDfl";
			WalkF="AmovPpneMrunSrasWlnrDf";
			PlayerWalkB="AmovPpneMrunSrasWlnrDb";
			PlayerWalkRB="AmovPpneMrunSrasWlnrDbr";
			PlayerWalkLB="AmovPpneMrunSrasWlnrDbl";
			PlayerWalkR="AmovPpneMrunSrasWlnrDr";
			PlayerWalkL="AmovPpneMrunSrasWlnrDl";
			PlayerWalkRF="AmovPpneMrunSrasWlnrDfr";
			PlayerWalkLF="AmovPpneMrunSrasWlnrDfl";
			PlayerWalkF="AmovPpneMrunSrasWlnrDf";
			SlowF="AmovPpneMrunSrasWlnrDf";
			SlowLF="AmovPpneMrunSrasWlnrDfl";
			SlowRF="AmovPpneMrunSrasWlnrDfr";
			SlowL="AmovPpneMrunSrasWlnrDl";
			SlowR="AmovPpneMrunSrasWlnrDr";
			SlowLB="AmovPpneMrunSrasWlnrDbl";
			SlowRB="AmovPpneMrunSrasWlnrDbr";
			SlowB="AmovPpneMrunSrasWlnrDb";
			PlayerSlowF="AmovPpneMrunSrasWlnrDf";
			PlayerSlowLF="AmovPpneMrunSrasWlnrDfl";
			PlayerSlowRF="AmovPpneMrunSrasWlnrDfr";
			PlayerSlowL="AmovPpneMrunSrasWlnrDl";
			PlayerSlowR="AmovPpneMrunSrasWlnrDr";
			PlayerSlowLB="AmovPpneMrunSrasWlnrDbl";
			PlayerSlowRB="AmovPpneMrunSrasWlnrDbr";
			PlayerSlowB="AmovPpneMrunSrasWlnrDb";
			FastF="AmovPpneMrunSrasWlnrDf";
			FastLF="AmovPpneMrunSrasWlnrDfl";
			FastRF="AmovPpneMrunSrasWlnrDfr";
			FastL="AmovPpneMrunSrasWlnrDl";
			FastR="AmovPpneMrunSrasWlnrDr";
			FastLB="AmovPpneMrunSrasWlnrDbl";
			FastRB="AmovPpneMrunSrasWlnrDr";
			FastB="AmovPpneMrunSrasWlnrDb";
			TactB="AmovPpneMrunSrasWlnrDb";
			TactRB="AmovPpneMrunSrasWlnrDbr";
			TactLB="AmovPpneMrunSrasWlnrDbl";
			TactR="AmovPpneMrunSrasWlnrDr";
			TactL="AmovPpneMrunSrasWlnrDl";
			TactRF="AmovPpneMrunSrasWlnrDfr";
			TactLF="AmovPpneMrunSrasWlnrDfl";
			TactF="AmovPpneMrunSrasWlnrDf";
			PlayerTactB="AmovPpneMrunSrasWlnrDb";
			PlayerTactRB="AmovPpneMrunSrasWlnrDbr";
			PlayerTactLB="AmovPpneMrunSrasWlnrDbl";
			PlayerTactR="AmovPpneMrunSrasWlnrDr";
			PlayerTactL="AmovPpneMrunSrasWlnrDl";
			PlayerTactRF="AmovPpneMrunSrasWlnrDfr";
			PlayerTactLF="AmovPpneMrunSrasWlnrDfl";
			PlayerTactF="AmovPpneMrunSrasWlnrDf";
		};
		class BinocProneLnrActions: LauncherKneelActions
		{
			BinocOff="ACE_LauncherProne";
			SecondaryWeapon="ACE_LauncherProne";
			weaponOn="ACE_LauncherProne";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class Default;
	class TransAnimBase;
	class AmovPpneMstpSrasWlnrDnon;
	class States
	{
		class ACE_LauncherProne: AmovPpneMstpSrasWlnrDnon
		{
			variantsAI[]={};
			variantsPlayer[]={};
			duty=-1.2;
			showWeaponAim=0;
			disableWeapons=0;
			disableWeaponsLong=0;
			enableMissile=1;
			canPullTrigger=1;
			aimPrecision=0.30000001;
			speed="1e+010";
			actions="ACE_LauncherProneActions";
			file="\pz\pzpl\addons\pronelauncher\anim\ACE_Launcher_Lying.rtm";
			interpolateFrom[]=
			{
				"AmovPercMstpSrasWlnrDnon",
				0.02,
				"AmovPknlMstpSrasWlnrDnon",
				0.02,
				"AmovPpneMstpSrasWlnrDnon_turnL",
				0.02,
				"AmovPpneMstpSrasWlnrDnon_turnR",
				0.02,
				"AmovPpneMrunSrasWlnrDf",
				0.02,
				"AmovPpneMrunSrasWlnrDfl",
				0.02,
				"AmovPpneMrunSrasWlnrDl",
				0.02,
				"AmovPpneMrunSrasWlnrDbl",
				0.02,
				"AmovPpneMrunSrasWlnrDb",
				0.02,
				"AmovPpneMrunSrasWlnrDbr",
				0.02,
				"AmovPpneMrunSrasWlnrDr",
				0.02,
				"AmovPpneMrunSrasWlnrDfr",
				0.02
			};
			connectTo[]={};
			interpolateTo[]=
			{
				"AmovPpneMstpSrasWlnrDnon_turnL",
				0.02,
				"AmovPpneMstpSrasWlnrDnon_turnR",
				0.02,
				"AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon",
				0.02,
				"AmovPpneMrunSrasWlnrDf",
				0.02,
				"AmovPpneMrunSrasWlnrDfl",
				0.02,
				"AmovPpneMrunSrasWlnrDl",
				0.02,
				"AmovPpneMrunSrasWlnrDbl",
				0.02,
				"AmovPpneMrunSrasWlnrDb",
				0.02,
				"AmovPpneMrunSrasWlnrDbr",
				0.02,
				"AmovPpneMrunSrasWlnrDr",
				0.02,
				"AmovPpneMrunSrasWlnrDfr",
				0.02,
				"AmovPpneMstpSrasWlnrDnon",
				0.02,
				"Unconscious",
				0.02,
				"Campaign_Base",
				0.02
			};
		};
		class AmovPpneMstpSrasWlnrDnon_turnL: AmovPpneMstpSrasWlnrDnon
		{
			actions="ACE_LauncherProneActions";
			aimPrecision=5;
			connectTo[]+=
			{
				"AmovPpneMstpSrasWlnrDnon_turnL",
				0.02
			};
			interpolateTo[]+=
			{
				"AmovPpneMstpSrasWlnrDnon",
				0.02
			};
		};
		class AmovPpneMstpSrasWlnrDnon_turnR: AmovPpneMstpSrasWlnrDnon
		{
			actions="ACE_LauncherProneActions";
			aimPrecision=5;
			connectTo[]+=
			{
				"AmovPpneMstpSrasWlnrDnon_turnR",
				0.02
			};
			interpolateTo[]+=
			{
				"AmovPpneMstpSrasWlnrDnon",
				0.02
			};
		};
		class AmovPpneMrunSrasWlnrDf: AmovPpneMstpSrasWlnrDnon
		{
			speed=0.600541;
			duty=0.60000002;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableMissile=0;
			canPullTrigger=0;
			actions="ACE_LauncherProneActions";
			interpolateTo[]+=
			{
				"AmovPpneMrunSrasWlnrDfr",
				0.02
			};
		};
		class AmovPpneMrunSrasWlnrDfl: AmovPpneMrunSrasWlnrDf
		{
			speed=0.83333302;
			duty=0.60000002;
			actions="ACE_LauncherProneActions";
		};
		class AmovPpneMrunSrasWlnrDl: AmovPpneMrunSrasWlnrDf
		{
			speed=0.625;
			duty=0.60000002;
			actions="ACE_LauncherProneActions";
		};
		class AmovPpneMrunSrasWlnrDbl: AmovPpneMrunSrasWlnrDf
		{
			speed=0.70252401;
			duty=0.60000002;
			actions="ACE_LauncherProneActions";
		};
		class AmovPpneMrunSrasWlnrDb: AmovPpneMrunSrasWlnrDf
		{
			speed=0.70252401;
			duty=0.60000002;
			actions="ACE_LauncherProneActions";
		};
		class AmovPpneMrunSrasWlnrDbr: AmovPpneMrunSrasWlnrDf
		{
			speed=0.70252401;
			duty=0.60000002;
			actions="ACE_LauncherProneActions";
		};
		class AmovPpneMrunSrasWlnrDr: AmovPpneMrunSrasWlnrDf
		{
			speed=0.85934103;
			duty=0.60000002;
			actions="ACE_LauncherProneActions";
		};
		class AmovPpneMrunSrasWlnrDfr: AmovPpneMrunSrasWlnrDf
		{
			speed=0.9375;
			duty=0.60000002;
			actions="ACE_LauncherProneActions";
		};
		class ProneLauncher_To_ProneRifle: AmovPpneMrunSrasWlnrDl
		{
			speed=0.9375;
			duty=0.60000002;
			disableWeapons=1;
			actions="ACE_LauncherProneActions";
			interpolateFrom[]=
			{
				"ACE_LauncherProne",
				0.015
			};
			interpolateTo[]=
			{
				"ProneLauncher_To_ProneRifle_End",
				0.02
			};
		};
		class ProneLauncher_To_ProneRifle_End: AmovPpneMrunSrasWlnrDf
		{
			speed=0.9375;
			duty=0.60000002;
			disableWeapons=1;
			actions="ACE_LauncherProneActions";
			interpolateTo[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02,
				"amovppnemstpsnonwnondnon",
				0.02,
				"AmovPpneMstpSrasWpstDnon",
				0.02
			};
		};
		class ProneRifle_To_ProneLauncher: ProneLauncher_To_ProneRifle
		{
			speed=0.75999999;
			duty=0.60000002;
			interpolateFrom[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02
			};
			interpolateTo[]=
			{
				"AmovPpneMrunSrasWlnrDf",
				0.015,
				"AmovPpneMrunSrasWlnrDr",
				0.015,
				"AmovPpneMrunSrasWlnrDl",
				0.015,
				"ACE_LauncherProne",
				0.015
			};
		};
		class PronePistol_To_ProneLauncher: ProneLauncher_To_ProneRifle
		{
			speed=0.75999999;
			duty=0.60000002;
			interpolateFrom[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.015
			};
			interpolateTo[]=
			{
				"AmovPpneMrunSrasWlnrDf",
				0.015,
				"AmovPpneMrunSrasWlnrDr",
				0.015,
				"AmovPpneMrunSrasWlnrDl",
				0.015,
				"ACE_LauncherProne",
				0.015
			};
		};
		class ProneCivil_To_ProneLauncher: ProneLauncher_To_ProneRifle
		{
			speed=0.75999999;
			duty=0.60000002;
			interpolateFrom[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.015
			};
			interpolateTo[]=
			{
				"AmovPpneMrunSrasWlnrDf",
				0.015,
				"AmovPpneMrunSrasWlnrDr",
				0.015,
				"AmovPpneMrunSrasWlnrDl",
				0.015,
				"ACE_LauncherProne",
				0.015
			};
		};
		class AmovPercMstpSrasWlnrDnon_AmovPpneMstpSrasWlnrDnon: TransAnimBase
		{
			mask="weaponSwitching";
		};
		class AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon: TransAnimBase
		{
			blockMobileSwitching=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableMissile=0;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]+=
			{
				"AmovPknlMstpSrasWlnrDnon",
				0.02,
				"AmovPercMstpSrasWlnrDnon",
				0.02
			};
		};
		class LauncherProne_Reload_Start: AmovPpneMrunSrasWlnrDl
		{
			actions="ACE_LauncherProneActions";
			speed=0.73750001;
			duty=0.60000002;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableMissile=0;
			canPullTrigger=0;
			interpolateFrom[]=
			{
				"ACE_LauncherProne",
				0.02
			};
			interpolateTo[]=
			{
				"LauncherProne_Reload_Mid",
				0.0049999999
			};
		};
		class LauncherProne_Reload_Mid: AmovPpneMrunSrasWlnrDr
		{
			actions="ACE_LauncherProneActions";
			speed=0.73750001;
			duty=0.60000002;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableMissile=0;
			canPullTrigger=0;
			interpolateTo[]=
			{
				"LauncherProne_Reload_End",
				0.0049999999
			};
		};
		class LauncherProne_Reload_End: AmovPpneMrunSrasWlnrDf
		{
			actions="ACE_LauncherProneActions";
			speed=0.73750001;
			duty=0.60000002;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableMissile=0;
			canPullTrigger=0;
			interpolateTo[]=
			{
				"ACE_LauncherProne",
				0.02
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class pzpl_pronelauncher
	{
		init="call compile preProcessFileLineNumbers '\pz\pzpl\addons\pronelauncher\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class pzpl_pronelauncher
	{
		init="call compile preProcessFileLineNumbers '\pz\pzpl\addons\pronelauncher\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class pzpl_pronelauncher
	{
		init="call compile preProcessFileLineNumbers '\pz\pzpl\addons\pronelauncher\XEH_postInit.sqf'";
	};
};
