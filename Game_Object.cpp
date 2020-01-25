#include "Game_Object.h"

Game_Object::Game_Object(int x1, int y1, int x2, int y2, std::string name, sf::Sprite gameObjectSprite, sf::Texture gameObjectTexture, sf::Image gameObjectImage)
{
	this->_X1 = x1;
	this->_Y1 = y1;
	this->_X2 = x2;
	this->_Y2 = y2;
	this->_Name = name;
	
}
int Game_Object::Get_X1()
{
	return this->_X1;
}
int Game_Object::Get_Y1()
{
	return this->_Y1;
}
int Game_Object::Get_X2()
{
	return this->_X2;
}
int Game_Object::Get_Y2()
{
	return this->_Y2;
}

std::string Game_Object::Get_Name()
{
	return this->_Name;
}