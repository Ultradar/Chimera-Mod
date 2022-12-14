class CfgPatches
{
	class AUR_AdvancedUrbanRappelling
	{
		author="duda123";
		name="Advanced Urban Rappelling";
		url="https://github.com/sethduda/AdvancedUrbanRappelling";
		units[]=
		{
			"AUR_AdvancedUrbanRappelling",
			"AUR_RopeSmallWeight"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Modules_F"
		};
		weapons[]=
		{
			"AUR_Rappel_Gear",
			"AUR_Rappel_Rope_10",
			"AUR_Rappel_Rope_20",
			"AUR_Rappel_Rope_30",
			"AUR_Rappel_Rope_50",
			"AUR_Rappel_Rope_70"
		};
	};
};
class CfgNetworkMessages
{
	class AdvancedUrbanRappellingRemoteExecClient
	{
		module="AdvancedUrbanRappelling";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"OBJECT",
			"BOOL"
		};
	};
	class AdvancedUrbanRappellingRemoteExecServer
	{
		module="AdvancedUrbanRappelling";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"BOOL"
		};
	};
};
class CfgFunctions
{
	class SA
	{
		class AdvancedUrbanRappelling
		{
			file="\AUR_AdvancedUrbanRappelling\functions";
			class advancedUrbanRappellingInit
			{
				postInit=1;
			};
		};
	};
};
class CfgSounds
{
	class AUR_Rappel_Loop
	{
		name="AUR_Rappel_Loop";
		sound[]=
		{
			"\AUR_AdvancedUrbanRappelling\sounds\AUR_Rappel_Loop.ogg",
			1.7782794,
			1
		};
		titles[]=
		{
			0,
			""
		};
	};
	class AUR_Rappel_Start
	{
		name="AUR_Rappel_Start";
		sound[]=
		{
			"\AUR_AdvancedUrbanRappelling\sounds\AUR_Rappel_Start.ogg",
			3.1622777,
			1
		};
		titles[]=
		{
			0,
			""
		};
	};
	class AUR_Rappel_End
	{
		name="AUR_Rappel_End";
		sound[]=
		{
			"\AUR_AdvancedUrbanRappelling\sounds\AUR_Rappel_End.ogg",
			3.1622777,
			1
		};
		titles[]=
		{
			0,
			""
		};
	};
};
class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class AUR_Rappel_Gear: CBA_MiscItem
	{
		scope=2;
		displayName="$STR_AUR_RAPPELING_GEAR";
		descriptionShort="$STR_AUR_RAPPELING_GEAR_DESCR";
		author="vurtual";
		model="A3\Weapons_F\Items\ToolKit";
		picture="\AUR_AdvancedUrbanRappelling\ui\m_harness_ca";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=8;
		};
	};
	class AUR_Rappel_Rope_10: CBA_MiscItem
	{
		scope=2;
		displayName="$STR_AUR_RAPPELING_ROPE_10";
		descriptionShort="$STR_AUR_RAPPELING_ROPE_DESCR_10";
		author="vurtual";
		model="\A3\Structures_F_Heli\Items\Tools\Rope_01_F.p3d";
		picture="\AUR_AdvancedUrbanRappelling\ui\m_rope_ca";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=5;
		};
	};
	class AUR_Rappel_Rope_20: AUR_Rappel_Rope_10
	{
		scope=2;
		displayName="$STR_AUR_RAPPELING_ROPE_20";
		descriptionShort="$STR_AUR_RAPPELING_ROPE_DESCR_20";
		author="Nico";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	class AUR_Rappel_Rope_30: AUR_Rappel_Rope_20
	{
		scope=2;
		displayName="$STR_AUR_RAPPELING_ROPE_30";
		descriptionShort="$STR_AUR_RAPPELING_ROPE_DESCR_30";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=15;
		};
	};
	class AUR_Rappel_Rope_50: AUR_Rappel_Rope_20
	{
		scope=2;
		displayName="$STR_AUR_RAPPELING_ROPE_50";
		descriptionShort="$STR_AUR_RAPPELING_ROPE_DESCR_50";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=25;
		};
	};
	class AUR_Rappel_Rope_70: AUR_Rappel_Rope_20
	{
		scope=2;
		displayName="$STR_AUR_RAPPELING_ROPE_70";
		descriptionShort="$STR_AUR_RAPPELING_ROPE_DESCR_70";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=35;
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class AUR_AdvancedUrbanRappelling
	{
		init="call compile preprocessFileLineNumbers '\AUR_AdvancedUrbanRappelling\scripts\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class AUR_AdvancedUrbanRappelling
	{
		init="call compile preprocessFileLineNumbers '\AUR_AdvancedUrbanRappelling\scripts\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Land_Camping_Light_F;
	class AUR_RopeSmallWeight: Land_Camping_Light_F
	{
		scope=2;
		displayname="Rope weight";
		model="\AUR_AdvancedUrbanRappelling\AUR_weightSmall";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AUR_01="AUR_01_Idle";
		AUR_01_Jump1="";
		AUR_01_Jump2="";
		AUR_01_Jump3="";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			AUR_01_Jump1[]=
			{
				"AUR_01_Jump1",
				"Gesture"
			};
			AUR_01_Jump2[]=
			{
				"AUR_01_Jump2",
				"Gesture"
			};
			AUR_01_Jump3[]=
			{
				"AUR_01_Jump3",
				"Gesture"
			};
		};
		class RifleStandActions;
		class AUR_BaseActions: RifleStandActions
		{
			AdjustF="";
			AdjustB="";
			AdjustL="";
			AdjustR="";
			AdjustLF="";
			AdjustLB="";
			AdjustRB="";
			AdjustRF="";
			agonyStart="";
			agonyStop="";
			medicStop="";
			medicStart="";
			medicStartUp="";
			medicStartRightSide="";
			GestureAgonyCargo="";
			grabCarry="";
			grabCarried="";
			grabDrag="";
			grabDragged="";
			carriedStill="";
			released="";
			releasedBad="";
			Stop="";
			StopRelaxed="";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			ReloadMagazine="";
			ReloadMGun="";
			ReloadRPG="ReloadRPG";
			ReloadMortar="";
			WalkF="";
			WalkLF="";
			WalkRF="";
			WalkL="";
			WalkR="";
			WalkLB="";
			WalkRB="";
			WalkB="";
			PlayerWalkF="";
			PlayerWalkLF="";
			PlayerWalkRF="";
			PlayerWalkL="";
			PlayerWalkR="";
			PlayerWalkLB="";
			PlayerWalkRB="";
			PlayerWalkB="";
			SlowF="";
			SlowLF="";
			SlowRF="";
			SlowL="";
			SlowR="";
			SlowLB="";
			SlowRB="";
			SlowB="";
			PlayerSlowF="";
			PlayerSlowLF="";
			PlayerSlowRF="";
			PlayerSlowL="";
			PlayerSlowR="";
			PlayerSlowLB="";
			PlayerSlowRB="";
			PlayerSlowB="";
			FastF="";
			FastLF="";
			FastRF="";
			FastL="";
			FastR="";
			FastLB="";
			FastRB="";
			FastB="";
			TactF="";
			TactLF="";
			TactRF="";
			TactL="";
			TactR="";
			TactLB="";
			TactRB="";
			TactB="";
			PlayerTactF="";
			PlayerTactLF="";
			PlayerTactRF="";
			PlayerTactL="";
			PlayerTactR="";
			PlayerTactLB="";
			PlayerTactRB="";
			PlayerTactB="";
			EvasiveLeft="";
			EvasiveRight="";
			startSwim="";
			surfaceSwim="";
			bottomSwim="";
			StopSwim="";
			startDive="";
			SurfaceDive="";
			BottomDive="";
			StopDive="";
			Down="";
			Up="";
			PlayerStand="";
			PlayerCrouch="";
			PlayerProne="";
			Lying="";
			Stand="";
			Combat="";
			Crouch="";
			CanNotMove="";
			Civil="";
			CivilLying="";
			FireNotPossible="";
			WeaponOn="";
			WeaponOff="";
			Default="";
			JumpOff="";
			StrokeFist="";
			StrokeGun="";
			SitDown="";
			Salute="";
			saluteOff="";
			GetOver="";
			Diary="";
			Surrender="";
			Gear="";
			BinocOn="";
			BinocOff="";
			PutDown="";
			PutDownEnd="";
			Medic="";
			MedicOther="";
			Treated="";
			LadderOnDown="";
			LadderOnUp="";
			LadderOff="";
			LadderOffTop="";
			LadderOffBottom="";
			PrimaryWeapon="";
			SecondaryWeapon="";
			Binoculars="";
			StartFreefall="";
			FDStart="";
			useFastMove=0;
			stance="ManStanceUndefined";
		};
		class AUR_01_Actions: AUR_BaseActions
		{
			upDegree="ManPosCombat";
			stop="AUR_01_Aim";
			stopRelaxed="AUR_01_Aim";
			default="AUR_01_Aim";
			Stand="AUR_01_Idle";
			HandGunOn="AUR_01_Aim_Pistol";
			PrimaryWeapon="AUR_01_Aim";
			SecondaryWeapon="";
			Binoculars="";
			die="AUR_01_Die";
			Unconscious="AUR_01_Die";
			civil="";
		};
		class AUR_01_DeadActions: AUR_BaseActions
		{
			stop="AUR_01_Die";
			default="AUR_01_Die";
			die="AUR_01_Die";
			Unconscious="AUR_01_Die";
		};
		class AUR_01_IdleActions: AUR_01_Actions
		{
			upDegree="ManPosStand";
			stop="AUR_01_Idle";
			stopRelaxed="AUR_01_Idle";
			default="AUR_01_Idle";
			Combat="AUR_01_Aim";
			fireNotPossible="AUR_01_Aim";
			PlayerStand="AUR_01_Aim";
		};
		class AUR_01_PistolActions: AUR_01_Actions
		{
			upDegree="ManPosHandGunStand";
			stop="AUR_01_Aim_Pistol";
			stopRelaxed="AUR_01_Aim_Pistol";
			default="AUR_01_Aim_Pistol";
			throwGrenade[]=
			{
				"GestureThrowGrenadePistol",
				"Gesture"
			};
			Stand="AUR_01_Idle_Pistol";
			die="AUR_01_Die_Pistol";
			Unconscious="AUR_01_Die_Pistol";
		};
		class AUR_01_IdlePistolActions: AUR_01_Actions
		{
			upDegree="ManPosHandGunStand";
			stop="AUR_01_Idle_Pistol";
			stopRelaxed="AUR_01_Idle_Pistol";
			default="AUR_01_Idle_Pistol";
			Combat="AUR_01_Aim_Pistol";
			fireNotPossible="AUR_01_Aim_Pistol";
			PlayerStand="AUR_01_Aim_Pistol";
			die="AUR_01_Die_Pistol";
			Unconscious="AUR_01_Die_Pistol";
		};
	};
	class BlendAnims;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSoptWbinDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
		class cargo_marksman: AmovPercMstpSrasWrflDnon
		{
		};
		class cargo_base: cargo_marksman
		{
			variantsPlayer[]={};
			variantsAI[]={};
			enableMissile=0;
			enableBinocular=0;
		};
		class cargo_base_Rope: cargo_base
		{
			ignoreMinPlayTime[]=
			{
				"Unconscious"
			};
			leaning="aimingDefault_Rope";
		};
		class cargo_base_idle: cargo_base
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_basepistol: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[]={};
			variantsAI[]={};
			enableMissile=0;
			enableBinocular=0;
		};
		class cargo_base_idle_pistol: cargo_basepistol
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
		};
		class AUR_01_Aim: cargo_base_Rope
		{
			actions="AUR_01_Actions";
			leftHandIKCurve[]={1};
			minPlayTime=0.1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aim.rtm";
			speed=100000;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AUR_01_Idle",
				0.1,
				"AUR_01_Aim_ToPistol",
				0.1,
				"AUR_01_Die",
				0.1
			};
			variantsAI[]=
			{
				"AUR_01_Aim_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Aim_Idling",
				1
			};
		};
		class AUR_01_Aim_No_Actions: AUR_01_Aim
		{
			actions="NoActions";
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_Idling: AUR_01_Aim
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aim1.rtm";
			speed=-8;
			ConnectTo[]=
			{
				"AUR_01_Aim",
				0.1
			};
		};
		class AUR_01_Idle: cargo_base_idle
		{
			actions="AUR_01_IdleActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idle.rtm";
			speed=100000;
			minPlayTime=0.1;
			aiming="aimingDefault";
			leftHandIKCurve[]={0};
			InterpolateTo[]=
			{
				"AUR_01_Aim",
				0.1,
				"AUR_01_Aim_ToPistol",
				0.1,
				"AUR_01_Die",
				0.1
			};
			variantsAI[]=
			{
				"AUR_01_Idle_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Idle_Idling",
				1
			};
		};
		class AUR_01_Idle_No_Actions: AUR_01_Idle
		{
			actions="NoActions";
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class AUR_01_Idle_Idling: AUR_01_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idle1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"AUR_01_Idle",
				0.1
			};
		};
		class AUR_01_Aim_Pistol: cargo_basepistol
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimpistol.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			speed=100000;
			variantsAI[]=
			{
				"AUR_01_Aim_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Aim_Pistol_Idling",
				1
			};
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AUR_01_Aim_FromPistol",
				0.1,
				"AUR_01_Idle_Pistol",
				0.2,
				"AUR_01_Die_Pistol",
				0.5
			};
		};
		class AUR_01_Aim_Pistol_No_Actions: AUR_01_Aim_Pistol
		{
			actions="NoActions";
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_Pistol_Idling: AUR_01_Aim_Pistol
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimpistol1.rtm";
			speed=-8;
			ConnectTo[]=
			{
				"AUR_01_Aim_Pistol",
				0.1
			};
		};
		class AUR_01_Idle_Pistol: cargo_base_idle_pistol
		{
			actions="AUR_01_IdlePistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idlepistol.rtm";
			speed=100000;
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			InterpolateTo[]=
			{
				"AUR_01_Aim_Pistol",
				0.1,
				"AUR_01_Aim_FromPistol",
				0.1,
				"AUR_01_Die_Pistol",
				0.1
			};
			variantsAI[]=
			{
				"AUR_01_Idle_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Idle_Pistol_Idling",
				1
			};
		};
		class AUR_01_Idle_Pistol_No_Actions: AUR_01_Idle_Pistol
		{
			actions="NoActions";
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class AUR_01_Idle_Pistol_Idling: AUR_01_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idlepistol1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"AUR_01_Idle_Pistol",
				0.1
			};
		};
		class AUR_01_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimtopistol.rtm";
			speed=2;
			ConnectTo[]=
			{
				"AUR_01_Aim_ToPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimtopistol_end.rtm";
			speed=1.875;
			ConnectTo[]=
			{
				"AUR_01_Aim_Pistol",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimFrompistol.rtm";
			speed=2.3076921;
			ConnectTo[]=
			{
				"AUR_01_Aim_FromPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end
		{
			actions="AUR_01_Actions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimfrompistol_end.rtm";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			speed=2;
			leftHandIKCurve[]={0,0,0.5,1};
			ConnectTo[]=
			{
				"AUR_01_Aim",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Die: DefaultDie
		{
			actions="AUR_01_DeadActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_die.rtm";
			speed=1;
			looped="false";
			terminal=1;
			ragdoll=1;
			ConnectTo[]=
			{
				"Unconscious",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Die_Pistol: AUR_01_Die
		{
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_die.rtm";
			actions="AUR_01_DeadActions";
			showHandGun=1;
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault_Rope[]=
		{
			"head",
			0.60000002,
			"neck1",
			0.60000002,
			"neck",
			0.60000002,
			"weapon",
			1,
			"launcher",
			1,
			"RightShoulder",
			0.80000001,
			"RightArm",
			0.80000001,
			"RightArmRoll",
			1,
			"RightForeArm",
			1,
			"RightForeArmRoll",
			1,
			"RightHand",
			1,
			"RightHandRing",
			1,
			"RightHandPinky1",
			1,
			"RightHandPinky2",
			1,
			"RightHandPinky3",
			1,
			"RightHandRing1",
			1,
			"RightHandRing2",
			1,
			"RightHandRing3",
			1,
			"RightHandMiddle1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandIndex1",
			1,
			"RightHandIndex2",
			1,
			"RightHandIndex3",
			1,
			"RightHandThumb1",
			1,
			"RightHandThumb2",
			1,
			"RightHandThumb3",
			1,
			"Spine",
			0.30000001,
			"Spine1",
			0.40000001,
			"Spine2",
			0.5,
			"Spine3",
			0.60000002
		};
	};
};
class CfgGesturesMale
{
	skeletonName="OFP2_ManSkeleton";
	class ManActions
	{
	};
	class Actions
	{
		class NoActions
		{
			turnSpeed=0;
			upDegree=0;
			limitFast=1;
			useFastMove=0;
			stance="ManStanceUndefined";
		};
	};
	class Default
	{
		actions="NoActions";
		file="";
		looped=1;
		speed=0.5;
		static=0;
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=0;
		soundOverride="";
		soundEdge[]={0.5,1};
		terminal=0;
		ragdoll=0;
		equivalentTo="";
		connectAs="";
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		mask="empty";
		interpolationSpeed=6;
		interpolationRestart=0;
		preload=0;
		disableWeapons=1;
		enableOptics=0;
		showWeaponAim=1;
		enableMissile=1;
		enableBinocular=1;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		canPullTrigger=1;
		Walkcycles=1;
		headBobMode=0;
		headBobStrength=0;
		leftHandIKBeg=0;
		leftHandIKEnd=0;
		rightHandIKBeg=0;
		rightHandIKEnd=0;
		leftHandIKCurve[]={1};
		rightHandIKCurve[]={1};
		forceAim=0;
	};
	class States
	{
		class AUR_01_Jump1: Default
		{
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_Jump1.rtm";
			minPlayTime=1;
			looped=0;
			speed=0.2;
			mask="AUR_Jump_Rope";
			disableWeapons=0;
			disableWeaponsLong=0;
			weaponLowered=0;
			showWeaponAim=0;
			showHandGun=1;
			canPullTrigger=1;
			canReload=0;
			terminal=0;
			limitGunMovement=0;
			preload=1;
			interpolateTo[]=
			{
				"AUR_01_Jump1",
				0.0099999998,
				"AUR_01_Jump2",
				0.0099999998,
				"AUR_01_Jump3",
				0.0099999998
			};
		};
		class AUR_01_Jump2: AUR_01_Jump1
		{
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_Jump2.rtm";
			speed=9.9999999e-009;
		};
		class AUR_01_Jump3: AUR_01_Jump1
		{
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_Jump3.rtm";
			speed=0.85000002;
		};
	};
	class BlendAnims
	{
		class MaskStart
		{
			weight=0.85000002;
		};
		empty[]={};
		AUR_Jump_Rope[]=
		{
			"head",
			0.0099999998,
			"neck1",
			0.0099999998,
			"neck",
			0.0099999998,
			"weapon",
			0.0099999998,
			"Spine1",
			0.0099999998,
			"Spine2",
			0.0099999998,
			"Spine3",
			0.0099999998,
			"Spine",
			0.0099999998,
			"Pelvis",
			0.0099999998,
			"LeftLeg",
			0.0099999998,
			"LeftLegRoll",
			0.0099999998,
			"LeftUpLeg",
			0.0099999998,
			"LeftUpLegRoll",
			0.0099999998,
			"LeftFoot",
			0.0099999998,
			"LeftToeBase",
			0.0099999998,
			"RightLeg",
			0.0099999998,
			"RightLegRoll",
			0.0099999998,
			"RightUpLeg",
			0.0099999998,
			"RightUpLegRoll",
			0.0099999998,
			"RightFoot",
			0.0099999998,
			"RightToeBase",
			0.0099999998
		};
	};
};
class cfgMods
{
	author="markooff";
	timepacked="1607744856";
};
