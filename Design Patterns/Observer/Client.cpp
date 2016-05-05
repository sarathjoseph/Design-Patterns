//
//  Client.cpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/20/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#include "client.hpp"
#include "vector"



Client::Client(string name){
    
    this->name = name;
    
    cout<<"Client initializing with name "<<this->name<<endl;
}

Client::~Client(){
    
    cout<<"Destroying client "<<this->name<<endl;
    
}


void Client::update(string state){
    
    
    cout<< "Client "<<this->name<<" received notification from server with status as "<<state<<endl;
}


