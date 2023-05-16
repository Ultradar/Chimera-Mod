class CfgPatches
{
	class PlayerLog
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
		};
	};
};

class CfgFunctions
{
	class PL
	{
		class playerLog
		{
			// call the function upon mission start, after objects are initialized.
			class postInit
			{
				postInit = 1;
				file = "\Playerlog\initServer.sqf";
			};
		};
	};
};

