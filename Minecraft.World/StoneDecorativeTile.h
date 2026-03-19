#pragma once
#include "Tile.h"
#include <string>

class ChunkRebuildData;
class StoneDecorativeTile : public Tile
{
	friend class ChunkRebuildData;
public:
	static const int TYPE_ANDESITE = 0;
    static const int TYPE_POLISHED_ANDESITE = 1;
    static const int TYPE_DIORITE = 2;
	static const int TYPE_POLISHED_DIORITE = 3;
	static const int TYPE_GRANITE = 4;
	static const int TYPE_POLISHED_GRANITE = 5;
	static const int TYPE_SMOOTH_STONE = 6;

	static const wstring TEXTURE_NAMES[];

	static const int STONE_DECORATIVE_NAMES_LENGTH = 7;

	static const unsigned int STONE_DECORATIVE_NAMES[STONE_DECORATIVE_NAMES_LENGTH];

private:
	Icon **icons;

public:

    StoneDecorativeTile(int id);

public:
	virtual Icon *getTexture(int face, int data);

	virtual unsigned int getDescriptionId(int iData = -1);
	virtual int getSpawnResourcesAuxValue(int data);
	void registerIcons(IconRegister *iconRegister);
};
