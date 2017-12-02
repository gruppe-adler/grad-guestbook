#include "\x\cba\addons\main\script_macros.hpp"

params [["_obj",objNull],["_saveTag",""],["_maxPagesUser",3],["_displayName","Guestbook"],["_condition",{true}],["_actionPath",["ACE_MainActions"]]];

if (_saveTag == "") exitWith {ERROR("Param 1: saveTag not defined.")};

//add action ===================================================================
private _action = ["grad_guestbook_openGuestbook",_displayName,"",{
    params ["_obj","_caller","_actionParams"];
    [grad_guestbook_fnc_openDialog,_actionParams] call CBA_fnc_execNextFrame;
},_condition,{},[_saveTag,_maxPagesUser]] call ace_interact_menu_fnc_createAction;
[_obj,0,_actionPath,_action] call ace_interact_menu_fnc_addActionToObject;


//broadcast savetag corresponding data =========================================
if (isServer) then {
    [_saveTag] call grad_guestbook_fnc_initSaveTag;
};
