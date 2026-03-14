#pragma once
#include "Tile.h"

class Random;

class StoneTile : public Tile
{
public:
	static const int TYPE_GRANITE = 1;
	static const int TYPE_POLISHED_GRANITE = 2;
	static const int TYPE_DIORITE = 3;
	static const int TYPE_POLISHED_DIORITE = 4;
	static const int TYPE_ANDESITE = 5;
	static const int TYPE_POLISHED_ANDESITE = 6;

	static const int STONE_NAMES_LENGTH = 7;

	static const unsigned int STONE_NAMES[STONE_NAMES_LENGTH];
	static const wstring TEXTURE_NAMES[];
private:
	Icon** icons;
public:
	StoneTile(int id);
    virtual int getResource(int data, Random *random, int playerBonusLevel);
	virtual Icon* getTexture(int face, int data);
	virtual unsigned int getDescriptionId(int iData = -1);
	virtual int getSpawnResourcesAuxValue(int data);
	void registerIcons(IconRegister* iconRegister);
};