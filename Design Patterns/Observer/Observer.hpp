//
//  Observer.hpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/20/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#ifndef Observer_hpp
#define Observer_hpp
#include <iostream>


using namespace std;

class Observer
{
    
public:
    virtual void update(string state)=0;
    Observer(){};
    virtual ~Observer(){} ;
};


#endif /* Observer_hpp */