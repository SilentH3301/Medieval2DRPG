#include "Hero.h"

Hero::Hero(int x1, int y1, int x2, int y2, std::string heroName, sf::Sprite heroSprite, sf::Texture heroTexture, sf::Image heroImage):
	Game_Object(x1, y1, x2, y2, _Name, _GameObjectSprite, _GameObjectTexture, _GameObjectImage)
{
	Hero::_GameObjectSprite  = heroSprite;
	Hero::_GameObjectImage   = heroImage;
	Hero::_GameObjectTexture = heroTexture;

	Hero::_Name = heroName;
	Hero::_X1 = x1;
	Hero::_X2 = x2;
	Hero::_Y1 = y1;
	Hero::_Y2 = y2;

}
sf::Sprite Hero::Get_Object_Sprite()
{
	return _GameObjectSprite;
}
std::string Hero::Get_Name()
{
	return _Name;
}
int Hero::Get_X1()
{
	return _X1;
}
int Hero::Get_X2()
{
	return _X2;
}
int Hero::Get_Y1()
{
	return _Y1;
}
int Hero::Get_Y2()
{
	return _Y2;
}