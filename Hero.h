#pragma once
#include "Game_Object.h"

class Hero: public Game_Object
{
public:

	Hero(int x1, int y1, int x2, int y2, 
		std::string heroName, sf::Sprite heroSprite, sf::Texture heroTexture, sf::Image heroImage);

	void Control_Hero();

};