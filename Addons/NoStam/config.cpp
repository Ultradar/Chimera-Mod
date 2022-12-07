class CfgPatches
{
	class NoStam
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"Extended_EventHandlers"
		};
	};
};
class Extended_PreInit_EventHandlers
{
	RS_Init="RS_Init_Var = [] execVM ""\NoStam\init.sqf""";
};
