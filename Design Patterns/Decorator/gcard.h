#pragma once

#include "cdecorator.h"
#include "component.h"

# define GRAPHICS_CARD_FIXED_PRICE 150
# define STANDARD_GRAPHICS_CARD  "NVIDIA Quadro VCA"


class GraphicsCard : public ComponentDecorator {

public:
	GraphicsCard(Component* componentInstance);
	~GraphicsCard();
	int getCost();
	string getConfiguration();

};