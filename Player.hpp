#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "chips.hpp"
#include "deck.hpp"
#include "card.hpp"
#include <vector>

class Card;
class Player {
    public:
        Player(); 
        virtual void setPlayerNum(int num) = 0;
        virtual int getPlayerNum() const = 0 ;
        virtual int getPlayerTotalMoney() const = 0;
        virtual void setPlayerTotalMoney() = 0;

        virtual White* getWhiteChips() = 0;
        virtual Red* getRedChips() = 0;
        virtual Blue* getBlueChips() = 0;
        virtual Green* getGreenChips() = 0;
        virtual Black* getblackChips() = 0;
        virtual void addCard(Card ) = 0;  
        virtual vector<Card> get_hand() const = 0;

       
        


  

};
//8 players to choose from Aang, Katara, Zuko, Iroh, Toph, Sokka, Azula, Appa 

//Decorator 
class Rich : public Player {
    private: 
        int playerNum; //1
        int playerCurrencyTotal;
        // bool littleBlind;
        // bool bigBlind;
        vector<Card> playerHand;

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

        virtual White* getWhiteChips();
        virtual Red* getRedChips() ;
        virtual Blue* getBlueChips() ;
        virtual Green* getGreenChips() ;
        virtual Black* getblackChips() ;
        virtual void addCard(Card ) ; 
        virtual vector<Card> get_hand() const ;
    
};


class Poor : public Player {
    private: 

        int playerNum; //2
        int playerCurrencyTotal;
        // bool littleBlind;
        // bool bigBlind;
        vector<Card> playerHand;

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

        virtual White* getWhiteChips();
        virtual Red* getRedChips() ;
        virtual Blue* getBlueChips() ;
        virtual Green* getGreenChips() ;
        virtual Black* getblackChips() ;
        virtual void addCard(Card ) ; 
        virtual vector<Card> get_hand() const ;

};



#endif
