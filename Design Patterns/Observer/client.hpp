//
//  Client.hpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/20/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#ifndef client_hpp
#define client_hpp
#include "observer.hpp"
#include "vector"
#include <iostream>

using namespace std;

class Client :public Observer{
    
public:
    
    void update(string state);
    string name;
    
    Client(string name);
    ~Client();
};



#endif /* client_hpp */


