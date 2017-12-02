params [["_messageData",[]],["_playerUID",""],["_messageID",-1]];

private _return = -1;
{
    _x params ["","_uid","_mID"];
    if (_uid == _playerUID) then {
        if (_mID == _messageID) then {
            _return = _forEachIndex;
        };
    };

    if (_return > -1) exitWith {};
} forEach _messageData;

_return
