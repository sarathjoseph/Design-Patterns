//
//  Server.hpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/20/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#ifndef Server_hpp
#define Server_hpp

#include <vector>


#include <iostream>
#include "Subject.hpp"

using namespace std;

class Server: public Subject

{
    
    vector<Observer*>observers;
    
    public:
    
        string status;
        void registerObserver(Observer* o);
        void removeObserver(string o);
        void notifyObservers();
        void shutdown();

    Server();
    ~Server();
    
};

#endif /* Server_hpp */
