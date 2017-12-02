#include "..\dialog\defines.hpp"
#include "\x\cba\addons\main\script_macros.hpp"

params [["_buttonCtrl",controlNull]];

private _display = ctrlParent _buttonCtrl;
private _increment = [2,-2] select (ctrlIDC _buttonCtrl == GRAD_GUESTBOOK_IDCBUTTONL);

private _curPageIDL = _display getVariable ["curPageIDL",0];
private _newPageIDL = _curPageIDL + _increment;

if (_newPageIDL < 0) exitWith {ERROR("Left button clicked, but no pages.")};

[_display,_newPageIDL] call grad_guestbook_fnc_fillPages;
