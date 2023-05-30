#include <common/game.h>

#include "MyGame.h"

int main( void )
{
	Game game;
	MyGame* scene = new MyGame();

	do 
	{
		game.Run(scene);
	} 
	// Check if the ESC key was pressed or the window was closed
	while( game.IsRunning() );

	delete scene;

	return 0;
}