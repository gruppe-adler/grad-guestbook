#include "..\dialog\defines.hpp"

params [["_buttonCtrl",controlNull]];

private _display = ctrlParent _buttonCtrl;
private _editCtrlIDC = [GRAD_GUESTBOOK_IDCEDITR,GRAD_GUESTBOOK_IDCEDITL] select (ctrlIDC _buttonCtrl == GRAD_GUESTBOOK_IDCBUTTONSAVEL);
private _editCtrl = _display displayCtrl _editCtrlIDC;

private _saveTag = _display getVariable ["saveTag",""];
private _maxPagesUser = _display getVariable ["maxPagesUser",3];

private _text = ctrlText _editCtrl;
_editCtrl ctrlSetText "";

[profileName,getPlayerUID player,_text,_saveTag,_maxPagesUser] remoteExec ["grad_guestbook_fnc_saveServer",2,false];
