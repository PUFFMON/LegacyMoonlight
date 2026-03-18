#pragma once
#include "Feature.h"

class Level;

class OreFeature : public Feature
{
private:
	int tile;
	int count;
	int targetTile;
	int aux;

	void _init(int tile, int count, int targetTile, int aux);
public:
	OreFeature (int tile, int count);
	OreFeature(int tile, int count, int targetTile, int aux);

	virtual bool place(Level *level, Random *random, int x, int y, int z);
};