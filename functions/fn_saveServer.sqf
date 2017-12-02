#include "\x\cba\addons\main\script_macros.hpp"

params [["_playerName","MISSING NAME"],["_playerUID","MISSING UID"],["_text",""],["_saveTag",""],["_maxPagesUser",3]];

if (_saveTag == "") exitWith {ERROR_1("Cannot save message of player %1, no saveTag.",_playerName)};

private _guestbookData = profileNamespace getVariable [_saveTag,[[],[]]];
_guestbookData params [["_messageData",[]],["_userData",[]]];

private _userMessageIDs = [_userData,_playerUID] call grad_guestbook_fnc_getUserMessageIDs;
private _nextMessageID = if (count _userMessageIDs > 0) then {(selectMax _userMessageIDs) + 1} else {0};
