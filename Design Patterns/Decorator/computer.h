#pragma once

# include "component.h"
# include <string>
# include "processor.h"

# define BASE_FACTOR 2;


class Computer : public Component {

protected:
	Processor processor;
public:

	 Computer(Processor processor);
	 ~Computer();

	 virtual int getCost();
	 virtual string getConfiguration();

};