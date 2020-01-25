#pragma once
#include "Game_Object.h"

class Friendly_NPC : public Game_Object
{
	Friendly_NPC(int x1, int y1, int x2, int y2, std::string name, 
				 sf::Sprite F_NPC_Sprite, sf::Texture F_NPC_Texture, sf::Image F_NPC_Image);
};