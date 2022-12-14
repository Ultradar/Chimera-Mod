class CfgPatches
{
	class SA_AdvancedSlingLoading
	{
		units[]=
		{
			"SA_AdvancedSlingLoading"
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
	class AdvancedSlingLoadingRemoteExecClient
	{
		module="AdvancedSlingLoading";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"OBJECT",
			"BOOL"
		};
	};
	class AdvancedSlingLoadingRemoteExecServer
	{
		module="AdvancedSlingLoading";
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
		class AdvancedSlingLoading
		{
			file="\SA_AdvancedSlingLoading\functions";
			class advancedSlingLoadingInit
			{
				postInit=1;
			};
		};
	};
};
class cfgMods
{
	author="76561198131707990";
	timepacked="1473204282";
};
