
params[["_action",false,[false]]];

if(_action) then {
	player setVariable ["blindfold",true,true];
	cutText["","BLACK",3,true];
} else {
	player setVariable ["blindfold",false,true];
	cutText["","PLAIN",3];
};