params [["_dataArray",[]],["_UID",""]];

private _return = [];
{
    if ((_x select 0) == _UID) exitWith {
        _return = _x;
        false
    };
    false
} count _dataArray;

_return
