//
//  Server.cpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/20/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#include "server.hpp"
#include "observer.hpp"
#include <algorithm>
#include "client.hpp"

using namespace std;
enum state { RUNNING, STOPPED, STARTING };



void Server::notifyObservers(){
    
    for(int i=0;i<observers.size();i++){
        
        observers[i]->update(status);
    }
}

void Server::registerObserver(Observer* const o){
    
    observers.push_back(o);
    
}

void Server::removeObserver(string o){
    
    for(int i=0;i<observers.size();i++){
        Client* clientPtr = dynamic_cast<Client* >(observers[i]);
        if (clientPtr->name == o){
            observers.erase(observers.begin() + i);
            delete clientPtr;
            
        }
        
    }
    
}

void Server::shutdown(){
    
    /*
     
     Some shutdown logic goes here
     
     */
    
    status = "STOPPED";
    
    /* On Shutdown notify clients */
    notifyObservers();
}


Server::Server(){
    
    
}

Server::~Server(){
    
    for(int i=0;i<observers.size();i++){
        
        delete observers[i];
    }
    
}