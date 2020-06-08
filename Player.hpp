#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "chips.hpp"
#include "deck.hpp"
class Player {
    public:
        Player(); 
        
        virtual int getPlayerNum() const = 0 ;
        virtual int getPlayerTotalMoney() const = 0;
        virtual int setPlayerTotalMoney() = 0;

        virtual bool setLittleBlind() = 0 ;
        virtual bool setBigBlind() = 0;
        virtual bool getLittleBlind() const = 0;
        virtual bool getBigBlind() const = 0;

};
//8 players to choose from 
class Aang : public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Aang();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};

class Katara : public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Katara();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};

class Zuko : public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Zuko();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};

class Iroh : public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Iroh();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};

class Toph : public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Toph();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};

class Sokka: public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Sokka();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};

class Azula : public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Azula();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};

class Appa : public Player {
    private:
        int playerNum;
        int playerCurrencyTotal;
        bool littleBlind;
        bool bigBlind;
        vector<Card*> playerHand;

        White* whiteChips;
        Red* redChips;
        Blue* blueChips;
        Green* greenChips;
        Black* blackChips;
    public: 
        Appa();
        virtual int getPlayerNum() const ;
        virtual int getPlayerTotalMoney() const  ;
        virtual int setPlayerTotalMoney() ;

        virtual bool setLittleBlind();
        virtual bool setBigBlind() ;
        virtual bool getLittleBlind() const ;
        virtual bool getBigBlind() const ;
};
#endif
