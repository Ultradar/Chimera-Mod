class CfgPatches
{
	class 3rd_person_view
	{
		name="3rd person view";
		author="Ultradar";
		version=1;
		units[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_Characters_F"
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		extCameraPosition[]={0.43000000,-0.15000000,-1.35};
	};
};