#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__ 

#include "Player.hpp"

class Player;

class Factory {
    private: 
        Player* tempPlayer; //this tempPlayer will be used to assign another Player*
    public: 
        Factory(int type); 
        
        ~Factory();

        Player* getPlayer();


};

#endif