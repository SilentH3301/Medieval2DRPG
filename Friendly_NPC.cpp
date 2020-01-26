#include "Friendly_NPC.h"

Friendly_NPC::Friendly_NPC(int x1, int x2, int y1, int y2, std::string F_NPC_Name, sf::Sprite F_NPC_Sprite, sf::Texture F_NPC_Texture, sf::Image F_NPC_Image) :
	Game_Object(x1, y1, x2, y2, _Name, _GameObjectSprite, _GameObjectTexture, _GameObjectImage)
{

}
sf::Sprite Friendly_NPC::Get_Object_Sprite()
{
	return _GameObjectSprite;
}
std::string Friendly_NPC::Get_Name()
{
	return _Name;
}
int Friendly_NPC::Get_X1()
{
	return _X1;
}
int Friendly_NPC::Get_X2()
{
	return _X2;
}
int Friendly_NPC::Get_Y1()
{
	return _Y1;
}
int Friendly_NPC::Get_Y2()
{
	return _Y2;
}