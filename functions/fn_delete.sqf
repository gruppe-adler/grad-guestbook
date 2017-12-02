#include "..\dialog\defines.hpp"

params [["_buttonCtrl",controlNull]];

private _display = ctrlParent _buttonCtrl;
private _saveTag = _display getVariable ["saveTag",""];
private _guestbookData = _display getVariable ["guestbookData",[[],[]]];
_guestbookData params [["_allMessageData",[]],["_allUserData",[]]];

private _curPageIDL = _display getVariable ["curPageIDL",-1];
private _addID = [1,0] select (ctrlIDC _buttonCtrl == GRAD_GUESTBOOK_IDCBUTTONDELETEL);
private _curID = _curPageIDL + _addID;

private _messageData = _allMessageData select _curID;
_messageData params ["",["_playerUID",""],["_messageID",-1]];

[_playerUID,_messageID,_saveTag] remoteExec ["grad_guestbook_fnc_deleteServer",2,false];
