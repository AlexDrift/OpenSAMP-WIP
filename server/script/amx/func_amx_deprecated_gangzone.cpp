#include "../../main.h"

#include "../func_amx.h"
#include "func_amx_deprecated_gangzone.h"

cell AMX_NATIVE_CALL funcGangZoneCreate ( AMX* a_AmxInterface, cell* a_Params )
{
	if ( bScriptDebug ) logprintf ( "[Call]-> funcGangZoneCreate()" );

	CHECK_PARAMS ( 4 );

	
	if ( !__NetGame->gangZonePool )
		return -1;

	uint16_t l_Return = __NetGame->gangZonePool->New ( amx_ctof ( a_Params[ 1 ] ), amx_ctof ( a_Params[ 2 ] ), amx_ctof ( a_Params[ 3 ] ), amx_ctof ( a_Params[ 4 ] ) );
	if ( l_Return == 0xFFFF )
		return -1;
	return l_Return;
}

cell AMX_NATIVE_CALL funcGangZoneDestroy ( AMX* a_AmxInterface, cell* a_Params )
{
	if ( bScriptDebug ) logprintf ( "[Call]-> funcGangZoneDestroy()" );

	CHECK_PARAMS ( 1 );

	
	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 1 ] ) )
		return -1;

	__NetGame->gangZonePool->Delete ( (uint16_t)a_Params[ 1 ] );

	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneShowForPlayer ( AMX* a_AmxInterface, cell* a_Params )
{
	if ( bScriptDebug ) logprintf ( "[Call]-> funcGangZoneShowForPlayer()" );

	CHECK_PARAMS ( 3 );

	if ( !( a_Params[ 1 ] < 500 ) && !( __NetGame->playerPool->isCreated[ a_Params[ 1 ] ]  ) )
		return -1;


	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 2 ] ) )
		return -1;

	__NetGame->gangZonePool->ShowForPlayer ( (_PlayerID)a_Params[ 1 ], (uint16_t)a_Params[ 2 ], a_Params[ 3 ] );

	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneShowForAll ( AMX* a_AmxInterface, cell* a_Params )
{
	if(bScriptDebug) logprintf ( "[Call]-> funcGangZoneShowForAll()" );

	CHECK_PARAMS ( 2 );
		
	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 1 ] ) )
		return -1;

	__NetGame->gangZonePool->ShowForAll ( (uint16_t)a_Params[ 1 ], a_Params[ 2 ] );

	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneHideForPlayer ( AMX* a_AmxInterface, cell* a_Params )
{
	if(bScriptDebug) logprintf ( "[Call]-> funcGangZoneHideForPlayer()" );

	CHECK_PARAMS ( 2 );
	
	if ( !( a_Params[ 1 ] < 500 ) && !( __NetGame->playerPool->isCreated[ a_Params[ 1 ] ] ) )
		return -1;

	//if ( __PlayerPool->GetSlotState ( a_Params[ 1 ] ) )
	//	return -1;

	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 2 ] ) )
		return -1;

	__NetGame->gangZonePool->HideForPlayer ( (_PlayerID)a_Params[ 1 ], (uint16_t)a_Params[ 2 ] );
	
	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneHideForAll ( AMX* a_AmxInterface, cell* a_Params )
{
	if(bScriptDebug) logprintf ( "[Call]-> funcGangZoneHideForAll()" );

	CHECK_PARAMS ( 1 );

	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 1 ] ) )
		return -1;

	__NetGame->gangZonePool->HideForAll ((uint16_t) a_Params[ 1 ] );

	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneFlashForPlayer ( AMX* a_AmxInterface, cell* a_Params )
{
	if(bScriptDebug) logprintf ( "[Call]-> funcGangZoneFlashForPlayer()" );

	CHECK_PARAMS ( 3 );



	if ( !( a_Params[ 1 ] < 500 ) && !( __NetGame->playerPool->isCreated[ a_Params[ 1 ] ] ) )
		return -1;

	//if ( __PlayerPool->GetSlotState ( a_Params[ 1 ] ) )
	//	return -1;

	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 2 ] ) )
		return -1;

	__NetGame->gangZonePool->FlashForPlayer ((_PlayerID) a_Params[ 1 ], (uint16_t) a_Params[ 2 ], a_Params[ 3 ] );
	
	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneFlashForAll ( AMX* a_AmxInterface, cell* a_Params )
{
	if(bScriptDebug) logprintf ( "[Call]-> funcGangZoneFlashForAll()" );

	CHECK_PARAMS ( 2 );

	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 1 ] ) )
		return -1;

	__NetGame->gangZonePool->FlashForAll ((uint16_t) a_Params[ 1 ], a_Params[ 2 ] );
	
	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneStopFlashForPlayer ( AMX* a_AmxInterface, cell* a_Params )
{
	if(bScriptDebug) logprintf ( "[Call]-> funcGangZoneStopFlashForPlayer()" );

	CHECK_PARAMS ( 2 );



	if ( !( a_Params[ 1 ] < 500 ) && !( __NetGame->playerPool->isCreated[ a_Params[ 1 ] ] ) )
		return -1;

	//if ( __PlayerPool->GetSlotState ( a_Params[ 1 ] ) )
	//	return -1;

	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 2 ] ) )
		return -1;

	__NetGame->gangZonePool->StopFlashForPlayer ( (_PlayerID)a_Params[ 1 ], (uint16_t)a_Params[ 2 ] );
	
	return 1;
}

cell AMX_NATIVE_CALL funcGangZoneStopFlashForAll ( AMX* a_AmxInterface, cell* a_Params )
{
	if(bScriptDebug) logprintf ( "[Call]-> funcGangZoneStopFlashForAll()" );

	CHECK_PARAMS ( 1 );

	if ( !__NetGame->gangZonePool || !__NetGame->gangZonePool->GetSlotState ( (uint16_t)a_Params[ 1 ] ) )
		return -1;

	__NetGame->gangZonePool->StopFlashForAll ( (uint16_t)a_Params[ 1 ] );
	
	return 1;
}