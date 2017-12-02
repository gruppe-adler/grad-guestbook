#include "\x\cba\addons\main\script_macros.hpp"

params [["_obj",objNull],["_saveTag",""],["_displayName","Guestbook"],["_condition",{true}],["_actionPath",["ACE_MainActions"]]];

if (_saveTag == "") exitWith {ERROR("Param 1: saveTag not defined.")};

private _action = ["grad_guestbook_openGuestbook",_displayName,"",{
    [{createDialog "grad_guestbook_rscDisplayGuestbook"},[]] call CBA_fnc_execNextFrame;
},_condition] call ace_interact_menu_fnc_createAction;
[_obj,0,_actionPath,_action] call ace_interact_menu_fnc_addActionToObject;
