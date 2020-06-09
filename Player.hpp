#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "chips.hpp"
#include "deck.hpp"
class Player {
    public:
        Player(); 
        virtual void setPlayerNum(int num) = 0;
        virtual int getPlayerNum() const = 0 ;
        virtual int getPlayerTotalMoney() const = 0;
        virtual void setPlayerTotalMoney() = 0;

  

};
//8 players to choose from Aang, Katara, Zuko, Iroh, Toph, Sokka, Azula, Appa 

//Decorator 
class Rich : public Player {
    private: 
        int playerNum; //1
        int playerCurrencyTotal;
        // bool littleBlind;
        // bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public:
        Rich();
        virtual void setPlayerNum(int num) ;
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual void setPlayerTotalMoney() ;

    
};


class Poor : public Player {
    private: 

        int playerNum; //1
        int playerCurrencyTotal;
        // bool littleBlind;
        // bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public:
        Poor();
        virtual void setPlayerNum(int num);
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual void setPlayerTotalMoney() ;

       

};



#endif
