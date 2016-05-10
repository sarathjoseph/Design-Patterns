#pragma once

#include "component.h"

class ComponentDecorator : public Component {

public:

	ComponentDecorator(Component* componentInstance);
	~ComponentDecorator();

	Component * component;
	virtual string getConfiguration();
	virtual int getCost();


};