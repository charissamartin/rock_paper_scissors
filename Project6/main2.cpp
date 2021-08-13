//
//  main.cpp
//  Project6
//
//  Created by Charissa M Martin on 11/20/17.
//  Copyright © 2017 Charissa M Martin. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int rpsMenu() {
    int uiHand;
    do {
        cout << "Enter 1 for Rock, 2 for Paper or 3 for Scissors\n (Enter 0 to exit)\n";
        cin >> uiHand;}
        while
            (uiHand != 1 || uiHand != 2 || uiHand != 3 || uiHand != 0);
            return(uiHand);
}

void rpsCalc(int x, int y) {
    if (x == 1)
        cout << "Computer selected Rock\n";
    if (x == 2)
        cout << "Computer selected Paper\n";
    if (x == 3)
        cout << "Computer selected Scissors\n";

    if (x == y){
        cout << "TIE! :P\n";
    }
    else if (x == 1 && y == 2)
        cout << "~~~YOU WIN!~~~\n";
    else if (x == 1 && y == 3)
        cout << "You Lose :(\n";
    else if (x == 2 && y == 1)
        cout << "You Lose :(\n";
    else if (x == 2 && y == 3)
        cout << "~~~YOU WIN!~~~\n";
    else if (x == 3 && y == 1)
        cout << "~~~YOU WIN!~~~\n";
    else if (y == 3 && y == 2)
        cout << "You Lose :(\n";
}

int main(){
    unsigned seed = time(0);
    srand(seed);
    int aiHand, uHand;
    aiHand =(rand() % (3-1+1)) + 1;
    uHand = rpsMenu();
    while ( uHand != 0 ) {
        rpsCalc(aiHand,uHand);
        aiHand =(rand() % (3-1+1)) + 1;
        uHand = rpsMenu();
    }
}
