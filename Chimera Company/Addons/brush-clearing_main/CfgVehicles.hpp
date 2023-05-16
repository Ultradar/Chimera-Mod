class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
				class ClearBrush {
					displayName = "Clear Brush";
					condition = "[_player] call abc_main_fnc_canClearBrush";
					//wait a frame to handle "Do When releasing action menu key" option
					statement = "[{[] call abc_main_fnc_clearBrush},[]] call CBA_fnc_execNextFrame";
					exceptions[] = {};
					showDisabled = 0;
					//icon = QPATHTOF(UI\icon_sandbag_ca.paa);
				};
            };
        };
    };
};
