#include "stdafx.h"
#include "StoneDecorativeTile.h"
#include "net.minecraft.world.h"

const wstring StoneDecorativeTile::TEXTURE_NAMES[] = {L"andesite", L"andesite_polished", L"diorite", L"diorite_polished", L"granite", L"granite_polished", L"stoneslab_top"};

const unsigned int StoneDecorativeTile::STONE_DECORATIVE_NAMES[STONE_DECORATIVE_NAMES_LENGTH] = {	IDS_TILE_ANDESITE,
													IDS_TILE_POLISHED_ANDESITE,
													IDS_TILE_DIORITE,
													IDS_TILE_POLISHED_DIORITE,
													IDS_TILE_GRANITE,
													IDS_TILE_POLISHED_GRANITE,
													IDS_TILE_SMOOTH_STONE
												};

StoneDecorativeTile::StoneDecorativeTile(int id) : Tile(id, Material::stone)
{
	icons = nullptr;
}

Icon *StoneDecorativeTile::getTexture(int face, int data)
{
	if (data < 0 || data >= STONE_DECORATIVE_NAMES_LENGTH) data = 0;
	return icons[data];
}

int StoneDecorativeTile::getSpawnResourcesAuxValue(int data)
{
	return data;
}

unsigned int StoneDecorativeTile::getDescriptionId(int iData /*= -1*/)
{
	if(iData < 0 ) iData = 0;
	return StoneDecorativeTile::STONE_DECORATIVE_NAMES[iData];
}

void StoneDecorativeTile::registerIcons(IconRegister *iconRegister)
{
	icons = new Icon*[STONE_DECORATIVE_NAMES_LENGTH];

	for (int i = 0; i < STONE_DECORATIVE_NAMES_LENGTH; i++)
	{
		icons[i] = iconRegister->registerIcon(TEXTURE_NAMES[i]);
	}
}
