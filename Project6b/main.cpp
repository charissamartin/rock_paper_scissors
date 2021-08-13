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
    int rpsChoice;
    do {
        cout << "Enter 1 for Rock, 2 for Paper or 3 for Scissors (Enter 0 to exit)\n";
        cin >> rpsChoice;
    }
    while( rpsChoice != 1 && rpsChoice != 2 && rpsChoice != 3 && rpsChoice != 0 );
    if (rpsChoice == 1)
        cout << "You selected Rock\n\n";
    if (rpsChoice == 2)
        cout << "You selected Paper\n\n";
    if (rpsChoice == 3)
        cout << "You selected Scissors\n\n";
    return(rpsChoice);
}

void rpsCalc(int x, int y) {
    if (x == 1)
        cout << "Computer selected Rock\n\n";
    if (x == 2)
        cout << "Computer selected Paper\n\n";
    if (x == 3)
        cout << "Computer selected Scissors\n\n";
    
    if (x == y)
        cout << "TIE! :P\n\n";
    else if (x == 1 && y == 2)
        cout << "~~~YOU WIN!~~~\n\n";
    else if (x == 1 && y == 3)
        cout << "You Lose :(\n\n";
    else if (x == 2 && y == 1)
        cout << "You Lose :(\n\n";
    else if (x == 2 && y == 3)
        cout << "~~~YOU WIN!~~~\n\n";
    else if (x == 3 && y == 1)
        cout << "~~~YOU WIN!~~~\n\n";
    else if (x == 3 && y == 2)
        cout << "You Lose :(\n\n";
}

int main(){
    unsigned seed = time(0);
    srand(seed);
    int aiPlay, uPlay;
    aiPlay =(rand() % (3-1+1)) + 1;
    uPlay = rpsMenu();
    while ( uPlay != 0 ) {
        rpsCalc(aiPlay,uPlay);
        aiPlay =(rand() % (3-1+1)) + 1;
        uPlay = rpsMenu();
    }
}
