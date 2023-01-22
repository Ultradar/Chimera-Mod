class CfgPatches
{
	class pzpl_main
	{
		name="PZPL - Main";
		units[]={};
		weapons[]={};
		requiredVersion=1.8200001;
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder",
			"cba_main",
			"ace_main",
			"cba_xeh"
		};
		author="$STR_pzpl_core_PZPLTeam";
		url="$STR_pzpl_main_URL";
		version="0.1.3.3";
		versionStr="0.1.3.3";
		versionAr[]={0,1,3,3};
	};
};
class CfgMods
{
	class pzpl
	{
		dir="@pzpl";
		name="Prone Launcher";
		picture="A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
		hidePicture="true";
		hideName="true";
		actionName="Website";
		action="$STR_pzpl_main_URL";
		description="Issue Tracker: https://github.com/PiZZAD0X/PZPL/issues";
	};
};
class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class PZPL
			{
				class dependencies
				{
					CBA[]=
					{
						"cba_main",
						{3,6,0},
						"(true)"
					};
				};
			};
		};
	};
};
