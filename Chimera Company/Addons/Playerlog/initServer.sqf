if (true) then {
	[] spawn {
		while {true} do {
		diag_log text "*** Chimera player list [START] ***";
		diag_log systemTimeUTC;
		_infoPlayer =  getPlayerID player;  //or target
		_userInfo = getUserInfo _infoPlayer;
		diag_log str  _userInfo;
		diag_log text "*** Chimera player list [FINISH] ***";
		sleep 5;
		};
	};
};

/*
if (isServer) then {
	[] spawn {
		while {true} do {
		diag_log text "*** Chimera player list [START] ***";
		diag_log systemTimeUTC;
		diag_log call BIS_fnc_listPlayers;
		diag_log text "*** Chimera player list [FINISH] ***";
		sleep 5;
		};
	};
};

_userInfo = getUserInfo _infoPlayer params ["_playerID", "_playerUID", "_soldierNameInclSquad", "_steamProfileName", "_adminState"];
*/