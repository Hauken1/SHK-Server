// may need #include "stdafx.h" in visual studio
#include "ServerTilkobling.h"
//#include "ClientGame.h"
// used for multi-threading
#include <process.h>


void serverLoop(void *);
void tilkoblingsLoop(void);

ServerTilkobling * server;
//ClientGame * client;

int main()
{

	// initialize the server
	server = new ServerTilkobling();

	// create thread with arbitrary argument for the run function
	_beginthread(serverLoop, 0, (void*)12);

	tilkoblingsLoop();

	return 0;
}


void serverLoop(void * arg)
{
	while (true)
	{
		server->update();
	}
}

void tilkoblingsLoop()
{
	while (true)
	{
		Sleep(5);
		//do game stuff
		//will later run client->update();
	}
}