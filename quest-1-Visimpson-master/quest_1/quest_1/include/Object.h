#ifndef OBJECT_H
#define OBJECT_H

enum class Type {
    none,
    block,
    belowBlock,
    belowBlock2,
    wall1,
    wall2,
    waterSurface,
    water,
    player,
    numTypes
};

struct Position {
	int x;
	int y;
};

struct Dimensions {
	int width;
	int height;
};

struct Object {
	Type type;

	Position position { 0,0 };
	Dimensions dimensions { 0,0 };

	bool top { false };
	int spriteID { 0 };
};

#endif
