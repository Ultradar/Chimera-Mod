class CfgPatches
{
	class ChimeraComposition
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class CfgEditorCategories
{
	class Chimeraspawns // CfgGroups NATO
	{
		displayName = "Chimera Spawn Composition";
	};
};

class CfgEditorSubcategories
{
	class ChimeraSpawn // CfgGroups Armored
	{
		displayName = "Chimera Spawn";
	};
};

class Cfg3DEN
{
	class Compositions
	{
		class Chimera_Blufor // one class per composition
		{
			path = "ChimeraComposition\Compositions\Preset_Blufor";	// pbo path to a folder containing header.sqe/composition.sqe files
			side = 1;											// 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "ChimeraSpawns";						// link to CfgEditorCategories
			editorSubcategory = "ChimeraSpawn";				// link to CfgEditorSubcategories
			displayName = "Chimera Blufor Spawn";
			icon = "\ChimeraPatches\icon\ChimeraLogo256.paa";	// left side icon in groups list
			useSideColorOnIcon = 1;								// 1 == icon is always colored in faction color
		};
		class Chimera_Opfor // one class per composition
		{
			path = "ChimeraComposition\Compositions\Preset_Opfor";	// pbo path to a folder containing header.sqe/composition.sqe files
			side = 0;											// 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "ChimeraSpawns";						// link to CfgEditorCategories
			editorSubcategory = "ChimeraSpawn";				// link to CfgEditorSubcategories
			displayName = "Chimera Opfor Spawn";
			icon = "\ChimeraPatches\icon\ChimeraLogo256.paa";	// left side icon in groups list
			useSideColorOnIcon = 1;								// 1 == icon is always colored in faction color
		};
		class Chimera_Indfor // one class per composition
		{
			path = "ChimeraComposition\Compositions\Preset_Indfor";	// pbo path to a folder containing header.sqe/composition.sqe files
			side = 2;											// 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "ChimeraSpawns";						// link to CfgEditorCategories
			editorSubcategory = "ChimeraSpawn";				// link to CfgEditorSubcategories
			displayName = "Chimera Indfor Spawn";
			icon = "\ChimeraPatches\icon\ChimeraLogo256.paa";	// left side icon in groups list
			useSideColorOnIcon = 1;								// 1 == icon is always colored in faction color
		};
	};
};