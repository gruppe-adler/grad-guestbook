params [["_saveTag",""]];

_guestbookData = profileNamespace getVariable [_saveTag,[[],[]]];
missionNamespace setVariable [_saveTag,_guestbookData,true];
