#include "cdecorator.h"
#include "component.h"


ComponentDecorator::ComponentDecorator(Component* componentInstance)
{
	this->component = componentInstance;
}

ComponentDecorator::~ComponentDecorator(){

}

string ComponentDecorator::getConfiguration()
{
	return component->getConfiguration();
}

int ComponentDecorator::getCost()
{
	return component->getCost();
}
