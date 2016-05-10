#include "processor.h"




Processor::Processor(ProcessorType cost, string name)
{
	this->cost = cost;
	this->name = name;
}

int Processor::getPrice()
{
	return this->cost;
}

Processor::Processor()
{
}

Processor::~Processor()
{
}
