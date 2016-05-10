#include "display.h"

Display::Display(Component * componentInstance)
	:ComponentDecorator(componentInstance)
{

}

Display::~Display()
{
}

int Display::getCost()
{
	return component->getCost()+ DISPLAY__FIXED_PRICE;
}

string Display::getConfiguration()
{
	return component->getConfiguration()+", "+STANDARD_DISPLAY;
}
