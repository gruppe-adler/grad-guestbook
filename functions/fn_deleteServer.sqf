#include "\x\cba\addons\main\script_macros.hpp"

params [["_playerUID","MISSING UID"],["_messageID",-1],["_saveTag",""]];

if (_saveTag == "") exitWith {ERROR_1("Cannot save message of player %1, no saveTag.",_playerName)};

private _guestbookData = profileNamespace getVariable [_saveTag,[[],[]]];
_guestbookData params [["_allMessageData",[]],["_allUserData",[]]];

private _userData = [_allUserData,_playerUID] call grad_guestbook_fnc_getUserMessageIDs;
if (count _userData == 0) exitWith {ERROR_1("User data for UID %1 not found.",_playerUID)};

private _userIDs = _userData select 1;
_userIDs deleteAt (_userIDs find _messageID);
_allMessageData deleteAt ([_allMessageData,_playerUID,_messageID] call grad_guestbook_fnc_findMessage);

saveProfileNamespace;

missionNamespace setVariable [_saveTag,_guestbookData,true];

[] remoteExec ["grad_guestbook_fnc_fillPages",remoteExecutedOwner,false];
