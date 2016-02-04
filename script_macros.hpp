#define DEBUG 1

#ifdef DEBUG
#define RCLIENT 0
#else
#define RCLIENT -2
#endif

#define RSERV 2
#define RANY 0

#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
#define CONSTVAR(var) var = compileFinal (if(typeName var == "STRING") then {var} else {str(var)})
#define FETCH_CONST(var) (call var)

#define CONTROL(disp,ctrl) ((findDisplay ##disp) displayCtrl ##ctrl)
#define CONTROL_DATA(ctrl) (lbData[ctrl,lbCurSel ctrl])
#define CONTROL_DATAI(ctrl,index) ctrl lbData index

#define LICENSE_VARNAME(varName,flag) format["license_%1_%2",flag,M_CONFIG(getText,"Licenses",varName,"variable")]
#define LICENSE_VALUE(varName,flag) missionNamespace getVariable [LICENSE_VARNAME(varName,flag),false]
#define ITEM_VARNAME(varName) format["life_inv_%1",M_CONFIG(getText,"VirtualItems",varName,"variable")]
#define ITEM_VALUE(varName) missionNamespace getVariable [ITEM_VARNAME(varName),0]
#define ITEM_ILLEGAL(varName) M_CONFIG(getNumber,"VirtualItems",ITEM_VARNAME(varName),"illegal")
#define ITEM_SELLPRICE(varName) M_CONFIG(getNumber,"VirtualItems",ITEM_VARNAME(varName),"sellPrice")
#define ITEM_BUYPRICE(varName) M_CONFIG(getNumber,"VirtualItems",ITEM_VARNAME(varName),"buyPrice")
#define ITEM_NAME(varName) M_CONFIG(getText,"VirtualItems",varName,"displayName")

#define FETCH_CONFIG(TYPE,CFG,SECTION,CLASS,ENTRY) TYPE(configFile >> CFG >> SECTION >> CLASS >> ENTRY)
#define FETCH_CONFIG2(TYPE,CFG,CLASS,ENTRY) TYPE(configFile >> CFG >> CLASS >> ENTRY)
#define FETCH_CONFIG3(TYPE,CFG,SECTION,CLASS,ENTRY,SUB) TYPE(configFile >> CFG >> SECTION >> CLASS >> ENTRY >> SUB)
#define FETCH_CONFIG4(TYPE,CFG,SECTION,CLASS,ENTRY,SUB,SUB2) TYPE(configFile >> CFG >> SECTION >> CLASS >> ENTRY >> SUB >> SUB2)
#define M_CONFIG(TYPE,CFG,CLASS,ENTRY) TYPE(missionConfigFile >> CFG >> CLASS >> ENTRY)
#define BASE_CONFIG(CFG,CLASS) inheritsFrom(configFile >> CFG >> CLASS)
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

#define FNC_SUB(var1,var2) var1 = var1 - var2
#define FNC_ADD(var1,var2) var1 = var1 + var2
#define FNC_DIV(var1,var2) var1 = var1 / var2
#define FNC_MUL(var1,var2) var1 = var1 * var2

#define FNC_ISKINDOF(a,b) [##a,##b] call {_object = _this select 0;_types = _this select 1;_return = false; {if (_object isKindOf _x) exitwith { _return = true };} forEach _types;_return}
#define FNC_INDEX(a,b) [##a,##b] call {_item = _this select 0;_stack = _this select 1;_return = -1; {if (_item in _x) exitwith { _return = _forEachIndex };} forEach _stack;_return}
#define FNC_RETURNCFG(a) ##a call {{ if((_x in [missionConfigFile,configFile] && _forEachIndex isEqualTo 0) then {_return = _x} else { _return = >> _x}; } foreach _this; switch (true) do { case (isNumber _return) : {_return = getNumber _return}; case (isText _return) : {_return = getText _return}; case (isArray _return) : {_return = getArray _return}; default {_return = "Not a legitimate path!"}; }; _return}
#define FNC_RETURNPRT(a) ##a call {{ if((_x in [missionConfigFile,configFile] && _forEachIndex isEqualTo 0) then {_return = _x} else { _return = >> _x}; } foreach _this; _return = inheritsFrom _return; _return}
