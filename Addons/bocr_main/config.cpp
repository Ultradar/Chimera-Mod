class CfgPatches
{
	class bocr_main
	{
		name="BOCR - main";
		units[]=
		{
			"bocr_main_ModuleAdd",
			"bocr_main_ModuleOnChest"
		};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"ace_common"
		};
		author="";
		authors[]=
		{
			"ACE Team",
			"Glowbal"
		};
		authorUrl="http://ace3mod.com";
		version="2.1.0.0";
		versionStr="2.1.0.0";
		versionAr[]={2,1,0,0};
	};
};
class Extended_PreStart_EventHandlers
{
	class bocr_main
	{
		init="call compile preprocessFileLineNumbers '\x\bocr\addons\main\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class bocr_main
	{
		init="call compile preprocessFileLineNumbers '\x\bocr\addons\main\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class bocr_main
	{
		init="call compile preprocessFileLineNumbers '\x\bocr\addons\main\XEH_postInit.sqf'";
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class bocr: NO_CATEGORY
	{
		displayName="BackpackOnChestRedux";
		priority=2;
		side=7;
	};
};
class CfgVehicleClasses
{
	class bocr_Vehicles
	{
		displayName="BackpackOnChestRedux Vehicles";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class bocr_main_ModuleAdd: Module_F
	{
		scope=2;
		displayName="$STR_bocr_main_ModuleAdd_Displayname";
		icon="\x\bocr\addons\main\data\moduleAdd.paa";
		category="bocr";
		function="bocr_main_fnc_moduleAdd";
		functionPriority=0;
		isGlobal=0;
		isTriggerActivated=1;
		isDisposable=0;
		is3DEN=0;
		author="DerZade & mjc4wilton";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
			class classname
			{
				displayName="Chestpack classname";
				description="Classname of the disered chestpack";
				typeName="STRING";
				defaultValue="B_Carryall_cbr";
			};
			class items
			{
				displayName="Chestpack Loadout Array";
				description="Items (includes mags, weapons, ...) which should be contained in the chestpack. Items sperated by a ','. Item can either be just a classname (for a single) or an array [classname,amount].";
				typeName="STRING";
				defaultValue="[""FirstAidKit"",3], ""hgun_P07_F"", [""16Rnd_9x21_Mag"",2]";
			};
			class mags
			{
				displayName="Chestpack magazines";
				description="Just for adding partially loaded mags. Mags seperated by a ','. Syntax of single mag.: [magazine, ammo count]";
				typeName="STRING";
				defaultValue="[""30Rnd_65x39_caseless_mag"",20], [""30Rnd_65x39_caseless_mag_Tracer"",10]";
			};
			class code
			{
				displayName="Additional code";
				description="Any addition code to modify the chestpack. '_this' referes to the chestpack itself.";
				typeName="STRING";
				defaultValue="_this setObjectTextureGlobal [0, ""#(rgb,8,8,3)color(0,0,1,1)""];";
			};
		};
		class ModuleDescription: ModuleDescription
		{
			sync[]=
			{
				"AnyPerson1",
				"AnyPerson2"
			};
			description="$STR_bocr_main_ModuleAdd_Description";
			class AnyPerson1
			{
				description="Short description";
				displayName="Any BLUFOR unit";
				icon="iconMan";
				side=1;
			};
			class AnyPerson2: AnyPerson1
			{
			};
		};
	};
	class bocr_main_ModuleOnChest: Module_F
	{
		scope=2;
		displayName="$STR_bocr_main_ModuleOnChest_Displayname";
		icon="\x\bocr\addons\main\data\moduleOnChest.paa";
		category="bocr";
		function="bocr_main_fnc_moduleOnChest";
		functionPriority=0;
		isGlobal=0;
		isTriggerActivated=1;
		isDisposable=0;
		is3DEN=0;
		author="DerZade & mjc4wilton";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
			class classname
			{
				displayName="Backpack classname";
				description="Classname of the backpack which should be added after putting the backpack on chest.";
				typeName="STRING";
				defaultValue="B_Parachute";
			};
			class delay
			{
				displayName="Delay";
				description="";
				typeName="NUMBER";
				defaultValue=0;
			};
		};
		class ModuleDescription: ModuleDescription
		{
			sync[]=
			{
				"AnyPerson1",
				"AnyPerson2"
			};
			description="$STR_bocr_main_ModuleOnChest_Description";
			class AnyPerson1
			{
				description="Short description";
				displayName="Any BLUFOR unit";
				icon="iconMan";
				side=1;
			};
			class AnyPerson2: AnyPerson1
			{
			};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class bocr_main_onChest
				{
					displayName="$STR_bocr_main_OnChest";
					condition="!(bocr_main_disabled) && !(backpack _player isEqualTo """") && (([_player] call bocr_main_fnc_chestpack) isEqualTo """")";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[_player] call bocr_main_fnc_actionOnChest";
					showDisabled=0;
					priority=2.5;
					icon="\x\bocr\addons\main\ui\onchest_ca.paa";
				};
				class bocr_main_onBack: bocr_main_onChest
				{
					displayName="$STR_bocr_main_OnBack";
					condition="!(bocr_main_disabled) && (backpack _player isEqualTo """") && !(([_player] call bocr_main_fnc_chestpack) isEqualTo """")";
					statement="[_player] call bocr_main_fnc_actionOnBack";
					icon="\x\bocr\addons\main\ui\onback_ca.paa";
				};
				class bocr_main_swap: bocr_main_onChest
				{
					displayName="$STR_bocr_main_Swap";
					condition="!(bocr_main_disabled) && !(backpack _player isEqualTo """") && !(([_player] call bocr_main_fnc_chestpack) isEqualTo """")";
					statement="[_player] call bocr_main_fnc_actionSwap";
					icon="\x\bocr\addons\main\ui\swap_ca.paa";
				};
			};
		};
	};
};
class CfgFunctions
{
	class zade_boc
	{
		tag="zade_boc";
		class zade_boc
		{
			class actionOnBack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class actionOnChest
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class actionSwap
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class addChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class addItemToChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class addMagToChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class canAddItemToChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class chestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class chestpackContainer
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class chestpackItems
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class chestpackMagazines
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class clearAllItemsFromChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class loadChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class removeChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class removeItemFromChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class removeMagFromChestpack
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class moduleAdd
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
			class moduleOnChest
			{
				file="\x\bocr\addons\main\functions\fnc_legacyRedirect.sqf";
			};
		};
	};
};
