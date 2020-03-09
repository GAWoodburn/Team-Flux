// Authors: Elijah Morishita, Robert Knar, Gabrial Woodburn, and Jason Shi
// elmorishita@dmacc.edu, goosedamoose22@gmail.com, gwoodburn@dmacc.edu, jasonshijian@gmail.com
// 2/8/2020
// Large Group Project - Text Adventure Game - This program is a text adventure game with a theme park theme.
// Your character travels throughtout the park initially based on their personality, later they'll move about based own decisions and luck, 
// they complete the game if the don't die or run out of money.


#include <iostream>
#include "ChooseYourAdventure.h" // Intro and Personality Test - author: Robert Knar
#include "WaterPark.h" // The WaterPark class - author: Elijah Morishita
#include "Casino.h" // The Casino class - author: Jason Shi
#include "Arcade.h" // The Arcade class - author: Gabrial Woodburn
#include "KiddiePark.h" // The Kiddie Park - author: Robert Knarr
#include "ThrillRides.h" // The Thrill Park - author: Gabrial Woodburn
using namespace std;

// global variables used for the switch statement to travel throughout the park
const int ONE = 1;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;

// forward declaration
void menu(int&, int&, int&);
void options(int&, bool&, int&, bool&);

int main() {

    int testResult; // used initially for the personality test, later for moving through the entire park

    ChooseYourAdventure chooseObj(testResult); // Intro and Personality Test

    int playerMoney = 100; // used to pass the amount of money the player throughout the entire park
    bool isPlayerDead = false; // used to end the game if the player dies or runs out of money
    bool endGame = true; // the flag to end the program
    int skip = ONE; // used to access the main menu after the personality exam

    while (endGame == true) {

        menu(playerMoney, testResult, skip); // Main Menu

        options(playerMoney, isPlayerDead, testResult, endGame); // the switch statement the main menu uses

    }
        system("PAUSE");
        return 0;
    }   


void menu(int &playerMoney, int &testResult, int &skip) { // Main Menu
    
    if (skip == TWO) { // if statement used to skip the menu the first time since they just took the personality test
        cout << " \nHow would you like to continue your journey?\n"
            << " Account Balance: " << playerMoney << "\n"
            << " 1) Go to the Kiddie Park.\n"
            << " 2) Go to the Water Park.\n"
            << " 3) Go to the Casino.\n"
            << " 4) Go to the Thrill Park\n"
            << " 5) Go to the Arcade\n"
            << " 6) Leave the Park\n"
            << " ENTER 1 - 6: ";
        cin >> testResult;
    }
    skip = TWO; // now the park menu will appear going forward

    // checking user input
    while (testResult != ONE && testResult != TWO && testResult != THREE && testResult != FOUR && testResult != FIVE && testResult != SIX) {
        cout << " Invalid input, please ENTER 1 - 6: ";
        cin >> testResult;
    }
}

void options(int &playerMoney, bool &isPlayerDead, int &testResult, bool &endGame) { // the switch statement the main menu uses

    // I added curley braces between the cases as I discovered that's the only way to call an object in a switch statement :)
    switch (testResult) {
    case ONE: {
        // kiddie park
        cout << " The Kidde Park\n";
        KiddiePark kiddieParkObj(playerMoney, isPlayerDead); // the kiddie park
        if (isPlayerDead == true) {
            endGame = false; // if the player ran out of money or is dead the game ends
        }
        break;
    }
    case TWO: {
        cout << " The Water Park\n";
        WaterPark waterObj(playerMoney, isPlayerDead); // The waterpark
        if (isPlayerDead == true) {
            endGame = false; // if the player ran out of money or is dead the game ends
        }
        break;
    }
    case THREE: {
        cout << " The Casino\n";
        Casino blackJackObj(playerMoney, isPlayerDead); // The casino (BlackJack Game)
        if (isPlayerDead == true) {
            endGame = false; // if the player ran out of money or is dead the game ends
        }
        break;
    }
    case FOUR: {
        cout << " The Thrill Park\n";
        ThrillRide thrillRideObj(playerMoney, isPlayerDead); // the thrill park
        if (isPlayerDead == true) {
            endGame = false; // if the player ran out of money or is dead the game ends
        }
        break;
    }
    case FIVE: {
        cout << " The Arcade\n";
        Arcade arcadeObj(playerMoney, isPlayerDead); // The arcade
        if (isPlayerDead == true) {
            endGame = false;
        }
        break;
    }
    case SIX: {
        // leave the park (end the program)
        cout << " Thanks for playing, hope you come back soon! :)\n\n";
        endGame = false;
        break;
    }
    }
}
