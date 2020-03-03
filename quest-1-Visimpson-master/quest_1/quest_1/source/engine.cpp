
#include "engine.h"

// stdlib
#include <fstream>
#include <iostream>
#include <random>
// local
#include "Object.h"
#include "GUI.h"

int
loadBlockData (
    const std::string& p_gameFile,
    Object p_objects[],
    const GUI& p_gui
) {
	using namespace std;
	
	int i = 0;
	int j = 0;

	ifstream map;
	map.open(p_gameFile);
	for (j = 0; j = 13; j ++) {

		for (i = 0; i = 20; i ++) {
			int help=1;//called help bc of line 31 it took me awhile to remember static_cast
			map >> help;

			p_objects->type = static_cast<Type>(help);
			p_objects->position = { i,j };
			p_objects->dimensions = { 16,16 };
			if (help ==1||help==6) {
				p_objects->top = true;
			}
			else{
				p_objects->top = false;
			};
			p_objects->spriteID = help;


		}

	}
	map.close();
	return 273;
}

void
randomPlayerData (
    const int p_numObjects,
    Object p_objects[],
    const GUI & p_gui
) {
    /*
        -- randomPlayerData   --
        Parameters:
            p_numObjects : The total number of objects in p_objects
            p_objects    : An array of almost all fully-constructed objects
            p_gui      : A reference to the GUI Object if you need it

        This function needs to modify the player object and assign them random values.
        Player
            xPosition needs to be random
            spriteID needs to be random
            yPosition needs to be physically correct
                The player cannot be in the air for instance
                The player cannot be underground
    */
}

int
getMaxYOfBlock (
    const Object& player,
    const Object objects[],
    int numObjects
) {
    /*
        -- getMaxYOfBlock --
        Parameters
            player  - A read-only reference to the player object
            objects - A list of read-only objects
            numObjects - The number of objects

        Return: The height that the player needs to be at to be physically accurate
    */

    return 0; // placeholder
}
