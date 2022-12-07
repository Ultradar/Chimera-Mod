params ["_vehicle"];
private _vehicleName = (configFile >> 'cfgVehicles' >> typeOf _vehicle >> 'displayName') call BIS_fnc_GetCfgData;

_vehicle addaction
[
    format ["<img image='\UnflipVehicle\icons\action_unflip.paa' /><t color='#E5E500' shadow='2'>&#160;Unflip %1</t>",_vehicleName],
    "params ['_target', '_caller', '_actionId', '_arguments'];
    _target call KS_fnc_unflipVehicle;",
    nil,
    12,
    true,
    false,
    "",
    "{alive _x} count crew _target isEqualTo 0 &&
    (vectorUp _target vectorCos surfaceNormal getPos _target < 0.45) &&
    lifeState _this in ['HEALTHY','INJURED']
    ",
    10,
    false,        
    "",            
    ""
];