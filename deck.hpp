#ifndef __DECK_H__
#define __DECK_H__

#include <vector>
using namespace std;

#include "card.hpp"

class Deck {
 private:
    vector<Card> theDeck;
    vector<Card> dealtCards;
 public:


    Deck();


    Card dealCard();


    void shuffleDeck();


    unsigned deckSize() const;
};

#endif

