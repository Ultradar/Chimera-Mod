class CfgPatches
{
	class UnflipVehicle
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

class CfgFunctions
{
	class KS
	{	
		class normalFunctions
		{
			file = "\UnflipVehicle\functions";	// Folder where all functions are.
			class unflipVehicle {};
		};
	};
	
	class KSLOOP
	{
		class spawnThese //Seriously "spawn" these, do not "call" them!
		{
			file = "\UnflipVehicle\functions\loops";
			class unflipVehicleAddAction {};
		};
	};		
};

class Extended_Init_EventHandlers {
    class LandVehicle {
        init = "[_this #0] call KSLOOP_fnc_unflipVehicleAddAction";
    };
};