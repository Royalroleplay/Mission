/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_target",objNull,[objNull]]];
_names = profileNamespace getVariable ["MrBoolean_Custom_Names", []];

//Setup our temp vars
_targetUID = getPlayerUID _target;
_newName = ctrlText 1400;
_tempArray = [_targetUID, _newName];
_contents = [];
_exists = false;
{
	_exists = _targetUID in _x;
	_contents = _x;
}foreach _names;

//Add it to our array
if(_exists) then {

	_index = _names find _contents;
	_names set [_index, [_targetUID, _newName]];
} else {

	_names pushBack _tempArray;
};

//Update our master
profileNamespace setVariable ["MrBoolean_Custom_Names", _names];
MB_Saved_Names = _names;