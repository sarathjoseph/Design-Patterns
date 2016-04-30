//
//  Subject.hpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/20/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#ifndef Subject_hpp
#define Subject_hpp
#include "Observer.hpp"
#include <stdio.h>




class Subject
{
public:
    
    virtual void registerObserver (Observer* o) = 0;
    virtual void removeObserver (string o) = 0;
    virtual void notifyObservers () = 0;
    
    Subject(){};
    virtual ~Subject(){};
};

#endif /* Subject_hpp */