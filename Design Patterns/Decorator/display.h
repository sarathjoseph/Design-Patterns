#pragma once
#include "cdecorator.h"
#include "component.h"

# define DISPLAY__FIXED_PRICE 300
# define STANDARD_DISPLAY  "Acer Predator X34"

class Display : public ComponentDecorator {

public:
	Display(Component* componentInstance);
	~Display();
	int getCost();
	string getConfiguration();

};