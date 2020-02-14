// Authors: Elijah Morishita, Robert Knar, Gabrial Woodburn, and Jason Shi
// elmorishita@dmacc.edu, goosedamoose22@gmail.com, gwoodburn@dmacc.edu, jasonshijian@gmail.com
// 2/8/2020
// Large Group Project - Text Adventure Game - This program is a text adventure game with a theme park theme.
// Your character travels throughtout the park initially based on their personality, later they'll move about based own decisions and luck, 
// they complete the game if the don't die or run out of money (the money system is still under construction)


#include <iostream>
#include "ChooseYourAdventure.h" // Intro and Personality Test - author: Robert Knar
#include "WaterPark.h" // The WaterPark class - author: Elijah Morishita
#include "Casino.h" // The Casino class - author: Jason Shi
#include "Arcade.h" // The Arcade class - author: Gabrial Woodburn
#include "KiddiePark.h" // The Kiddie Park - author: Robert Knarr
using namespace std;

// global variables used for the switch statement to travel throughout the park
const int ONE = 1;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;

int main() {

    int testResult; // used initially for the personality test, later for moving through the entire park

    ChooseYourAdventure chooseObj(testResult); // Intro and Personality Test
    int skip = ONE; // used to access the main menu after the personality exam

    double playerMoney; // used to pass the amount of money the player throughout the entire park
    bool isPlayerdead = false; // used to end the game if the player dies

    bool endGame = true; // the flag to end the program

    while (endGame == true) {

        // Main Menu
        if (skip == TWO) { // if statement used to skip the menu the first time since they just took the personality test
            cout << " \nHow would you like to continue your journey?\n"
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

        // I added curley braces between the cases as I discovered that's the only way to call an object in a switch statement :)
        switch (testResult) {
        case ONE: {
            // kiddie park
            cout << " The Kidde Park\n";
            KiddiePark kiddieParkObj; // the kiddie park
            break;
        }
        case TWO: {
            cout << " The Water Park\n";
            WaterPark waterObj(playerMoney, isPlayerdead); // The waterpark
            if (isPlayerdead == true) {
                endGame = false; // if the player is dead the game ends
            }
            break;
        }
        case THREE: {
            cout << " The Casino\n";
            cout << " **** STILL UNDER CONSTRUCTION ****\n\n";
            //Casino blackJackObj; // The casino (BlackJack Game)
            break;
        }
        case FOUR: {
            cout << " The Thrill Park\n";
            cout << " **** STILL UNDER CONSTRUCTION ****\n\n";
            // thrill park 
            break;
        }
        case FIVE: {
            cout << " The Arcade\n";
            Arcade arcadeObj; // The arcade
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
        system("PAUSE");
        return 0;
    }   