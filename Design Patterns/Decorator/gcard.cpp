#include "gcard.h"
#include "component.h"
using namespace std;

#include "iostream"


GraphicsCard::GraphicsCard(Component* componentInstance)
	:ComponentDecorator(componentInstance)
{
	
}

GraphicsCard::~GraphicsCard()
{

}

int GraphicsCard::getCost()
{
	
	return component->getCost()+ GRAPHICS_CARD_FIXED_PRICE;
}

string GraphicsCard::getConfiguration()
{
	return  component->getConfiguration() + ", "+ STANDARD_GRAPHICS_CARD;
}
