using namespace std;
#include <iostream>
#include "processor.h"
#include "component.h"
#include "computer.h"
#include "gcard.h"
#include "display.h"




int main(int argc, const char* argv[]) {

	cout << "The Decorator design pattern"<<"\n\n";

    // Prepare Config
	ProcessorType processorType = PENTIUM_5;
	Processor processor(processorType, "PENTIUM_5");


	Component * computer = new Computer(processor);
	Component * computer_gc = new GraphicsCard(computer);
	Component * computer_gc_disp = new Display(computer_gc);

	cout << "Configuration 1: " << computer_gc_disp->getConfiguration()<<endl;
	cout << "Cost of total unit : $" << computer_gc_disp->getCost()<<endl;

	cout << endl;

	ProcessorType _processorType = INTEL_CORE_I7;
	Processor _processor(_processorType, "INTEL_CORE_I7");
	Component * comp = new GraphicsCard(new Display(new Computer(_processor)));

	cout << "Configuration 2: " << comp->getConfiguration() << endl;
	cout << "Cost of total unit : $" << comp->getCost() << endl;
	return 0;

}
