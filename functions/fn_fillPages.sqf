#include "\x\cba\addons\main\script_macros.hpp"
#include "..\dialog\defines.hpp"

params [["_display",displayNull],["_pageIDL",0]];

if (isNull _display) exitWith {};
if (_pageIDL mod 2 != 0) exitWith {ERROR("_pageIDL has to be even")};

private _fnc_fillPage = {
    params ["_data","_editCtrl","_textCtrl","_buttonSave","_buttonDelete"];

    if ((count _data) == 0) then {
        [true,[_editCtrl,_buttonSave]] call grad_guestbook_fnc_enableControls;
        [false,[_textCtrl,_buttonDelete]] call grad_guestbook_fnc_enableControls;
    } else {
        [false,[_editCtrl,_buttonSave]] call grad_guestbook_fnc_enableControls;
        [true,[_textCtrl]] call grad_guestbook_fnc_enableControls;

        _data params [["_authorName","MISSING AUTHOR"],["_authorUID","MISSING UID"],["_authorMessageID",0],["_text",""]];

        if (_authorUID == (getPlayerUID player)) then {
            [true,[_buttonDelete]] call grad_guestbook_fnc_enableControls;
        };

        _textCtrl ctrlSetText _text;
    };
};


private _textCtrlL      = _display displayCtrl GRAD_GUESTBOOK_IDCTEXTL;
private _textCtrlR      = _display displayCtrl GRAD_GUESTBOOK_IDCTEXTR;
private _editCtrlL      = _display displayCtrl GRAD_GUESTBOOK_IDCEDITL;
private _editCtrlR      = _display displayCtrl GRAD_GUESTBOOK_IDCEDITR;
private _buttonL        = _display displayCtrl GRAD_GUESTBOOK_IDCBUTTONL;
private _buttonR        = _display displayCtrl GRAD_GUESTBOOK_IDCBUTTONR;
private _buttonSaveL    = _display displayCtrl GRAD_GUESTBOOK_IDCBUTTONSAVEL;
private _buttonSaveR    = _display displayCtrl GRAD_GUESTBOOK_IDCBUTTONSAVER;
private _buttonDeleteL  = _display displayCtrl GRAD_GUESTBOOK_IDCBUTTONDELETEL;
private _buttonDeleteR  = _display displayCtrl GRAD_GUESTBOOK_IDCBUTTONDELETER;

private _guestbookData = _display getVariable ["guestbookData",[[],[]]];
_guestbookData params [["_messageData",[]],["_userData",[]]];

private _dataL = _messageData param [_pageIDL,[]];
private _dataR = _messageData param [_pageIDL + 1,[]];
private _dataNext = _messageData param [_pageIDL + 2,[]];

[_dataL,_editCtrlL,_textCtrlL,_buttonSaveL,_buttonDeleteL] call _fnc_fillPage;
[_dataR,_editCtrlR,_textCtrlR,_buttonSaveR,_buttonDeleteR] call _fnc_fillPage;

_buttonL ctrlEnable (_pageIDL > 0);
_buttonR ctrlEnable (count _dataNext > 0);
