#include<iostream>
#include<algorithm>

using namespace std;

#include "deck.hpp"
#include "card.hpp"

  Deck::Deck(){
    for (int i = 13; i > 0; --i) {
      theDeck.push_back(Card('s', i));
    }
    for (int j = 13; j > 0; --j) {
      theDeck.push_back(Card('h', j));
    }
    for (int j = 13; j > 0; --j) {
      theDeck.push_back(Card('d', j));
    }
    for (int j = 13; j > 0; --j) {
      theDeck.push_back(Card('c', j));
    }
  }

  Card Deck::dealCard(){
    Card cardDeal;
    cardDeal = theDeck.at(theDeck.size() - 1);
    dealtCards.push_back(cardDeal);
    theDeck.pop_back();

    return cardDeal;
  }

  void Deck::shuffleDeck(){
    for (unsigned int i = 0; i < dealtCards.size(); ++i) {
      theDeck.push_back(dealtCards.at(i));
    }
    dealtCards.clear();
    random_shuffle(theDeck.begin(), theDeck.end());
  }

  unsigned Deck::deckSize()const {
    return theDeck.size();
  }

