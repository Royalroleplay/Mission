#define F(NAME,TARGET) class NAME { \
	allowedTargets = TARGET; \
};

#define ANYONE 0
#define CLIENT 1
#define SERVER 2

class CfgRemoteExec {
	class Functions {
		mode = 1;
		jip = 0;

		/* Client only functions */
		F(life_fnc_jail,CLIENT)
		F(life_fnc_moveIn,CLIENT)
		F(life_fnc_restrain,CLIENT)
		F(life_fnc_restrainCop,CLIENT)
		F(life_fnc_robPerson,CLIENT)
		F(life_fnc_searchClient,CLIENT)
		F(TON_fnc_player_query,CLIENT)
		F(life_fnc_knockedOut,CLIENT)
		F(life_fnc_robReceive,CLIENT)
		F(life_fnc_tazeSound,CLIENT)
		F(life_fnc_copSiren,CLIENT)
		F(life_fnc_medicSiren,CLIENT)
		F(life_fnc_giveDiff,CLIENT)
		F(life_fnc_gangInvite,CLIENT)
		F(TON_fnc_clientGangKick,CLIENT)
		F(TON_fnc_clientGangLeader,CLIENT)
		F(life_fnc_lightHouse,CLIENT)
		F(life_fnc_medicRequest,CLIENT)
		F(life_fnc_revived,CLIENT)
		F(life_fnc_receiveItem,CLIENT)
		F(life_fnc_receiveMoney,CLIENT)
		F(TON_fnc_clientGetKey,CLIENT)
		F(life_fnc_soundDevice,CLIENT)
		F(life_fnc_wireTransfer,CLIENT)
		F(life_fnc_pickupMoney,CLIENT)
		F(life_fnc_pickupItem,CLIENT)
		F(life_fnc_gangCreated,CLIENT)
		F(life_fnc_gangDisbanded,CLIENT)
		F(life_fnc_jailMe,CLIENT)
		F(SOCK_fnc_dataQuery,CLIENT)
		F(SOCK_fnc_insertPlayerInfo,CLIENT)
		F(SOCK_fnc_requestReceived,CLIENT)
		F(life_fnc_adminid,CLIENT)
		F(life_fnc_impoundMenu,CLIENT)
		F(life_fnc_garageRefund,CLIENT)
		F(life_fnc_addVehicle2Chain,CLIENT)
		F(life_fnc_vehicleAnimate,CLIENT)
		F(life_fnc_spikeStripEffect,CLIENT)
		F(life_fnc_bountyReceive,CLIENT)
		F(life_fnc_wantedList,CLIENT)
		F(life_fnc_removeLicenses,CLIENT)
		F(life_fnc_admininfo,CLIENT)
		F(TON_fnc_clientMessage,CLIENT)
		F(life_fnc_licenseCheck,CLIENT)
		F(life_fnc_licensesRead,CLIENT)
		F(life_fnc_copSearch,CLIENT)
		F(life_fnc_copLights,CLIENT)
		F(life_fnc_ticketPrompt,CLIENT)
		F(life_fnc_ticketPaid,CLIENT)
		F(MBF_Phone_fnc_hangUpActive,CLIENT)
		F(life_fnc_blindfold,CLIENT)
		F(life_fnc_patDown,CLIENT)
		
		/* Server only functions */
		F(bis_fnc_execvm,SERVER)
		F(bis_fnc_call,SERVER)
		F(life_fnc_wantedBounty,SERVER)
		F(TON_fnc_getID,SERVER)
		F(life_fnc_jailSys,SERVER)
		F(life_fnc_wantedRemove,SERVER)
		F(life_fnc_wantedAdd,SERVER)
		F(TON_fnc_insertGang,SERVER)
		F(TON_fnc_removeGang,SERVER)
		F(TON_fnc_updateGang,SERVER)
		F(TON_fnc_updateHouseTrunk,SERVER)
		F(TON_fnc_sellHouse,SERVER)
		F(TON_fnc_managesc,SERVER)
		F(TON_fnc_spikeStrip,SERVER)
		F(life_fnc_wantedPardon,SERVER)
		F(life_fnc_wantedFetch,SERVER)
		F(TON_fnc_chopShopSell,SERVER)
		F(TON_fnc_setObjVar,SERVER)
		F(TON_fnc_keyManagement,SERVER)
		F(TON_fnc_vehicleDelete,SERVER)
		F(TON_fnc_spawnVehicle,SERVER)
		F(TON_fnc_getVehicles,SERVER)
		F(TON_fnc_vehicleStore,SERVER)
		F(TON_fnc_pickupAction,SERVER)
		F(TON_fnc_cleanupRequest,SERVER)
		F(TON_fnc_updateHouseContainers,SERVER)
		F(TON_fnc_vehicleCreate,SERVER)
		F(MBSF_Phone_fnc_initPhoneCall,SERVER)
		F(MBF_Fnc_callFireworks,SERVER)
		F(MBF_fnc_startBreak,SERVER)
		F(MBF_Bank_fnc_startRobbery,SERVER)
		F(MBF_Bank_fnc_resetBank,SERVER)
		
		/* Functions for everyone */
		F(life_fnc_broadcast,ANYONE)
		F(life_fnc_animSync,ANYONE)
		F(life_fnc_demoChargeTimer,ANYONE)
		F(life_fnc_corpse,ANYONE)
		F(life_fnc_colorVehicle,ANYONE)
		F(life_fnc_lockVehicle,ANYONE)
		F(life_fnc_setTexture,ANYONE)
		F(life_fnc_flashbang,ANYONE)
		F(life_fnc_jumpFnc,ANYONE)
		F(life_fnc_setFuel,ANYONE)
		F(life_fnc_pulloutVeh,ANYONE)
		F(life_fnc_pushFunction,ANYONE)
		F(life_fnc_simDisable,ANYONE)
		F(MBF_fnc_fireworks,ANYONE)
		F(life_fnc_addBankCashAction,ANYONE)
		F(DB_fnc_queryRequest,ANYONE)
		F(DB_fnc_insertRequest,ANYONE)
		F(DB_fnc_updatePartial,ANYONE)
		F(DB_fnc_updateRequest,ANYONE)
 		F(MBF_fnc_logTrans,ANYONE)

	};
	
	class Commands {
		mode = 1;
		jip = 0;
		
		F(setFuel,ANYONE)
		F(addWeapon,ANYONE)
		F(addMagazine,ANYONE)
		F(addPrimaryWeaponItem,ANYONE)
		F(addHandgunItem,ANYONE)
	};
};
