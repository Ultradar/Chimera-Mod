class CfgPatches
{
	class SA_AdvancedTowing
	{
		units[]=
		{
			"SA_AdvancedTowing"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Modules_F"
		};
	};
};
class CfgNetworkMessages
{
	class AdvancedTowingRemoteExecClient
	{
		module="AdvancedTowing";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"OBJECT",
			"BOOL"
		};
	};
	class AdvancedTowingRemoteExecServer
	{
		module="AdvancedTowing";
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
		class AdvancedTowing
		{
			file="\SA_AdvancedTowing\functions";
			class advancedTowingInit
			{
				postInit=1;
			};
		};
	};
};
class cfgMods
{
	author="76561198131707990";
	timepacked="1460535878";
};
