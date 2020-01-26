#pragma once
#include "Game_Object.h"

class Hero: public Game_Object
{
public:

	Hero(int x1, int y1, int x2, int y2, 
		std::string heroName, sf::Sprite heroSprite, sf::Texture heroTexture, sf::Image heroImage);

	void Control_Hero();
	int Get_X1();
	int Get_Y1();
	int Get_X2();
	int Get_Y2();

	std::string Get_Name();

	sf::Sprite Get_Object_Sprite();

};