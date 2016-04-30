//
//  main.cpp
//  Design Patterns
//
//  Created by SARATH CHERIYAN JOSEPH on 4/19/16.
//  Copyright © 2016 SARATH CHERIYAN JOSEPH. All rights reserved.
//

#include <iostream>
#include "Server.hpp"
#include "Client.hpp"


using namespace std;

void showMenuOptions();

void showMenuOptions(){
    
    cout << "Press 1 to add a client "<<endl;
    cout << "Press 2 to shutdown server"<<endl;
    cout << "Press -1 to exit "<<endl;
    cout <<"Press 0 to remove a client"<<endl;
}

int main(int argc, const char * argv[]) {
    
    
    Server server;
    
    int input = 0;
    string clientName;
    
    showMenuOptions();
    
    while(input != -1) {
        
        
        cin >> input;
    
        if (input == 2){
            
            cout <<"Shutting down Server"<<endl;
            server.shutdown();
            return 0;
            
        }
        else if (input ==1){
            
            
            cout << " Enter client name :"<<endl;
            cin >> clientName;
            
            Client* client = new Client(clientName);

            server.registerObserver(client);
            

        }
        else if (input==0){
            
            cout << "Enter client (name) to remove :"<<endl;
            cin >> clientName;
           
            server.removeObserver(clientName);
            
            
        }
        else
            if(input !=1)
                showMenuOptions();
    }
    
    server.shutdown();
    return 0;
}
