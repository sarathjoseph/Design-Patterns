#include "computer.h"
using namespace std;
#include <iostream>



Computer::Computer(Processor processor)
{
	
	this->processor = processor;
}

Computer::~Computer()
{
	std::cout << "Destroying Computer object: " << this << endl;
}


int Computer::getCost()
{
	return (this->processor).getPrice()*BASE_FACTOR;
}



string Computer::getConfiguration()
{
	return processor.name + " processor";
}
