#include "main.h"

#define NETGAME_VERSION 4047

char* RPC_OnPlayerTakeDamage = "\x73";
char* RPC_ServerStats = "\x66";
char* RPC_SetInteriorID = "\x76";
char* RPC_ScmEvent = "\x60";
char* RPC_ScriptCash = "\x1F";
char* RPC_OnPlayerClickMap = "\x77";
char* RPC_VehicleDestroyed = "\x88";
char* RPC_WeaponPickup = "\x61";
char* RPC_PickUpPickup = "\x83";
char* RPC_MenuSelect = "\x84";
char* RPC_MenuQuit = "\x8C";
char* RPC_PlayerDialogResponse = "\x3E";
char* RPC_PlayerClickPlayer = "\x17";
char* RPC_ClientJoin = "\x19";
char* RPC_NPCJoin = "\x36";
char* RPC_Chat = "\x65";
char* RPC_RequestClass = "\x80";
char* RPC_RequestSpawn = "\x81";
char* RPC_Spawn = "\x34";
char* RPC_Death = "\x35";
char* RPC_DamageVehicle = "\x6A";
char* RPC_EnterVehicle = "\x1A";
char* RPC_ExitVehicle = "\x9A";
char* RPC_ServerCommand = "\x32";
char* RPC_UpdateScoreboard = "\x9B";
char* RPC_EditAttachedObject = "\x74";
char* RPC_EditObject = "\x75";
char* RPC_SelectObject = "\x1B";
char* RPC_ClickTextDraw = "\x53";
char* RPC_CheckResponse = "\x67";

char* RPC_SendDeathMessage = "\xFF";
char* RPC_SetPlayerMapIcon = "\xFF";
char* RPC_RemoveComponent = "\xFF";
char* RPC_HideText3DLabel = "\xFF";
char* RPC_SetPlayerChatBubble = "\xFF";

char* RPC_ShowPlayerDialog = "\xFF";
char* RPC_SetVehicleParamsEx = "\xFF";
char* RPC_SetPlayerInterior = "\xFF";
char* RPC_SetPlayerCameraPos = "\xFF";
char* RPC_SetPlayerCameralookAt = "\xFF";
char* RPC_SetVehiclePos = "\xFF";
char* RPC_SetVehicleZAngle = "\xFF";
char* RPC_SetVehicleParamsForPlayer = "\xFF";
char* RPC_SetPlayerCameraBehindPlayer = "\xFF";
char* RPC_HidePlayerForPlayer = "\xFF";
char* RPC_ShowVehicleToPlayer = "\xFF";
char* RPC_HideVehicleToPlayer = "\xFF";
char* RPC_PlayerDeath = "\xFF";
char* RPC_ShowCheckpoint = "\xFF";
char* RPC_AddGangZone = "\xFF";

char* RPC_PlayCrimeReportForPlayer = "\xFF";

char* RPC_ChangeWeather = "\xFF";
char* RPC_SetPlayerSkin = "\xFF";
char* RPC_SetPlayerName = "\xFF";
char* RPC_SetPlayerPosition = "\xFF";
char* RPC_SetPlayerPositionFindZ = "\xFF";
char* RPC_SetPlayerHealth = "\xFF";
char* RPC_TogglePlayerControllable = "\xFF";
char* RPC_PlayerPlaySound = "\xFF";
char* RPC_SetWorldBounds = "\xFF";
char* RPC_GivePlayerMoney = "\xFF";
char* RPC_SetPlayerFacingAngle = "\xFF";
char* RPC_ResetPlayerMoney = "\xFF";
char* RPC_ResetPlayerWeapons = "\xFF";
char* RPC_GivePlayerWeapon = "\xFF";

char* RPC_LinkVehicleToInterior = "\xFF";
char* RPC_SetPlayerArmour = "\xFF";

char* RPC_SetPlayerArmedWeapon = "\xFF";
char* RPC_SetCustomSpawn = "\xFF";
char* RPC_SetPlayerTeam = "\xFF";
char* RPC_PutPlayerInVehicle = "\xFF";
char* RPC_RemovePlayerFromVehicle = "\xFF";
char* RPC_SetPlayerColor = "\xFF";
char* RPC_ShowGameTextForPlayer = "\xFF";
char* RPC_ForceClassSelection = "\xFF";
char* RPC_AttachObjectToPlayer = "\xFF";
char* RPC_Menu_InitForPlayer = "\xFF";
char* RPC_Menu_ShowForPlayer = "\xFF";
char* RPC_Menu_HideForPlayer = "\xFF";
char* RPC_CreateExplosion = "\xFF";

char* RPC_ShowPlayerNameTagForPlayer = "\xFF";

char* RPC_SetPlayerTime = "\xFF";
char* RPC_TogglePlayerClock = "\xFF";
char* RPC_SpawnPlayerForPlayer = "\xFF"; //RPC_WorldPlayerAdd
char* RPC_SetPlayerShopName = "\xFF";
char* RPC_SetSkillLevel = "\xFF";
char* RPC_SetPlayerDrunkLevel = "\xFF";
char* RPC_ShowText3DLabels = "\xFF";
char* RPC_HideCheckpoint = "\xFF";
char* RPC_ShowRaceCheckpoint = "\xFF";
char* RPC_HideRaceCheckpoint = "\xFF";
char* RPC_GameModeRestart = "\xFF";

char* RPC_EnableStuntBonus = "\xFF";
char* RPC_TextDraw_SetString = "\xFF";
char* RPC_PlayAudioStream = "\xFF";
char* RPC_StopAudioStream = "\xFF";
char* RPC_RemoveBuilding = "\xFF";

char* RPC_SpawnObject = "\xFF";
char* RPC_SetObjectPosition = "\xFF";
char* RPC_SetObjectRotation = "\xFF";
char* RPC_DestroyObject = "\xFF";

char* RPC_RemoveGangZone = "\xFF";
char* RPC_FlashGangZone = "\xFF";
char* RPC_StopFlashGangZone = "\xFF";
char* RPC_ApplyAnimation = "\xFF";
char* RPC_ClearAnimation = "\xFF";
char* RPC_SetPlayerSpecialAction = "\xFF";
char* RPC_SetPlayerFightingStyle = "\xFF";
char* RPC_SetPlayerVelocity = "\xFF";
char* RPC_SetVehicleVelocity = "\xFF";

char* RPC_MoveObject = "\xFF";
char* RPC_StopObject = "\xFF";

char* RPC_TogglePlayerSpectating = "\xFF";

char* RPC_SetPlayerSpectatingPlayer = "\xFF";
char* RPC_SetPlayerSpectatingVehicle = "\xFF";

char* RPC_ConnectionRejected = "\xFF";
char* RPC_ClientMessage = "\x5D";
char* RPC_WorldTime = "\xFF";

char* RPC_SetPlayerWantedLevel = "\xFF";
char* RPC_ShowTextDraw = "\xFF";
char* RPC_HideTextDraw = "\xFF";
char* RPC_NewPlayer = "\x89";
char* RPC_PlayerLeave = "\x8A";
char* RPC_InitGame = "\x8B"; //OK

char* RPC_RemovePlayerMapIcon = "\xFF";
char* RPC_SetPlayerAmmo = "\xFF";
char* RPC_SetGravity = "\xFF";
char* RPC_SetVehicleHealth = "\xFF";
char* RPC_AttachTrailerToVehicle = "\xFF";
char* RPC_DetachTrailerFromVehicle = "\xFF";

//0.3d
char* RPC_ToggleWidescreen = "\xFF";
char* RPC_AttachAttachedObject = "\xFF";
char* RPC_ShowPickupForPlayer = "\xFF";
char* RPC_HidePickupForPlayer = "\xFF";
char* RPC_SendTime = "\xFF";
char* RPC_SetTimeEx = "\xFF";

char* RPC_RegisterBindKey = "\xFF";
char* RPC_UnregisterBindKey = "\xFF";
char* RPC_PlayerPressKeyBinded = "\xFF";

#define GAMESTATE_RUNNING			1

#define REJECT_REASON_BAD_VERSION	1
#define REJECT_REASON_BAD_NICKNAME	2
#define REJECT_REASON_BAD_MOD		3
#define REJECT_REASON_BAD_PLAYERID	4

#define EVENT_TYPE_PAINTJOB				1
#define EVENT_TYPE_CARCOMPONENT			2
#define EVENT_TYPE_CARCOLOR				3
#define EVENT_ENTEREXIT_MODSHOP			4

uint32_t serverTicket;

RakServerInterface* pRak = 0;

bool ContainsInvalidNickChars(char* szString)
{
	int x=0;

	while(*szString)
	{
		if( (*szString >= '0' && *szString <= '9') ||
			(*szString >= 'A' && *szString <= 'Z') ||
			(*szString >= 'a' && *szString <= 'z')  ||
			*szString == ']' || *szString == '[' ||
			*szString == '_'  || *szString == '$' ||
			*szString == '=' || *szString == '(' ||	
			*szString == ')' || *szString == '@' || 
			*szString == '.' ) 
		{

			szString++;
		} 
		else
			return true;

	}
	return false;
}

void ClientJoin(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);
	RakNet::BitStream bsReject;

	if(!__NetGame || !__NetGame->playerPool) return;

	CPlayerPool* playerPool = __NetGame->playerPool;

	char		playerName[256];
	_PlayerID	playerId;
	int			playerVersion;
	uint8_t		playerMod;
	uint8_t		playerNickLen;
	uint8_t		rejectReason;
	uint32_t	playerTicket = 0;
	char		playerSerial[256];
	uint8_t		playerSerialLen;
	bool		isAnOpenSAMPClient = false;
	uint32_t	openSampPlayerTicket = 0;
	playerId = __NetGame->rakServerInterface->GetIndexFromPlayerID(sender);
	PlayerID MyPlayerID = __NetGame->rakServerInterface->GetPlayerIDFromIndex(playerId);
	in_addr in;

	memset(playerName, 0, 256);
	memset(playerSerial, 0, 256);

	bsData.Read(playerVersion);
	bsData.Read(playerMod);
	bsData.Read(playerNickLen);
	bsData.Read(playerName, playerNickLen);
	playerName[playerNickLen] = 0;
	bsData.Read(playerTicket);
	bsData.Read(playerSerialLen);
	bsData.Read(playerSerial, playerSerialLen);
	playerSerial[playerSerialLen] = 0;
	bsData.Read( openSampPlayerTicket );


	if(UNASSIGNED_PLAYER_ID == MyPlayerID || playerSerial[0] == 0) 
	{
		in.s_addr = sender.binaryAddress;
		logprintf("Invalid client connecting from %s", inet_ntoa(in));
		__NetGame->rakServerInterface->Kick(MyPlayerID);
		return;
	}

	if( !__NetGame->rakServerInterface->IsActivePlayerID(sender) || playerId > MAX_PLAYERS ) 
	{
		rejectReason = REJECT_REASON_BAD_PLAYERID;
		bsReject.Write(rejectReason);
		__NetGame->PlayerRPC(RPC_ConnectionRejected, &bsReject, playerId);
		//CNetGame__RPC_SendToPlayer((uint32_t)__NetGame, &RPC_ConnectionRejected, &bsReject, 0, 2);
		__NetGame->rakServerInterface->Kick(sender);
		return;
	}	

	if( playerVersion == NETGAME_VERSION && serverTicket == ( (openSampPlayerTicket-1) ^ NETGAME_VERSION) )
		isAnOpenSAMPClient = true;

	if( isAnOpenSAMPClient == false && __Console->GetBoolVar( "allow_samp" ) == false )
	{
		__NetGame->SendClientMessage( playerId, 0x88AA62FF, "This server doesn't allow SAMP users." );		// phrase à réécrire
		__NetGame->SendClientMessage( playerId, 0x88AA62FF, "Download Open SA-MP to play in this server." );
		logprintf( "[part] %s has left the server (Using SA-MP)", playerName );
		__NetGame->getRakInterface()->Kick( __NetGame->getRakInterface()->GetPlayerIDFromIndex( playerId ) );
		return;
	}


	if( ( playerVersion != NETGAME_VERSION || serverTicket != (playerTicket ^ NETGAME_VERSION) ) && isAnOpenSAMPClient == false)
	{
		rejectReason = REJECT_REASON_BAD_VERSION;
		bsReject.Write(rejectReason);
		__NetGame->PlayerRPC(RPC_ConnectionRejected, &bsReject, playerId);
		pRak->Kick(sender);
		return;
	}
	
	if(playerMod != __NetGame->byteMod) 
	{
		rejectReason = REJECT_REASON_BAD_MOD;
		bsReject.Write(rejectReason);
		__NetGame->PlayerRPC(RPC_ConnectionRejected, &bsReject, playerId);
		pRak->Kick(sender);
		return;
	}

	if(ContainsInvalidNickChars(playerName) || (playerNickLen < 3 || strlen(playerName) < 3) || playerNickLen > 20 || __NetGame->playerPool->isNicknameUsed(playerName)) 
	{
		rejectReason = REJECT_REASON_BAD_NICKNAME;
		bsReject.Write(rejectReason);
		__NetGame->PlayerRPC(RPC_ConnectionRejected, &bsReject, playerId);
		pRak->Kick(sender);
		return;
	}

	/** need serial processing **/
	char* strSerial = playerSerial; // no

	if(!playerPool->New(playerId, playerName, strSerial, 0, isAnOpenSAMPClient )) 
	{
		pRak->Kick(sender);
		return;
	}

	__NetGame->ProcessClientJoin(playerId);
}

// NPC Join

bool isHexCharacter( char cara )
{
	if( cara >= '0' && cara <= '9' || cara >= 'a' && cara <= 'f' || cara >= 'A' && cara <= 'F' )
		return true;

	return false;
}

void SplitColor( char* str )
{
	if( str && *str )
	{
		char* string = str;
		

		do
		{
			if( strlen( string ) >= 7 ) // First checking
			{
				if( *string == '{' && *(string + 7 ) == '}' )
				{
					bool remove = true;
					for( uint32_t i = 1; i < 7; i++ )
						if( isHexCharacter( string[ i ] ) == false ) remove = false;
					
					if( remove )
					{
						strcpy( string, (const char*)string + 8 );
					}
				}
			}

			if( *string ) // Check split glitch like "{FF0000{000000}} H4x0r !"
			{
				if( *string == '}' )
				{
					if( string - str >= 7 )
					{
						if( *( string - 7 ) == '{' )
						{
							string-=8;
						}
					}
				}
			}

			string++;
			
		} while( *string );



	}
}

void FilterText(char* str)
{
	SplitColor( str );

	while(*str) 
	{
		if(*str == '%') 
		{
			*str = '#';
		}
		str++;
	}
}

void Chat(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	uint8_t chatText[256];
	memset(chatText, 0, 256);

	uint8_t chatTextLen;

	CPlayerPool* playerPool = __NetGame->playerPool;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);
	bsData.Read(chatTextLen);

	if(chatTextLen > 128) return;

	bsData.Read((char*)chatText, chatTextLen);
	chatText[chatTextLen] = 0;

	if(!playerPool->GetSlotState(__NetGame->rakServerInterface->GetIndexFromPlayerID(sender))) return;	

	FilterText((char *)chatText);

	logprintf("[chat] [%s]: %s", playerPool->getPlayerNick(pRak->GetIndexFromPlayerID(sender)), chatText);

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);

	CPlayer* player = playerPool->GetPlayer(playerId);

	if (player)
	{	
		if (__NetGame->filterscriptsManager->OnPlayerText((cell)playerId, chatText))
		{
			if (__NetGame->gamemodeManager)
				__NetGame->gamemodeManager->OnPlayerText((cell)playerId, chatText);
			else
				player->Say((char*)chatText, chatTextLen);
		}
	}
}

void RequestClass(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	if(__NetGame->gameState != GAMESTATE_RUNNING) return;
	if(!__NetGame->playerPool->GetSlotState(pRak->GetIndexFromPlayerID(sender))) return;
	
	uint32_t requestedClass = 1;
	uint8_t requestResult = 0;
	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);

	if(playerId >= MAX_PLAYERS) return;

	bsData.Read(requestedClass);

	if(requestedClass >= MAX_SPAWNS) return;

	CPlayer* pPlayer = __NetGame->playerPool->GetPlayer(playerId);
	if (pPlayer && (requestedClass <= (__NetGame->spawnsNumber - 1)))
	{
		pPlayer->setCustomSpawn(&__NetGame->spawns[requestedClass]);
	}

	__NetGame->filterscriptsManager->OnPlayerRequestClass((cell)playerId, (cell)requestedClass);
	requestResult = 1;

	if (__NetGame->gamemodeManager)
		requestResult = (uint8_t)__NetGame->gamemodeManager->OnPlayerRequestClass((cell)playerId, (cell)requestedClass);
	
	RakNet::BitStream bsReply;
	tSPAWNS* spawnInfo = pPlayer->getCustomSpawn();

	bsReply.Write(requestResult);
#ifdef _BIG_ENDIAN_SYSTEM
	bsReply.Write(spawnInfo->Team);
	bsReply.Write(spawnInfo->Skin);
	bsReply.Write(spawnInfo->unk);
	bsReply.Write(spawnInfo->posX), bsReply.Write(spawnInfo->posY), bsReply.Write(spawnInfo->posZ);
	bsReply.Write(spawnInfo->zAngle);
	bsReply.Write(spawnInfo->weapons[0]), bsReply.Write(spawnInfo->weapons[1]), bsReply.Write(spawnInfo->weapons[2]);
	bsReply.Write(spawnInfo->ammo[0]), bsReply.Write(spawnInfo->ammo[1]), bsReply.Write(spawnInfo->ammo[2]);
#else
	bsReply.Write((char*)spawnInfo, sizeof(tSPAWNS));
#endif
	
	__NetGame->PlayerRPC( RPC_RequestClass, &bsReply, playerId );

	//CNetGame__RPC_SendToPlayer((uint32_t)__NetGame, &RPC_RequestClass, &bsReply, 0, 2); // XD je me demandais aussi mon bot choisissais une class
	// et ça la foutais à moi qui avais l'id 0 :p
}

void RequestSpawn(RPCParameters* params)
{
	PlayerID sender = params->sender;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);

	if(playerId >= MAX_PLAYERS) return;

	uint8_t requestResult = 1;

	if(__NetGame->gameState != GAMESTATE_RUNNING) return;
	if(!__NetGame->playerPool->GetSlotState(pRak->GetIndexFromPlayerID(sender))) return;

	if (!__NetGame->filterscriptsManager->OnPlayerRequestSpawn((cell)playerId)) 
		requestResult = 0;
	if (__NetGame->gamemodeManager && requestResult)
		if (!__NetGame->gamemodeManager->OnPlayerRequestSpawn((cell)playerId)) requestResult = 0;
	
	RakNet::BitStream bsReply;
	bsReply.Write(requestResult);

	__NetGame->PlayerRPC( RPC_RequestSpawn, &bsReply, playerId );
	//CNetGame__RPC_SendToPlayer((uint32_t)__NetGame, &RPC_RequestSpawn, &bsReply, 0, 2);
}

void Spawn(RPCParameters* params)
{
	PlayerID sender = params->sender;

	if(__NetGame->gameState != GAMESTATE_RUNNING) return;
	
	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);

	if(playerId >= MAX_PLAYERS) return;

	if(!__NetGame->playerPool->GetSlotState(playerId)) return;
	CPlayer* player = __NetGame->playerPool->GetPlayer(playerId);

	if(!player || !player->HasCustomSpawn()) return;
	int spawnSkin = player->getCustomSpawn()->Skin;
	if(spawnSkin < 0 || spawnSkin > 300) return;

	player->Spawn();
		
	__NetGame->filterscriptsManager->OnPlayerSpawn((cell)playerId);
	if(__NetGame->gamemodeManager) __NetGame->gamemodeManager->OnPlayerSpawn((cell)playerId);
}

void Death(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	if(__NetGame->gameState != GAMESTATE_RUNNING) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);
	if(playerId >= MAX_PLAYERS) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;

	CPlayer* player = __NetGame->playerPool->GetPlayer(playerId);

	uint8_t deathReason;
	_PlayerID deathKiller;

	bsData.Read(deathReason);
	bsData.Read(deathKiller);

	/* Open SAMP checking to prevent fake kill ;) */

	if( deathKiller != INVALID_PLAYER_ID  ) 
	{
		CPlayer* attacker = __NetGame->playerPool->GetPlayer( deathKiller );
		if( attacker == 0 ) return;
		
		if( attacker->isPlayerStreamedIn( playerId ) == false ) return;
		
		if( attacker->GetCurrentWeapon( ) != deathReason && deathReason <= 46 )// 46 = parachute
			return;
		else if( ( deathReason == 49 || deathReason == 49 ) && attacker->getState() != PLAYER_STATE_DRIVER ) // 48 - carkill // 49 - helikill
			return;
	}

	if(player)
		player->HandleDeath(deathReason, deathKiller);
}

void DamageVehicle(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);
	if(__NetGame->gameState != GAMESTATE_RUNNING) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);
	if(playerId >= MAX_PLAYERS) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;
	
	_VehicleID	vehID;
	uint32_t	vehPanels;
	uint32_t	vehDoors;
	uint8_t		vehLights;
	uint8_t		vehTires;

	bsData.Read(vehID);
	bsData.Read(vehPanels);
	bsData.Read(vehDoors);
	bsData.Read(vehLights);
	bsData.Read(vehTires);

	CVehicle* vehicle = __NetGame->vehiclePool->GetVehicle(vehID);
	if(vehicle && vehicle->vehDriverID == playerId)
		vehicle->UpdateDamage(playerId, vehPanels, vehDoors, vehLights, vehTires);
}

void EnterVehicle(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	if(__NetGame->gameState != GAMESTATE_RUNNING)
		return;
	if(!__NetGame->playerPool->GetSlotState(pRak->GetIndexFromPlayerID(sender)))
		return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);
	if(playerId >= MAX_PLAYERS)
		return;
	CPlayer* player = __NetGame->playerPool->GetPlayer(playerId);
	
	_VehicleID vehID = 0;
	uint8_t isPassenger = 0;

	bsData.Read(vehID);
	bsData.Read(isPassenger);
	
	if(player) 
	{
		if(vehID == INVALID_VEHICLE_ID) 
		{
			__NetGame->KickPlayer(playerId);
			return;
		}
		player->EnterVehicle(vehID, isPassenger);
	}
}

void ExitVehicle(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	if(__NetGame->gameState != GAMESTATE_RUNNING) return;
	if(!__NetGame->playerPool->GetSlotState(pRak->GetIndexFromPlayerID(sender))) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);
	if(playerId >= MAX_PLAYERS) return;
	CPlayer* player = __NetGame->playerPool->GetPlayer(playerId);

	_VehicleID vehID;
	bsData.Read(vehID);
	

	if(player) 
	{
		if(vehID == INVALID_VEHICLE_ID) 
		{
			__NetGame->KickPlayer(playerId);
			return;
		}
		player->ExitVehicle(vehID);
	}
}

void ServerCommand(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	uint32_t commandLen = 0;
	uint8_t* commandStr = NULL;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	if(__NetGame->gameState != GAMESTATE_RUNNING) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);
	if(playerId >= MAX_PLAYERS) return;

	// Open SA:MP
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;
	//

	bsData.Read(commandLen);

	if(commandLen < 1 || commandLen > 255) return;

	commandStr = new uint8_t[commandLen + 1];
	bsData.Read((char*)commandStr, commandLen);
	commandStr[commandLen] = 0;

	FilterText((char*)commandStr);

	if(!__NetGame->filterscriptsManager->OnPlayerCommandText(playerId, commandStr)) {
		if(__NetGame->gamemodeManager) {
			if(!__NetGame->gamemodeManager->OnPlayerCommandText(playerId, commandStr)) {
				__NetGame->SendClientMessage(playerId, 0xFFFFFFFF, "SERVER: Unknown command.");
			}
		}
	}

	delete [] commandStr;
}

void UpdateScoreboard(RPCParameters* params)
{
	PlayerID sender = params->sender;

	RakNet::BitStream bsParams;
	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);

	if(playerId >= MAX_PLAYERS) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;

	for (_PlayerID i=0; i < MAX_PLAYERS; i++)
	{
		if (__NetGame->playerPool->GetSlotState(i))
		{
			bsParams.Write(i);
			bsParams.Write((uint32_t)__NetGame->playerPool->getScore(i));
			bsParams.Write((uint32_t)pRak->GetLastPing(pRak->GetPlayerIDFromIndex(i)));
		}
	}
	__NetGame->PlayerRPC( RPC_UpdateScoreboard, &bsParams, playerId );
	//CNetGame__RPC_SendToPlayer((uint32_t)__NetGame, &RPC_UpdateScoreboard, &bsParams, false, 2);
}

void ServerStats(RPCParameters* params)
{
	PlayerID sender = params->sender;

	RakNet::BitStream bsParams;
	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);

	if(!__NetGame->playerPool->GetSlotState(playerId)) return;
	if(!__NetGame->playerPool->isPlayerAdmin[playerId]) return;
	if(playerId >= MAX_PLAYERS) return;

	bsParams.Write((const char *)pRak->GetStatistics(UNASSIGNED_PLAYER_ID),sizeof(RakNetStatisticsStruct));
	__NetGame->PlayerRPC( RPC_ServerStats, &bsParams, playerId );
	//CNetGame__RPC_SendToPlayer((uint32_t)__NetGame, &RPC_ServerStats, &bsParams, false, 2);
}


void SetInteriorID(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	uint8_t interiorID;
	bsData.Read(interiorID);

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);

	if(playerId >= MAX_PLAYERS) return;

	if (__NetGame->playerPool->GetSlotState(playerId))
	{
		CPlayer* player = __NetGame->playerPool->GetPlayer(playerId);
		uint32_t oldInteriorID = player->getInterior();
		player->setInterior(interiorID);

		if(__NetGame->gamemodeManager) 
			__NetGame->gamemodeManager->OnPlayerInteriorChange(playerId, interiorID, oldInteriorID);

		if(__NetGame->filterscriptsManager)
			__NetGame->filterscriptsManager->OnPlayerInteriorChange(playerId, interiorID, oldInteriorID);
	}
}

/*
void ScriptCash(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);
	RakNet::BitStream bsSend;

	_PlayerID	playerId = pNetGame->GetRakNet()->GetIndexFromPlayerID(sender);

	if(playerId >= MAX_PLAYERS) return;

	uint32_t	money;
	uint32_t	moneyType;

	bsData.Read(money);
	bsData.Read(moneyType);
	
	CPlayerPool* pPlayerPool = pNetGame->GetPlayerPool();
	if (pPlayerPool->GetSlotState(playerId))
	{
		if (__NetGame->gamemodeManager) __NetGame->gamemodeManager->OnScriptCash( playerId, (int)money, (int)moneyType );
		if (__NetGame->filterscriptsManager)  __NetGame->filterscriptsManager->OnScriptCash( playerId, (int)money, (int)moneyType );
	}
}
*/

void ScmEvent(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	RakNet::BitStream bsSend;
	_PlayerID playerId = __NetGame->rakServerInterface->GetIndexFromPlayerID(sender);

	if(playerId >= MAX_PLAYERS) return;

	int			eventID;
	uint32_t	eventParams[3];

	bsData.Read(eventID);
	bsData.Read(eventParams[0]);
	bsData.Read(eventParams[1]);
	bsData.Read(eventParams[2]);

	if(__NetGame->gameState != GAMESTATE_RUNNING || !__NetGame->vehiclePool || !__NetGame->playerPool) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;
	CPlayer* player = __NetGame->playerPool->GetPlayer(playerId);
	if(!player) return;

	CVehicle* vehicle = __NetGame->vehiclePool->GetVehicle((_VehicleID)eventParams[0]);
    if(!vehicle) return;

	if(!player->isVehicleStreamedIn((_VehicleID)eventParams[0])) return;
	if(player->getCurrentVehicleID() != (_VehicleID)eventParams[0]) return;

	
	if(eventID == EVENT_TYPE_CARCOMPONENT)
		vehicle->AddVehicleComponent(playerId, (unsigned short)eventParams[1]);
	else if(eventID == EVENT_TYPE_PAINTJOB)
		vehicle->SetPaintjob(playerId, (unsigned char)eventParams[1]);
	else if(eventID == EVENT_TYPE_CARCOLOR)
		vehicle->ChangeColor(playerId, (int)eventParams[1], (int)eventParams[2]);
	else if(eventID == EVENT_ENTEREXIT_MODSHOP)
		player->EnterExitModShop((_VehicleID)eventParams[0], (int)eventParams[1], (int)eventParams[2]);	
	
}

void OnPlayerClickMap(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	_PlayerID playerId = __NetGame->rakServerInterface->GetIndexFromPlayerID(sender);

	if(!__NetGame->playerPool) return;

	if(playerId >= MAX_PLAYERS) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;

	CPlayer* player = __NetGame->playerPool->GetPlayer(playerId);

	if(!player) return;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	tVector position;
	bsData.Read(position.X);
	bsData.Read(position.Y);
	bsData.Read(position.Z);

	if( __NetGame->filterscriptsManager )
		__NetGame->filterscriptsManager->OnPlayerClickMap( playerId, position.X, position.Y, position.Z );
	if( __NetGame->gamemodeManager )
		__NetGame->gamemodeManager->OnPlayerClickMap( playerId, position.X, position.Y, position.Z );


	//if(!__NetGame->allowAdminTeleport) return;

 //   if(player->isAllowedToTeleport() || __NetGame->playerPool->isPlayerAdmin[playerId])
	//{	
	//	RakNet::BitStream bsParams;
	//	bsParams.Write(position.X);
	//	bsParams.Write(position.Y);
	//	bsParams.Write(position.Z);

	//	__NetGame->PlayerRPC(RPC_SetPlayerPosition, &bsParams, playerId);
	//	//CNetGame__RPC_SendToPlayer((uint32_t)__NetGame, &RPC_SetPlayerPosition, &bsParams, false, 2);
	//}
}


bool IsPlayerLinkedToVehicle(_PlayerID playerId, CVehicle* vehicle)
{
	if(vehicle->vehLastDriverID == playerId) return true;
	if(vehicle->vehDriverID == playerId) return true;
	for(uint8_t i=0; i < 7; i++)
	{
		if(vehicle->vehPassengers[i] == playerId) return true;
	}
	return false;
}


void VehicleDestroyed(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	_VehicleID vehID;
	bsData.Read(vehID);

	if(!__NetGame) return;
	if(__NetGame->gameState != GAMESTATE_RUNNING) return;

	if(!__NetGame->playerPool || !__NetGame->vehiclePool) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(sender);
	
	if(playerId >= MAX_PLAYERS) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;

	if(__NetGame->vehiclePool->GetSlotState(vehID))
	{
		CVehicle* vehicle = __NetGame->vehiclePool->GetVehicle(vehID);
		if(vehicle) 
		{
			// Open SA:MP
			if(!IsPlayerLinkedToVehicle(playerId, vehicle)) return;
			//

			vehicle->SetDead();
		}
	}
}

void WeaponPickup(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	PlayerID sender = params->sender;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	_PlayerID playerId;
	bsData.Read(playerId);

	RakNet::BitStream bsSend;
	bsSend.Write(playerId);
	
	// RPC du mal, ne pas uncomment xd
	// pRak->RPC(RPC_DestroyWeaponPickup, &bsSend, HIGH_PRIORITY, RELIABLE, 0, UNASSIGNED_PLAYER_ID, true, false);
}

void PickUpPickup(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(params->sender);

	if(playerId >= MAX_PLAYERS) return;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	int pickupId;
	bsData.Read(pickupId);
	
	// Open SA:MP
	if(pickupId >= LIMIT_MAX_PICKUPS) return;
	//
	
	if(__NetGame->gamemodeManager) __NetGame->gamemodeManager->OnPlayerPickedUpPickup(playerId, pickupId);
	if(__NetGame->filterscriptsManager) __NetGame->filterscriptsManager->OnPlayerPickedUpPickup(playerId, pickupId);
}

void MenuSelect(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(params->sender);

	if(playerId >= MAX_PLAYERS) return;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	uint8_t		menuRow;
	bsData.Read(menuRow);

	if(__NetGame->gamemodeManager) __NetGame->gamemodeManager->OnPlayerSelectedMenuRow(playerId, menuRow);
	if(__NetGame->filterscriptsManager) __NetGame->filterscriptsManager->OnPlayerSelectedMenuRow(playerId, menuRow);
}

void MenuQuit(RPCParameters* params)
{
	_PlayerID playerId = pRak->GetIndexFromPlayerID(params->sender);

	if(playerId >= MAX_PLAYERS) return;

	if(__NetGame->gamemodeManager) __NetGame->gamemodeManager->OnPlayerExitedMenu(playerId);
	if(__NetGame->filterscriptsManager) __NetGame->filterscriptsManager->OnPlayerExitedMenu(playerId);
}

void PlayerDialogResponse(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(params->sender);

	if(playerId >= MAX_PLAYERS) return;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	if(!__NetGame->playerPool) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;

   	uint16_t	dialogId;
    uint8_t		dialogResponse;
	short		dialogListItem;
	uint8_t		dialogText[257];
	uint8_t		dialogTextLen = 0;

	memset(dialogText, 0, 257);

    bsData.Read(dialogId);
	bsData.Read(dialogResponse);
	bsData.Read(dialogListItem);
	bsData.Read(dialogTextLen);
	if(dialogTextLen && dialogTextLen <= 128)
		bsData.Read((char *)dialogText, dialogTextLen);

	if(__NetGame->filterscriptsManager) __NetGame->filterscriptsManager->OnDialogResponse(playerId, dialogId, dialogResponse, dialogListItem, dialogText);
	if(__NetGame->gamemodeManager) __NetGame->gamemodeManager->OnDialogResponse(playerId, dialogId, dialogResponse, dialogListItem, dialogText);	
}

void PlayerClickPlayer(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	_PlayerID playerId = pRak->GetIndexFromPlayerID(params->sender);

	if(playerId >= MAX_PLAYERS) return;

	RakNet::BitStream bsData(data, (bitLen/8) + 1, false);

	if(!__NetGame->playerPool) return;
	if(!__NetGame->playerPool->GetSlotState(playerId)) return;

	_PlayerID clickedPlayerId;
	bsData.Read(clickedPlayerId);

	// Open SA:MP
	if(clickedPlayerId >= MAX_PLAYERS) return;
	//

	if(!__NetGame->playerPool->GetSlotState(clickedPlayerId)) return;  

	uint8_t		readSource;
	bsData.Read(readSource);

	if(__NetGame->filterscriptsManager) __NetGame->filterscriptsManager->OnPlayerClickPlayer(playerId, clickedPlayerId, readSource);
	if(__NetGame->gamemodeManager) __NetGame->gamemodeManager->OnPlayerClickPlayer(playerId, clickedPlayerId, readSource);	
}

void OnPlayerTakeDamage(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen)
		return;

	_PlayerID playerID = pRak->GetIndexFromPlayerID(params->sender);

	if( !__NetGame->playerPool && !__NetGame->playerPool->GetSlotState( playerID ) && playerID >= MAX_PLAYERS) return;

	RakNet::BitStream bStream(data, (bitLen/8) + 1, false);

	_PlayerID attackerID = 0;
	float damageAmount = 0.0f;
	uint32_t weaponid = 0, bodypart = 0;

	bStream.Read( attackerID );
	bStream.Read( damageAmount );
	bStream.Read( weaponid );
	bStream.Read( bodypart ); // lol it was hidden in samp 0.3d RC2

	if( attackerID == INVALID_PLAYER_ID )
	{
		if(__NetGame->filterscriptsManager)
			__NetGame->filterscriptsManager->OnPlayerTakeDamage( playerID, attackerID, damageAmount, weaponid, bodypart );
		if(__NetGame->gamemodeManager)
			__NetGame->gamemodeManager->OnPlayerTakeDamage( playerID, attackerID, damageAmount, weaponid, bodypart );	
	}
	// Somes check ;)
	// Yeah kye you should take example ^^
	else if( __NetGame->playerPool->GetSlotState( attackerID ) )
	{
	
		CPlayer* attacker = __NetGame->playerPool->GetPlayer( attackerID );
		if( attacker == 0 ) return;

		if( attacker->GetCurrentWeapon( ) == weaponid && attacker->isPlayerStreamedIn( playerID ) && weaponid <= 46 )
		{
			if(__NetGame->filterscriptsManager)
				__NetGame->filterscriptsManager->OnPlayerTakeDamage( playerID, attackerID, damageAmount, weaponid, bodypart );
			if(__NetGame->gamemodeManager) 
				__NetGame->gamemodeManager->OnPlayerTakeDamage( playerID, attackerID, damageAmount, weaponid, bodypart );	
		}
		else if( attacker->isPlayerStreamedIn( playerID ) && ( weaponid == 49 || weaponid == 50 ) && attacker->getState() == PLAYER_STATE_DRIVER )
		{
			if(__NetGame->filterscriptsManager)
				__NetGame->filterscriptsManager->OnPlayerTakeDamage( playerID, attackerID, damageAmount, weaponid, bodypart );
			if(__NetGame->gamemodeManager)
				__NetGame->gamemodeManager->OnPlayerTakeDamage( playerID, attackerID, damageAmount, weaponid, bodypart );	
		}
		else
		{
			logprintf( "blablablah this player is a hacker ! bouh" );
		}

	}

}

void PlayerPressKeyBinded( RPCParameters* params )
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if(!data || !bitLen) return;

	_PlayerID playerID = pRak->GetIndexFromPlayerID(params->sender);

	if( !__NetGame->playerPool && !__NetGame->playerPool->GetSlotState( playerID ) && playerID >= MAX_PLAYERS) return;

	RakNet::BitStream bStream(data, (bitLen/8) + 1, false);

	uint32_t keyIndex = 0;

	bStream.Read( keyIndex );

	CPlayer* player = __NetGame->playerPool->GetPlayer( playerID );

	if( player )
	{
		CKeyBinder* keybind = player->GetKeyBinder( );
		if( keybind )
		{
			if( keybind->IsSlotUsed( keyIndex ) )
			{
				keybind->KeyPressed( keyIndex );
			}
		}
	}
}


void ClickTextDraw(RPCParameters* params)
{
	char* data = reinterpret_cast<char*>(params->input);
	int bitLen = params->numberOfBitsOfData;
	if (!data || !bitLen) return;

	_PlayerID playerID = pRak->GetIndexFromPlayerID(params->sender);

	if (playerID >= MAX_PLAYERS) return;

	RakNet::BitStream bsData(data, (bitLen / 8) + 1, false);

	uint16_t	textDrawID = 65535;
	bsData.Read(textDrawID);

	if (textDrawID >= MAX_TEXTDRAW && textDrawID < MAX_TEXTDRAW + MAX_PLAYER_TEXTDRAW)
	{
		if (__NetGame->filterscriptsManager)
			__NetGame->filterscriptsManager->OnPlayerClickPlayerTextDraw(playerID, textDrawID - MAX_TEXTDRAW);
		if (__NetGame->gamemodeManager)
			__NetGame->gamemodeManager->OnPlayerClickPlayerTextDraw(playerID, textDrawID - MAX_TEXTDRAW);
	}
	else
	{
		if (__NetGame->filterscriptsManager)
			__NetGame->filterscriptsManager->OnPlayerClickTextDraw(playerID, textDrawID);
		if (__NetGame->gamemodeManager)
			__NetGame->gamemodeManager->OnPlayerClickTextDraw(playerID, textDrawID);
	}
}

//

void RegisterRPCs(RakServerInterface* pRakServer)
{
	pRak = pRakServer;

	REGISTER_STATIC_RPC(pRakServer, PlayerPressKeyBinded );

	REGISTER_STATIC_RPC(pRakServer, OnPlayerTakeDamage );
	REGISTER_STATIC_RPC(pRakServer, ClientJoin);
	//REGISTER_STATIC_RPC(pRakServer, NPCJoin);
	REGISTER_STATIC_RPC(pRakServer, Chat);
	REGISTER_STATIC_RPC(pRakServer, RequestClass);
	REGISTER_STATIC_RPC(pRakServer, RequestSpawn);
	REGISTER_STATIC_RPC(pRakServer, Spawn);
	REGISTER_STATIC_RPC(pRakServer, Death);
	REGISTER_STATIC_RPC(pRakServer, DamageVehicle);
	REGISTER_STATIC_RPC(pRakServer, EnterVehicle);
	REGISTER_STATIC_RPC(pRakServer, ExitVehicle);
	REGISTER_STATIC_RPC(pRakServer, ServerCommand);
	REGISTER_STATIC_RPC(pRakServer, UpdateScoreboard);
	REGISTER_STATIC_RPC(pRakServer, ServerStats);
	REGISTER_STATIC_RPC(pRakServer, SetInteriorID);
	REGISTER_STATIC_RPC(pRakServer, ScmEvent);
	//REGISTER_STATIC_RPC(pRakServer, ScriptCash);
	REGISTER_STATIC_RPC(pRakServer, OnPlayerClickMap);
	REGISTER_STATIC_RPC(pRakServer, VehicleDestroyed);
	REGISTER_STATIC_RPC(pRakServer, WeaponPickup);
	REGISTER_STATIC_RPC(pRakServer, PickUpPickup);
	REGISTER_STATIC_RPC(pRakServer, MenuSelect);
	REGISTER_STATIC_RPC(pRakServer, MenuQuit);
	REGISTER_STATIC_RPC(pRakServer, PlayerDialogResponse);
	REGISTER_STATIC_RPC(pRakServer, PlayerClickPlayer);
	REGISTER_STATIC_RPC(pRakServer, ClickTextDraw);
}

void UnRegisterRPCs(RakServerInterface* pRakServer)
{
	pRak = 0;

	UNREGISTER_STATIC_RPC(pRakServer, PlayerPressKeyBinded );
	UNREGISTER_STATIC_RPC(pRakServer, OnPlayerTakeDamage );
	UNREGISTER_STATIC_RPC(pRakServer, ClientJoin);
	//UNREGISTER_STATIC_RPC(pRakServer, NPCJoin);
	UNREGISTER_STATIC_RPC(pRakServer, Chat);
	UNREGISTER_STATIC_RPC(pRakServer, RequestClass);
	UNREGISTER_STATIC_RPC(pRakServer, RequestSpawn);
	UNREGISTER_STATIC_RPC(pRakServer, Spawn);
	UNREGISTER_STATIC_RPC(pRakServer, Death);
	UNREGISTER_STATIC_RPC(pRakServer, DamageVehicle);
	UNREGISTER_STATIC_RPC(pRakServer, EnterVehicle);
	UNREGISTER_STATIC_RPC(pRakServer, ExitVehicle);
	UNREGISTER_STATIC_RPC(pRakServer, ServerCommand);
	UNREGISTER_STATIC_RPC(pRakServer, UpdateScoreboard);
	UNREGISTER_STATIC_RPC(pRakServer, ServerStats);
	UNREGISTER_STATIC_RPC(pRakServer, SetInteriorID);
	UNREGISTER_STATIC_RPC(pRakServer, ScmEvent);
	//UNREGISTER_STATIC_RPC(pRakServer, ScriptCash);
	UNREGISTER_STATIC_RPC(pRakServer, OnPlayerClickMap);
	UNREGISTER_STATIC_RPC(pRakServer, VehicleDestroyed);
	UNREGISTER_STATIC_RPC(pRakServer, WeaponPickup);
	UNREGISTER_STATIC_RPC(pRakServer, PickUpPickup);
	UNREGISTER_STATIC_RPC(pRakServer, MenuSelect);
	UNREGISTER_STATIC_RPC(pRakServer, MenuQuit);
	UNREGISTER_STATIC_RPC(pRakServer, PlayerDialogResponse);
	UNREGISTER_STATIC_RPC(pRakServer, PlayerClickPlayer);
	UNREGISTER_STATIC_RPC(pRakServer, ClickTextDraw);
}
