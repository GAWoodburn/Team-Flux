//Robert Knar, rknar@dmacc.edu, 2.4.2020
//Insert other group members here

/*
This program is a choose your own adventure game based around a theme park. It will start off by giving you a personality test to determine which part
of the theme park will fit you best. Once it assigns a part of the park to you, you can venture around until you have no more money or you opt to leave the park. There will be a variety of ways where you can increase your spending money so that you can stay in the park longer too.
*/

#include "ChooseYourAdventure.h"
#include <iostream>
#include <string>

using namespace std;

ChooseYourAdventure::ChooseYourAdventure(int &personalityTestInput) {

	//Start of personality test.
	cout << "Welcome to Theme Park Adventure!" << endl; //The name of the game can be changed. This one is dumb.
	cout << "To begin the personality test, press 1. To exit the game, press 0." << endl;
	cin >> startOrEndGame;

	while (0 != startOrEndGame && 1 != startOrEndGame)
	{
		cout << "Invalid input." << endl;
		cout << "To begin the personality test, press 1. To exit the game, press 0." << endl;
		cin >> startOrEndGame;
	}

	// Elijah added the following if/else statement in case the user inputs zero

	if (startOrEndGame == 0) {
		personalityTestInput = 6;
	}
	else {
		//Don't know how everyone wants to format this. This is how it will be for now. Let me know if you want to modify spacing in a certain way.
		cout << "This personality test will determine which part of the theme park will be best for you." << endl;
		cout << "Just make sure to enter a number that corresponds to the test." << endl;
		//We can always modify this part team.
		cout << "Question:" << endl;
		cout << "You have just found out that you have the day off from all scheduled activities. What do you do?" << endl;
		cout << "1. Barricade yourself indoors and watch Spongebob Squarepants all day while eating candy and ice cream." << endl; // Kiddie park
		cout << "2. Call up your friends and tell them you are getting the boat ready to go out to the lake all day." << endl; // Waterpark
		cout << "3. Whip out your computer and start gathering data for how to assemble your fantasy football team for the high-stakes league you are in." << endl; // casino
		cout << "4. Drive over to the local airport and take those skydiving lessons like you have always wanted to." << endl; // thrill park (roller park)
		cout << "5. Hop on your gaming rig and play online with your buddies, all while chugging Mountain Dew for 24 hours." << endl; // arcade

		while (1 != personalityTestInput && 2 != personalityTestInput && 3 != personalityTestInput && 4 != personalityTestInput && 5 != personalityTestInput && 0 != personalityTestInput)
		{
			cout << "Invalid personality test input. Please enter a number corresponding to the above numbers." << endl;
			cin >> personalityTestInput;
		}

		cout << "Determining best part of theme park to fit your needs..." << endl; //Can maybe put fancy sleep statement here.
		cout << "Okay, got it!" << endl;
	}
	//If statements will start here.
}
