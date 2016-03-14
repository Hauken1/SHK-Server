#pragma once
#include "ServerNettverk.h"
#include "ServerData.h"

class ServerTilkobling
{

public:

	ServerTilkobling(void);
	~ServerTilkobling(void);

	void update();

	void receiveFromClients();

private:

	// IDs for the clients connecting for table in ServerNetwork 
	static unsigned int client_id;

	// The ServerNetwork object 
	ServerNettverk* nettverk;

	// data buffer
	char nettverk_data[MAX_PACKET_SIZE];
};