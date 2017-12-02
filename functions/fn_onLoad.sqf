#include "\x\cba\addons\main\script_macros.hpp"


private _onLoad = {
    params [["_display",displayNull]];

    if (isNull _display) exitWith {};

    _saveTag = _display getVariable ["saveTag",""];
    _guestbookData = missionNamespace getVariable [_saveTag,[[],[]]];
    _display setVariable ["guestbookData",_guestbookData];

    if ((count (_guestbookData select 0)) > 0) then {
        [_display,0] call grad_guestbook_fnc_fillPages;
    };
};

private _waitUntil = {
    params [["_display",displayNull]];
    !isNil {_display getVariable "saveTag"}
};

private _timeOut = {
    params [["_display",displayNull]];
    ERROR("WaitUntil saveTag is set timed out.");
    _display closeDisplay 0;
};

[_waitUntil,_onLoad,_this,1,_timeOut] call CBA_fnc_waitUntilAndExecute;
