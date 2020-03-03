
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

#include "GUI.h"

#include "engine.h"
#include "Object.h"

using namespace std;

int main (int argc, char *argv[]){
	GUI gui;

	//Create array of Objects:
	const int maxObjects{ (gui.numColumns)*(gui.numRows)};
	Object objects[maxObjects];

	//Initialize the game's data source
	string gameFile ("./Assets/Config/game.txt");

	//Task 2: Load block structure from a file
    int numObjects = loadBlockData(gameFile, objects, gui);

	//Task 3: Randomize Samus Sprite Appearance
	//numObjects++;
	//objects[0].type = Type::player;  // this is just a placeholder
	//randomPlayerData(numObjects, objects, gui);

	bool quit = false;
	while (quit == false) {
		//GUI waits for mouse events
		while (gui.observeEvent()) {
			//GUI transmits quit event
			if (gui.quitGame()) {
				quit=true;
			}
		}

        gui.displayGameState(numObjects, objects);
	}

	return 0;
}
