#include "\x\cba\addons\main\script_macros.hpp"

params [["_playerName","MISSING NAME"],["_playerUID","MISSING UID"],["_text",""],["_saveTag",""],["_maxPagesUser",3]];

if (_saveTag == "") exitWith {ERROR_1("Cannot save message of player %1, no saveTag.",_playerName)};

private _guestbookData = profileNamespace getVariable [_saveTag,[[],[]]];
_guestbookData params [["_allMessageData",[]],["_allUserData",[]]];

private _userData = [_allUserData,_playerUID] call grad_guestbook_fnc_getUserMessageIDs;
if (count _userData == 0) then {_userData = _allUserData select (_allUserData pushBack [_playerUID,[]])};
private _userIDs = _userData select 1;

private _nextMessageID = if (count _userIDs > 0) then {(selectMax _userIDs) + 1} else {0};

while {count _userIDs >= _maxPagesUser} do {
    _messageID = _userIDs deleteAt 0;
    _messageDataID = [_allMessageData,_playerUID,_messageID] call grad_guestbook_fnc_findMessage;
    _allMessageData deleteAt _messageDataID;
};

_allMessageData pushBack [_playerName,_playerUID,_nextMessageID,_text];
_userIDs pushBack _nextMessageID;
saveProfileNamespace;

missionNamespace setVariable [_saveTag,_guestbookData,true];

[] remoteExec ["grad_guestbook_fnc_fillPages",remoteExecutedOwner,false];
