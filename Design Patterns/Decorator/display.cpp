#include "display.h"
#include "iostream"

Display::Display(Component * componentInstance)
	:ComponentDecorator(componentInstance)
{

}

Display::~Display()
{
	std::cout << "Destroying Display object: "<<this<<endl;
}

int Display::getCost()
{
	return component->getCost()+ DISPLAY__FIXED_PRICE;
}

string Display::getConfiguration()
{
	return component->getConfiguration()+", "+STANDARD_DISPLAY;
}
