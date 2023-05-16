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
			material="ChimeraFaces\data\custom.rvmat"; 
		};
		class Boris: Default
		{
			displayname="Boris";
			texture="ChimeraFaces\data\Boris.jpg";
			material="ChimeraFaces\data\custom.rvmat"; 
		};
		class Charles: Default
		{
			displayname="Charles";
			texture="ChimeraFaces\data\Charles.jpg";
			material="ChimeraFaces\data\custom.rvmat"; 
		};
		class KITT: Default
		{
			displayname="KITT";
			texture="ChimeraFaces\data\KITT.jpg";
			material="ChimeraFaces\data\custom.rvmat"; 
		};
		class Blobby: Default
		{
			displayname="Mr. Blobby";
			texture="ChimeraFaces\data\Mr_Blobby.jpg";
			material="ChimeraFaces\data\custom.rvmat"; 
		};
		class Nicolas: Default
		{
			displayname="Nicolas Cage";
			texture="ChimeraFaces\data\Nicolas_A.jpg";
			material="ChimeraFaces\data\custom.rvmat"; 
		};
		class Queen: Default
		{
			displayname="Lizzy";
			texture="ChimeraFaces\data\queen.jpg";
			material="ChimeraFaces\data\custom.rvmat"; 
		};
	};
};
