#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Game_Object
{
public:
	sf::Sprite	_GameObjectSprite;
	sf::Texture _GameObjectTexture;
	sf::Image	_GameObjectImage;
	
	Game_Object(int x1, int y1, int x2, int y2, std::string name, sf::Sprite gameObjectSprite, sf::Texture _GameObjectTexture, sf::Image gameObjectImage);

	int _X1, _Y1, _X2, _Y2;
	std::string _Name;

	int Get_X1();
	int Get_Y1();
	int Get_X2();
	int Get_Y2();

	std::string Get_Name();

	sf::Sprite Get_Object_Sprite();
};