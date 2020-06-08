#include<iostream>
#include<cctype>
using namespace std;

#include "card.hpp"


Card::Card(){
  suit = 'c';
  rank = 2;
}

Card::Card(char userSuit, int userNum){
  if ((tolower(userSuit) != 'c') && (tolower(userSuit) != 'd') && (tolower(userSuit) != 'h') && (tolower(userSuit) != 's')) {
    userSuit = 'c';
  }
  if ((userNum < 1) || (userNum > 13)) {
    userNum = 2;
  }
  suit = tolower(userSuit);
  rank = userNum;
}

char Card::getSuit() const{
  return suit;
}

int Card::getRank() const{
  return rank;
}

ostream & operator<<(ostream & fout, const Card &suitRank ){
  string temp;
  if(suitRank.getSuit() == 's'){
    temp = "Spades";
  }
  else if(suitRank.getSuit() == 'h'){
    temp = "Hearts";
  }
  else if(suitRank.getSuit() == 'd'){
    temp = "Diamonds";
  }
  else if(suitRank.getSuit() == 'c'){
    temp = "Clubs";
  }
  else{
    temp = "Unknown";
  }
  if(suitRank.getRank() == 1){
    fout << "Ace";
  }
  else if(suitRank.getRank() == 11){
    fout << "Jack";
  }
  else if(suitRank.getRank() == 12){
    fout << "Queen";
  }
  else if(suitRank.getRank() == 13){
    fout << "King";
  }
  else{
    fout << suitRank.getRank();
  }
  fout << " of " << temp;
  return fout;
}

