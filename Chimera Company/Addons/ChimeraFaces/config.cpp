class CfgPatches
{
	class ChimeraFaces
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
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head="DefaultHead_A3";
			material="A3\Characters_F\Heads\Data\m_White_01.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
            materialHL="\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
            textureHL2="\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
            materialHL2="\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat"; 
			disabled=0;
		};
		class Bean: Default
		{
			displayname="Bean";
			texture="ChimeraFaces\data\Bean.jpg";
		};
		class Boris: Default
		{
			displayname="Boris";
			texture="ChimeraFaces\data\Boris.jpg";
		};
	};
};
