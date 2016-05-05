//
//  Observer.hpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/20/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#ifndef observer_hpp
#define observer_hpp
#include <iostream>


using namespace std;

class Observer
{
    
public:
    virtual void update(string state)=0;
    Observer(){};
    virtual ~Observer(){} ;
};


#endif /* observer_hpp */