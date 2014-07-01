/// \file
/// \brief All the packet identifiers used by RakNet.  Packet identifiers comprise the first byte of any message.
///
/// This file is part of RakNet Copyright 2003 Kevin Jenkins.
///
/// Usage of RakNet is subject to the appropriate license agreement.
/// Creative Commons Licensees are subject to the
/// license found at
/// http://creativecommons.org/licenses/by-nc/2.5/
/// Single application licensees are subject to the license found at
/// http://www.rakkarsoft.com/SingleApplicationLicense.html
/// Custom license users are subject to the terms therein.
/// GPL license users are subject to the GNU General Public
/// License as published by the Free
/// Software Foundation; either version 2 of the License, or (at your
/// option) any later version.

#ifndef __PACKET_ENUMERATIONS_H
#define __PACKET_ENUMERATIONS_H 

/// You should not edit the file PacketEnumerations.h as it is a part of RakNet static library
/// To define your own message id, define an enum following the code example that follows. 
///
/// \code
/// enum {
///   ID_MYPROJECT_MSG_1 = ID_USER_PACKET_ENUM
///   ID_MYPROJECT_MSG_2, 
///    ... 
/// };
/// \endcode 
///
/// \note All these enumerations should be casted to (unsigned char) before writing them to RakNet::BitStream
enum
{
	ID_INTERNAL_PING = 7,
	ID_PING = 8, //100%
	ID_PING_OPEN_CONNECTIONS = 9, //100%
	ID_CONNECTED_PONG,
	ID_REQUEST_STATIC_DATA,
	ID_CONNECTION_REQUEST,
	ID_AUTH_KEY,

	ID_BROADCAST_PINGS = 16,
	ID_SECURED_CONNECTION_RESPONSE,
	ID_SECURED_CONNECTION_CONFIRMATION,
	ID_RPC_MAPPING,

	ID_SET_RANDOM_NUMBER_SEED = 21,
	ID_RPC = 22,
	ID_RPC_REPLY,
	ID_DETECT_LOST_CONNECTIONS,
	ID_OPEN_CONNECTION_REQUEST = 25, // 100%
	ID_OPEN_CONNECTION_REPLY = 26, //100%

	ID_RSA_PUBLIC_KEY_MISMATCH = 29,
	ID_CONNECTION_ATTEMPT_FAILED = 30, //100%
	ID_NEW_INCOMING_CONNECTION,
	ID_NO_FREE_INCOMING_CONNECTIONS = 32, //100%

	ID_DISCONNECTION_NOTIFICATION,
	ID_CONNECTION_LOST,
	ID_CONNECTION_REQUEST_ACCEPTED, 

	ID_CONNECTION_BANNED = 37, //100%

	ID_INVALID_PASSWORD,
	ID_MODIFIED_PACKET = 39, //100%
	ID_PONG = 40, //100%
	ID_TIMESTAMP,
	ID_RECEIVED_STATIC_DATA,
	ID_REMOTE_DISCONNECTION_NOTIFICATION,
	ID_REMOTE_CONNECTION_LOST,
	ID_REMOTE_NEW_INCOMING_CONNECTION,
	ID_REMOTE_EXISTING_CONNECTION,
	ID_REMOTE_STATIC_DATA,

	ID_ADVERTISE_SYSTEM = 56, //100%

	//TODO
	ID_TRANSPORT_STRING,
	ID_REPLICA_MANAGER_CONSTRUCTION,
	ID_REPLICA_MANAGER_DESTRUCTION,
	ID_REPLICA_MANAGER_SCOPE_CHANGE,
	ID_REPLICA_MANAGER_SERIALIZE,
	ID_REPLICA_MANAGER_DOWNLOAD_COMPLETE,
	ID_CONNECTION_GRAPH_REQUEST,
	ID_CONNECTION_GRAPH_REPLY,
	ID_CONNECTION_GRAPH_UPDATE,
	ID_CONNECTION_GRAPH_NEW_CONNECTION,
	ID_CONNECTION_GRAPH_CONNECTION_LOST,
	ID_CONNECTION_GRAPH_DISCONNECTION_NOTIFICATION,
	ID_ROUTE_AND_MULTICAST,
	ID_DOWNLOAD_PROGRESS,
	ID_RESERVED9 = 79,
	//TODO

	ID_MARKERS_SYNC = 212, //ok
	ID_UNOCCUPIED_SYNC,//?
	ID_TRAILER_SYNC, //ok
	ID_PASSENGER_SYNC, //ok
	ID_PLAYER_SYNC, //ok
	ID_SPECTATOR_SYNC, //ok
	ID_AIM_SYNC, //ok
	ID_VEHICLE_SYNC, //ok
	ID_RCON_COMMAND, //ok
	ID_RCON_RESPONCE,
	ID_WEAPONS_UPDATE,
	ID_STATS_UPDATE, //ok
	ID_BULLET_SYNC,
};

#endif
