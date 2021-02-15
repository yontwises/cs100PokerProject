#include <iostream>
#include <fstream>
// #include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

#include "card.hpp"
#include "deck.hpp"
#include "chips.hpp"
#include "Player.hpp"
#include "Decorator.hpp"
#include "Factory.hpp"
void selectionSort(vector<Card> hand, int n){
int vecsize = hand.size();
	for (int j = 0; j < vecsize - 1; ++j) {

    int min = j;
    for (int i = j+1; i < vecsize; ++i) {
        if (hand.at(min).getRank() > hand.at(i).getRank()) {
            min = i;
        }
    }  
    if (min != j)
        swap(hand.at(j), hand.at(min));
	}
}
bool royalflush(vector<Card> hand){
	char suit = hand.at(0).getSuit();
			if(hand.at(0).getSuit() == hand.at(1).getSuit() == hand.at(2).getSuit() == hand.at(3).getSuit() == hand.at(4).getSuit()){
				if(hand.at(0).getRank() == 1 && hand.at(1).getRank() == 10 && hand.at(2).getRank() == 11 && hand.at(3).getRank() == 12 && hand.at(4).getRank() == 13){
					return true;
				}
			}
	return false;
}

bool straightflush(vector<Card> hand){
	char suit = hand.at(0).getSuit();
	int s = hand.at(0).getRank();

			if(hand.at(0).getSuit() == hand.at(1).getSuit() == hand.at(2).getSuit() == hand.at(3).getSuit() == hand.at(4).getSuit()){
				if(hand.at(0).getRank() == s && hand.at(1).getRank() == s+1 && hand.at(2).getRank() == s+2 && hand.at(3).getRank() == s+3 && hand.at(4).getRank() == s+4){
					return true;
				}
			}
		
	return false;
}

bool fourOfKind(vector<Card> hand){
	int s = hand.at(0).getRank();
	if(hand.at(0).getRank() == s && hand.at(1).getRank() == s && hand.at(2).getRank() == s && hand.at(3).getRank() == s){
		return true;
	}
	s = hand.at(1).getRank();
	if(hand.at(1).getRank() == s && hand.at(2).getRank() == s && hand.at(3).getRank() == s && hand.at(4).getRank() == s){
		return true;
	}
	return false;
}

bool fullHouse(vector<Card> hand){
	int s = hand.at(0).getRank();
	int t = hand.at(3).getRank();
	if(hand.at(0).getRank() == s && hand.at(1).getRank() == s && hand.at(2).getRank() == s && hand.at(3).getRank() == t && hand.at(4).getRank() == t){
		return true;
	}
	s = hand.at(1).getRank();
	t = hand.at(2).getRank();
	if(hand.at(0).getRank() == s && hand.at(1).getRank() == s && hand.at(2).getRank() == t && hand.at(3).getRank() == t && hand.at(4).getRank() == t){
		return true;
	}
	return false;
}

bool flush(vector<Card> hand){
	char suit = hand.at(0).getSuit();
		for(unsigned int i = 0; i < hand.size(); ++i){
			if(hand.at(i).getSuit() != suit){
				return false;
			}
		}
	return true;
}

bool straight(vector<Card> hand){
	char suit = hand.at(0).getSuit();
	int s = hand.at(0).getRank();
		if(hand.at(0).getRank() == s && hand.at(1).getRank() == s+1 && hand.at(2).getRank() == s+2 && hand.at(3).getRank() == s+3 && hand.at(4).getRank() == s+4){
			return true;
		}
	return false;
}

bool threeOfKind(vector<Card> hand){
	int s = hand.at(0).getRank();
	if(hand.at(0).getRank() == s && hand.at(1).getRank() == s && hand.at(2).getRank() == s){
		return true;
	}
	s = hand.at(1).getRank();
	if(hand.at(1).getRank() == s && hand.at(2).getRank() == s && hand.at(3).getRank() == s){
		return true;
	}
	s = hand.at(2).getRank();
	if(hand.at(2).getRank() == s && hand.at(3).getRank() == s && hand.at(4).getRank() == s){
		return true;
	}
	return false;
}

bool twoPairs(vector<Card> hand){
	int s = hand.at(0).getRank();
	int t = hand.at(2).getRank();
	if(hand.at(0).getRank() == s && hand.at(1).getRank() == s && hand.at(2).getRank() == t && hand.at(3).getRank() == t){
		return true;
	}
  s = hand.at(1).getRank();
	t = hand.at(3).getRank();
	if(hand.at(1).getRank() == s && hand.at(2).getRank() == s && hand.at(3).getRank() == t && hand.at(4).getRank() == t){
		return true;
	}
	s = hand.at(0).getRank();
	if(hand.at(0).getRank() == s && hand.at(1).getRank() == s && hand.at(3).getRank() == t && hand.at(4).getRank() == t){
		return true;
	}
	return false;
}

bool onePair(vector<Card> hand){
	int s = hand.at(0).getRank();
	if(hand.at(0).getRank() == s && hand.at(1).getRank() == s){
		return true;
	}
  s = hand.at(1).getRank();
	if(hand.at(1).getRank() == s && hand.at(2).getRank() == s){
		return true;
	}
	s = hand.at(2).getRank();
	if(hand.at(2).getRank() == s && hand.at(3).getRank() == s){
		return true;
	}
	s = hand.at(3).getRank();
	if(hand.at(3).getRank() == s && hand.at(4).getRank() == s){
		return true;
	}
	return false;
}

int declareRank(vector<Card> hand){
	//check for royal flush
	selectionSort(hand, hand.size());
	if(royalflush(hand)){
		return 22;
	}
	if(straightflush(hand)){
		return 21;
	}
	if(fourOfKind(hand)){
		return 20;
	}
	if(fullHouse(hand)){
		return 19;
	}
	if(flush(hand)){
		return 18;
	}
	if(straight(hand)){
		return 17;
	}
	if(threeOfKind(hand)){
		return 16;
	}
	if(twoPairs(hand)){
		return 15;
	}
	if(onePair(hand)){
		return 14;
	}
	int maxInd = 0;
	for(int i = 1; i < hand.size(); i++){
		if(hand.at(maxInd).getRank() < hand.at(i).getRank()){
			maxInd = i;
		}
	}
	int max = hand.at(maxInd).getRank();
	return max;

return -1;
}


//Betting system declarations
// void BettingSystem();


int menu(){
    int choice = 0;
    
	while (choice < 1 || choice > 5 ){
		cout << "-----Options-----" << endl;
		cout << "1: Check" << endl;
		cout << "2: Raise" << endl;
		cout << "3: Convert dollar amount to chips" << endl;
        cout << "4: Player Info" << endl;
        cout << "5: Fold" << endl;
		cout << "Select an option" << endl;
        cin >> choice;
	}
  
	return choice;
}

int revisedMenu(){
        int choice = 0;
        
    
        while(choice < 1 || choice > 4){
            cout << "-----Options-----" << endl;
            cout << "1: Raise" << endl;
            cout << "2: Convert dollar amount to chips" << endl;
            cout << "3: Player Info" << endl;
            cout << "4: Fold" << endl;
            cout << "Select an option" << endl;
            cin >> choice;
        }
  
	return choice;
}


// void userOptions(int i, int choice);
// void userOptionsNoCheck(int i, int choice);
int main(){
	//declarations
	int numPlayers = 0;
	int gameCont = 1;
  White* whitePot = new White(); 
  Red* redPot = new Red();
  Blue* bluePot = new Blue();
  Green* greenPot = new Green();
  Black* blackPot = new Black();
  int playerNum = 0;
	//vector<Card> deckShuffled;
	Deck newDeck = Deck();
  vector<Player*> playerVec;
  AddVisitor* addVisit = new AddVisitor();
  SubVisitor* subVisit = new SubVisitor();


	cout << "Welcome to our poker game!" << endl;

	cout << "How many players are playing?" << endl;
	cin >> numPlayers;
    cout << endl;
	for(unsigned int i = 0; i < numPlayers; ++i){
		//create the characters
    
		cout << "Player: " << i + 1 << endl;
		cout << "1: Maximum buy in." << endl;
		cout << "2: Minimum buy in." << endl;
        cout << "Enter 1 or 2 to choose" << endl;

    int factoryOption; 
    
    cin >> factoryOption;
    playerNum = i + 1;
    Factory* gameFactory = new Factory(factoryOption);
    Player* temp = gameFactory->getPlayer();

    temp->setPlayerNum(playerNum);
    playerVec.push_back(temp);

		//call factory design pattern to create the character.
    //look at factory_test to create the player 
    
	}

	cout << "Game is starting!" << endl;
	cout << endl;


    cout << "Shuffling Deck!" << endl << endl;
while(gameCont == 1){
	//Shuffling the deck.
    
	newDeck.shuffleDeck();
   
	//Deal each player their 5 cards
   
	for(int i = 0; i < numPlayers; ++i){
		for(int j = 0; j < 5; ++j) { 
			playerVec.at(i)->addCard(newDeck.dealCard());
		}
	}
    cout << "Adding ante to the pot!" << endl << endl;
    for(unsigned int i = 0; i < playerVec.size(); ++i) {
        playerVec.at(i)->getWhiteChips()->accept(subVisit, 1);
        playerVec.at(i)->setPlayerTotalMoney();
    }
    whitePot->accept(addVisit, 1); 

	//Betting round begins
	//ADD MENU: CHECK, RAISE, FOLD
	cout << "Betting round start" << endl;
	
  int choice = 0;
  int roundNum = 0;
  bool checkOccured = false;
	for(int i = 0; i < numPlayers; ++i){
		cout << "Player: " << i + 1 << endl;
		choice = menu(); 
        
		if(choice == 1){
			//PASS/CHECK
            roundNum = i + 1;
            checkOccured = true;
        break;
		}
		else if(choice == 2){
			//Betting system
			int color; 
            int amount;
            char userInput = 'a'; 
            AddVisitor* addChips;
            SubVisitor* subChips;
            while (userInput != 'q') {
                color = 0;
                amount = 0;
                userInput = 0;
                while (color < 1 || color > 5) {
                    cout << "Choose what color chip you would like to bet" << endl;
                    cout << "1. White" << endl;
                    cout << "2. Red" << endl;
                    cout << "3. Blue" << endl;
                    cout << "4. Green" << endl;
                    cout << "5. Black" << endl; 
                    cin >> color;
                }   
                cout << "How many chips would you like to bet?" << endl; 
                cin >> amount; 
                
                if (color == 1) {
                    playerVec.at(i)->getWhiteChips()->accept(subChips, amount);
                    whitePot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 2) {
                playerVec.at(i )->getRedChips()->accept(subChips, amount);
                    redPot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 3) {
                playerVec.at(i )->getBlueChips()->accept(subChips, amount);
                    bluePot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 4) {
                playerVec.at(i )->getGreenChips()->accept(subChips, amount);
                    greenPot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 5) {
                playerVec.at(i)->getblackChips()->accept(subChips, amount);
                    blackPot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                cout << "Enter any character to continue betting. Enter q to stop betting." << endl; 
                cin >> userInput;
                
            }
		}
	  else if(choice == 3){
        	//call decorator calculator 
            int dollarAmount;
            White* whiteAmount = new White();
            Red* redAmount = new Red(); 
            Blue* blueAmount = new Blue();
            Green* greenAmount = new Green();
            Black* blackAmount = new Black();
            cout << "Enter a dollar amount you would like to convert into chips" << endl;
            cin >> dollarAmount;
            Decorator* dec = new Decorator(dollarAmount); 
            cout << "White Chips: " << dec->getWhiteChips() << endl;
            cout << "Red Chips: " << dec->getRedChips() << endl;
            cout << "Blue Chips: " << dec->getBlueChips() << endl;
            cout << "Green Chips: " << dec->getGreenChips() << endl;
            cout << "Black Chips: " << dec->getBlackChips() << endl << endl;
            i = i - 1;
      }
        else if (choice == 4 ) {
        //player stats output player's hand, num, chips
         playerVec.at(i)->playerInfo();
         i = i - 1;
         cout << endl;
        }
        else if (choice == 5 ) {
        //fold
        }
	}
	
  if (checkOccured) {
    for(int i = roundNum; i < numPlayers; ++i){
      cout << "Player: " << i + 1 << endl;
      choice = revisedMenu();

      if(choice == 1){
        //Betting system
			int color; 
            int amount;
            char userInput = 'a'; 
            AddVisitor* addChips = new AddVisitor();
            SubVisitor* subChips = new SubVisitor();
            while (userInput != 'q') {
                color = 0;
                amount = 0;
                userInput = 0;
                while (color < 1 || color > 5) {
                    cout << "Choose what color chip you would like to bet" << endl;
                    cout << "1. White" << endl;
                    cout << "2. Red" << endl;
                    cout << "3. Blue" << endl;
                    cout << "4. Green" << endl;
                    cout << "5. Black" << endl; 
                    cin >> color;
                }   
                cout << "How many chips would you like to bet?" << endl; 
                cin >> amount; 
                
                if (color == 1) {
                    playerVec.at(i)->getWhiteChips()->accept(subChips, amount);
                    whitePot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 2) {
                playerVec.at(i )->getRedChips()->accept(subChips, amount);
                    redPot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 3) {
                playerVec.at(i )->getBlueChips()->accept(subChips, amount);
                    bluePot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 4) {
                playerVec.at(i )->getGreenChips()->accept(subChips, amount);
                    greenPot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                if (color == 5) {
                playerVec.at(i)->getblackChips()->accept(subChips, amount);
                    blackPot->accept(addChips, amount);
                    playerVec.at(i)->setPlayerTotalMoney();
                }
                cout << "Enter any character to continue betting. Enter q to stop betting." << endl; 
                cin >> userInput;
                
            }
		}
      else if(choice == 2){
        	//call decorator calculator 
            int dollarAmount;
            White* whiteAmount = new White();
            Red* redAmount = new Red(); 
            Blue* blueAmount = new Blue();
            Green* greenAmount = new Green();
            Black* blackAmount = new Black();
            cout << "Enter a dollar amount you would like to convert into chips" << endl;
            cin >> dollarAmount;
            Decorator* dec = new Decorator(dollarAmount); 
            cout << "White Chips: " << dec->getWhiteChips() << endl;
            cout << "Red Chips: " << dec->getRedChips() << endl;
            cout << "Blue Chips: " << dec->getBlueChips() << endl;
            cout << "Green Chips: " << dec->getGreenChips() << endl;
            cout << "Black Chips: " << dec->getBlackChips() << endl << endl;
            i = i - 1;
      }
      else if (choice == 3 ) {
        //player stats output player's hand, num, chips
        playerVec.at(i)->playerInfo();
        cout << endl;
        i = i - 1;
      }
      else if (choice == 4 ) {
        //fold
      }
	  }
  }
	//give the total amount of chips bet to the winning hand.
	//Declare winner
	int winIndex = 0;
	for(unsigned int i = 0; i < playerVec.size(); ++i){
		if(declareRank(playerVec.at(i)->get_hand()) > declareRank(playerVec.at(winIndex)->get_hand())){
			winIndex = i;
		}
	}
	cout << "Player: " << winIndex + 1 << " wins!" << endl;


	cout << "Do you want to continue to the next round?" << endl;
	cout << "Press 0 to Quit" << endl;
	cout << "Press 1 to Continue" << endl;
	cin >> gameCont;
}
	return 0;
}

// void BettingSystem(int playerIndex, vector<Player*> playerVec) {
//   int color; 
//   int amount;
//   int userInput; 
//   AddVisitor* addChips;
//   SubVisitor* subChips;
//   while (userInput != q) {
//     cout << "Choose what color chip you would like to bet" << endl;
//     cout << "1. White" << endl;
//     cout << "2. Red" << endl;
//     cout << "3. Blue" << endl;
//     cout << "4. Green" << endl;
//     cout << "5. Black" << endl; 

//     cin >> color;
//     cout << "How many chips would you like to bet?" << endl; 
//     cin >> amount; 
    
//     if (color == 1) {
//         playerVec.at(playerIndex )->getWhiteChips()->accept(subChips, amount);
//         whitePot.accept(addChips, num);
//     }
//     if (color == 2) {
//        playerVec.at(playerIndex )->getRedChips()->accept(subChips, amount);
//         redPot.accept(addChips, num);
//     }
//     if (color == 3) {
//        playerVec.at(playerIndex )->getBlueChips()->accept(subChips, amount);
//         BluePot.accept(addChips, num);
//     }
//     if (color == 4) {
//        playerVec.at(playerIndex )->getGreenChips()->accept(subChips, amount);
//         GreenPot.accept(addChips, num);
//     }
//     if (color == 5) {
//        playerVec.at(playerIndex )->getBlackChips()->accept(subChips, amount);
//         BlackPot.accept(addChips, num);
//     }
//     cout << "Enter any character to continue betting. Enter q to stop." << endl; 
//     cin >> userInput;
    
// 	}
// }

// void userOptions(int playerNum, int choice,int numPlayers) {
// for(int i = 0; i < numPlayers; ++i){
// 		cout << "Player: " << i + 1 << endl;
// 		choice = menu();
// 		if(choice == 1){
// 			//PASS/CHECK
// 			//FIXME ADD NOT AVAILABLE AFTER BETTING STARTS 
//             ++i;
//             userOptionsNoCheck(i,)
// 		}
// 		else if(choice == 2){
// 			//Betting system
//             int playerIndex = 
// 			BettingSystem(int playerIndex);
// 		}
// 		else if(choice == 3){
//             //call decorator calculator 
// 			//Fold
// 		}
//         else if (choice == 4 ) {
//         //player stats output player's hand, num, chips
//         }
//         else if (choice == 5 ) {
//         //Fold
//         }
// 	}
// }
// void userOptionsNoCheck(int playerNum, int i , int choice, int numPlayers) {
//  for(int i = roundNum; i < numPlayers; ++i){
// 		cout << "Player: " << i + 1 << endl;
// 		choice = menu();
		
// 		if(choice == 1){
// 			//Betting system
// 			BettingSystem(int playerIndex);
// 		}
// 		else if(choice == 2){
// 			//Fold
// 		}
//         else if (choice == 3 ) {
//         //player stats output player's hand, num, chips
//         }
//         else if (choice == 4 ) {
//         //call decorator calculator 
//         }

// 	}
// }
