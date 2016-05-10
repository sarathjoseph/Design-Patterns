#pragma once
using namespace std;
# include <string>

class Component {

public:
    
	virtual int getCost() = 0;
	virtual string getConfiguration() = 0;
	
	Component(){};
	virtual ~Component() {};

};

