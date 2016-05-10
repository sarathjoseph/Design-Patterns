#pragma once

# include <string>
using namespace std;

enum ProcessorType { PENTIUM_5		= 400,
					 CORE2DUO		= 500, 
					 AMDFX9590		= 200,
					 INTEL_CORE_I7	= 600 
                    };

struct Processor {

protected:
	int cost;
public:

	
	string name;
	Processor(ProcessorType cost, string name);
	int getPrice();
	Processor();
	~Processor();
	
};