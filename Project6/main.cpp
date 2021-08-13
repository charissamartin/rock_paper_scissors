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

int printMenu(){
start:
    char beeboop;
    int boobeep;
    cout << "Play game: Y  \nQuit: X\nEnter selection.\n";
    cin >> beeboop;
    if (beeboop == 'y' || beeboop == 'Y'){
        cout << "Rock, Paper, or Scissors?\n Enter 1 for Rock\n Enter 2 for Paper\n Enter 3 for Scissors\n";
        cin >> boobeep;
        return boobeep;
}
    else if (beeboop == 'x' || beeboop == 'X'){
        cout << "BYE! :D\n";
        exit(0);
        
    }
    else {
        cout << "Invalid Selection\n";
        goto start;
    }
}
    
void printResult(int ai, int mii) {
    if (ai == mii){
        cout << "TIE! :P\n";
    }
    else if (ai == 1 && mii == 2)
        cout << "~~~YOU WIN!~~~\n";
    else if (ai == 1 && mii == 3)
        cout << "You Lose :(\n";
    else if (ai == 2 && mii == 1)
        cout << "You Lose :(\n";
    else if (ai == 2 && mii == 3)
        cout << "~~~YOU WIN!~~~\n";
    else if (ai == 3 && mii == 1)
        cout << "~~~YOU WIN!~~~\n";
    else if (ai == 3 && mii == 2)
        cout << "You Lose :(\n";
}

int main() {
    unsigned seed = time(0);
    bool t = true;
    int aiMove;
    char playagain;
    srand(seed);
    while (t == true) {
        int y = printMenu();
        aiMove =(rand() % (3-1+1)) + 1;
        cout << "My move: ";
        if (y == 1)
            cout << "Rock\n";
        if (y ==2)
            cout << "Paper\n";
        if (y == 3)
            cout << "Scissors\n";
            cout << "Computer's move: ";
        if (aiMove == 1)
            cout << "Rock\n";
        if (aiMove ==2)
            cout << "Paper\n";
        if (aiMove == 3)
            cout << "Scissors\n";
        printResult(aiMove, y);
            cout << "Press Y to play again!\n";
        cin >> playagain;
        if (playagain != 'y' && playagain != 'Y')
            t = false;
    }
    return 0;
}
