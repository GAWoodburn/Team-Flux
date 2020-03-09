//Robert Knar, rknar@dmacc.edu, 2.10.2020

/*
This file will be defining what is contained in the header file of KiddiePark
*/

#include "KiddiePark.h"
#include <stdlib.h>

KiddiePark::KiddiePark(int &playerMoney, bool &playerDeath)
{
	//Upon construction, player is allocated money.		
	SetTotalMoney(playerMoney);

	RunKiddieParkTextAdventure();

	playerMoney = GetTotalMoney();
}

KiddiePark::~KiddiePark()
{
}
//DisplayChoices will display the menu and the player can choose where they want to go.
char KiddiePark::DisplayChoices()
{
	char playerInput;

	cout << "1. Giant Slide" << endl;
	cout << "2. Playground" << endl;
	cout << "3. Cotton Candy Stall" << endl;
	cout << "4. Bathroom with abnormally small toilets that were definitely meant for five year olds" << endl;
	cout << "5. Mini Dragon Coaster" << endl;
	cin >> playerInput;

	while ('1' != playerInput && '2' != playerInput && '3' != playerInput && '4' != playerInput && '5' != playerInput)
	{
		cout << "You turd. Enter a number that appears on the list: " << endl;
		cout << "1. Giant Slide" << endl;
		cout << "2. Playground" << endl;
		cout << "3. Cotton Candy Stall" << endl;
		cout << "4. Bathroom with abnormally small toilets that were definitely meant for five year olds" << endl;
		cout << "5. Mini Dragon Coaster" << endl;
		cin >> playerInput;
	}

	return playerInput;
}

void KiddiePark::SetTotalMoney(int &totalMoney)
{
	TotalMoney = totalMoney;
}

int KiddiePark::GetTotalMoney()
{
	return TotalMoney;
}
//This will run the kiddie park adventure. The player will have multiple opportunities to play this part of the park.
void KiddiePark::RunKiddieParkTextAdventure()
{
	char playKiddieParkAgainInput;

	do
	{
		char playerInput;
		char slideChoiceInput;
		char cottonCandyInput;
		char insideBathroomStallActivity;
		char wipe;
		char washHands;
		char raiseHands;
		int walletMoney;
		int playerMoney;
		int moneyReminder;
		bool gameLost = false;

		moneyReminder = GetTotalMoney();

		if (0 > moneyReminder)
		{
			cout << "            You are officially out of cash.\n"
				<< " ===================== GAME OVER ======================\n"
				<< " ======================================================\n\n";
			playerDeath = true; // the player ran out of $$, GAME OVER
			break;
		}

		cout << "Remember... you have " << moneyReminder << " dollar(s) left." << endl;
		cout << "You are in the KIDDIE PARK." << endl;
		cout << "We know you are just dying to get started so pick a number corresponding to where you want to go in the park: " << endl;

		playerInput = DisplayChoices();

		if ('1' == playerInput)
		{
			cout << "Ah, yes. The Giant Slide. Good choice." << endl;
			cout << "You begin to make your way over to the slide." << endl;
			cout << "You grab your potato sack from the worker and start climbing the steps to get to the top." << endl;
			cout << "Once you are at the top, you notice a little kid staring at you." << endl;
			cout << "You finally ask the kid what they are staring at." << endl;
			cout << "The kid says he wants to race you down the slide for 50 dollars." << endl;
			cout << "You start thinking about how psychotic this kid is." << endl;
			cout << "You agree you will race him." << endl;
			cout << "Which slide will you choose?" << endl;
			cout << "1. The Red Slide" << endl;
			cout << "2. The Yellow Slide" << endl;
			cout << "3. The Blue Slide" << endl;
			cin >> slideChoiceInput;

			while ('1' != slideChoiceInput && '2' != slideChoiceInput && '3' != slideChoiceInput)
			{
				cout << "Are you kidding me right now? Pick a number that is in the list!" << endl;
				cout << "1. The Red Slide" << endl;
				cout << "2. The Yellow Slide" << endl;
				cout << "3. The Blue Slide" << endl;
				cin >> slideChoiceInput;
			}

			if ('1' == slideChoiceInput)
			{
				cout << "You choose the Red Slide." << endl;
				cout << "You say to the kid that on the count of three you will go." << endl;
				cout << "1" << endl;
				cout << "2..." << endl;
				cout << "The kid took off early!" << endl;
				cout << "He beats you to the bottom of the slide. That cheater!" << endl;
				cout << "The kid screams pay up!" << endl;
				cout << "People are now looking. Looks like you have to pay up." << endl;

				playerMoney = GetTotalMoney();
				playerMoney -= 50; //50 represents the money you bet with the kid.

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
			}
			else if ('2' == slideChoiceInput)
			{
				cout << "You choose the Yellow Slide." << endl;
				cout << "You start getting ready to go down the slide." << endl;
				cout << "You begin to put the potato sack over your legs when you trip and fall!" << endl;
				cout << "All of your money falls out of your pocket." << endl;
				cout << "The kid suddenly lunges at you and grabs 50 dollars from your money pile." << endl;
				cout << "They jump on the Red Slide and run off once they get to the bottom." << endl;
				cout << "Looks like you lost 50 dollars." << endl;

				playerMoney = GetTotalMoney();
				playerMoney -= 50;

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
			}
			else if ('3' == slideChoiceInput)
			{
				cout << "You pick the Blue Slide." << endl;
				cout << "The dad of the kid sees that his kid is racing someone yet again." << endl;
				cout << "He waits for the two of you to put on your potato sacks." << endl;
				cout << "He yells from below Ready Set Go!" << endl;
				cout << "You start sliding down the slide extremely slowly." << endl;
				cout << "The kid whizzes past you on the Yellow Slide, beating you by ten seconds." << endl;
				cout << "You finally get to the bottom and the kid calls you and utter disgrace to your family." << endl;
				cout << "His father comes up to you and insults you for losing to someone the kid's age." << endl;
				cout << "He punches you in the face and takes 50 dollars from you." << endl;
				cout << "Nice job being a failure." << endl;

				playerMoney = GetTotalMoney();
				playerMoney -= 50;

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
			}
		}
		else if ('2' == playerInput)
		{
			cout << "The Playground? You chose the Playground? Well, alright..." << endl;
			cout << "Ya know what? Sorry, but you are gonna have to lose 10 dollars for going to the playground. This is just a lame place." << endl;
			cout << "Why would you pick this? Go somewhere else." << endl;

			playerMoney = GetTotalMoney();
			playerMoney -= 10; //10 is the money you lose for going to the playground.

			if (0 > playerMoney)
			{
				cout << "            You are officially out of cash.\n"
					<< " ===================== GAME OVER ======================\n"
					<< " ======================================================\n\n";
				playerDeath = true; // the player ran out of $$, GAME OVER
				break;
			}

			SetTotalMoney(playerMoney);
		}
		else if ('3' == playerInput)
		{
			cout << "The Cotton Candy Stall! Great choice!" << endl;
			cout << "Would you like:" << endl;
			cout << "1. Blue Cotton Candy" << endl;
			cout << "2. Pink Cotton Candy" << endl;
			cout << "3. Both" << endl;
			cin >> cottonCandyInput;

			while ('1' != cottonCandyInput && '2' != cottonCandyInput && '3' != cottonCandyInput)
			{
				cout << "Jeez. Enter a correct number!" << endl;
				cout << "Would you like:" << endl;
				cout << "1. Blue Cotton Candy" << endl;
				cout << "2. Pink Cotton Candy" << endl;
				cout << "3. Both" << endl;
				cin >> cottonCandyInput;
			}

			if ('1' == cottonCandyInput)
			{
				cout << "You chose Blue Cotton Candy." << endl;
				cout << "The sketchy man behind the cotton candy stall says you owe him 20 dollars." << endl;
				cout << "You think that this is quite outrageous, but you don't say it out loud." << endl;
				cout << "You hand the sketchy man 20 dollars." << endl;

				playerMoney = GetTotalMoney();
				playerMoney -= 20;

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
			}
			else if ('2' == cottonCandyInput)
			{
				cout << "You chose Pink Cotton Candy." << endl;
				cout << "The sketchy man behind the counter demands you pay him 10 dollars." << endl;
				cout << "You calmly hand over the money, not questioning his sketchy ways." << endl;

				playerMoney = GetTotalMoney();
				playerMoney -= 10;
				SetTotalMoney(playerMoney);

				cout << "As you walk away, you notice a kid balling their eyes out." << endl;
				cout << "The sketchy man announced that they are all out of Pink Cotton Candy." << endl;
				cout << "You see the mother looking around frantically, trying to not get embarrassed from the loud crying." << endl;
				cout << "You walk over to her and offer to give her your Pink Cotton Candy." << endl;
				cout << "She thanks you so much and quickly steals it away from you. She fishes around in her pocket and pulls out a 20." << endl;
				cout << "She tells you to keep the money. 20 dollars! Wow!" << endl;

				playerMoney += 20;

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
			}
			else if ('3' == cottonCandyInput)
			{
				cout << "You chose to get both Cotton Candy Flavors." << endl;
				cout << "The sketchy man serving the cotton candy is flustered. He has never done this before." << endl;
				cout << "He tells you that you owe a Zenar. You don't know what that is." << endl;
				cout << "He starts yelling things in languages that you have never heard before." << endl;
				cout << "Storms start to form overhead and everybody begins to scream." << endl;
				cout << "The Earth starts splitting and people begin falling into the cracks." << endl;
				cout << "The sketchy man declares he is an alien from the planey Marxgo and can't take this anymore." << endl;
				cout << "A crack starts forming underneath you. You try to run away, but you just aren't athletic enough." << endl;
				cout << "You fall in the crack and perish!" << endl;

				playerMoney = GetTotalMoney();
				playerMoney = 0; //You lose the game here.

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
				gameLost = true;
			}
		}
		else if ('4' == playerInput)
		{
			cout << "The Bathroom? You just got here how do you have to go to the bathroom already? Okay fine." << endl;
			cout << "You walk to the bathroom. You head inside." << endl;
			cout << "Hate to get personal... but number 1 or number 2 (press number relating to what you want to do)?" << endl;
			cin >> insideBathroomStallActivity;

			while ('1' != insideBathroomStallActivity && '2' != insideBathroomStallActivity)
			{
				cout << "1 or 2!" << endl;
				cin >> insideBathroomStallActivity;
			}

			if ('1' == insideBathroomStallActivity)
			{
				cout << "Well that was easy." << endl;
			}
			else if ('2' == insideBathroomStallActivity)
			{
				cout << "Wipe? 1 for 'yes' and 2 for 'no':" << endl;
				cin >> wipe;

				while ('1' != wipe && '2' != wipe)
				{
					cout << "Wipe? 1 for 'yes' and 2 for 'no':" << endl;
					cin >> wipe;
				}

				if ('2' == wipe)
				{
					cout << "You hear a rumbling from the toilet. What is that?" << endl;
					cout << "It's Mahpoo! The toilet god." << endl;
					cout << "He screams at you for not wiping. How filthy!" << endl;
					cout << "He decides to take you to the toilet realm with him. Your days on Earth are done. You die." << endl;

					playerMoney = GetTotalMoney();
					playerMoney = 0; //End of game.

					if (0 > playerMoney)
					{
						cout << "            You are officially out of cash.\n"
							<< " ===================== GAME OVER ======================\n"
							<< " ======================================================\n\n";
						playerDeath = true; // the player ran out of $$, GAME OVER
						break;
					}

					SetTotalMoney(playerMoney);
					gameLost = true;
				}
			}

			cout << "You finish up and go to the sink. Wash your hands? 1 for 'yes' and 2 for 'no':" << endl;
			cin >> washHands;

			while ('1' != washHands && '2' != washHands)
			{
				cout << "1 for 'yes' and 2 for 'no':" << endl;
				cin >> washHands;
			}

			if ('2' == washHands)
			{
				cout << "A health inspector sees you try to leave without washing your hands." << endl;
				cout << "He tells you there is a new law in place that states if you don't wash your hands, you have to pay 5 dollars." << endl;
				cout << "Next time wash your hands!" << endl;

				playerMoney = GetTotalMoney();
				playerMoney -= 5; //This is the money you lose for not washing your hands.

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
			}

			cout << "You exit the bathroom." << endl;
		}
		else if ('5' == playerInput)
		{
			cout << "You choose to go to the Mini Dragon Coaster." << endl;
			cout << "You walk over and notice a short line. Parents are standing with their children contemplating why they are in this section of the park when they could be in the casino." << endl;
			cout << "You are wondering the same thing." << endl;
			cout << "After some waiting, you get to the front of the line. It is now your turn to board." << endl;
			cout << "The operator says some things and you guys are off!" << endl;
			cout << "You get to the top of the terrible 10 foot drop. Want to raise your hands in the air to increase the excitement?" << endl;
			cout << "Press 1 to raise your hands or 2 to keep them where they are:" << endl;
			cin >> raiseHands;

			while ('1' != raiseHands && '2' != raiseHands)
			{
				cout << "Press 1 to raise your hands or 2 to keep them where they are:" << endl;
				cin >> raiseHands;
			}

			if ('1' == raiseHands)
			{
				cout << "You raise your hands cause you don't really care at this point." << endl;
				cout << "You begin the descent down the mini coaster. In the distance you notice a bar that is pretty close to the seats of the coaster. Maybe 15 feet overhead." << endl;
				cout << "Wait... that looks much lower than you think." << endl;
				cout << "Slice! Your arms come off after hitting the bar! There is blood everywhere!" << endl;
				cout << "You hear screams and start to black out." << endl;
				cout << "The last thing you hear is one of the parents asking if they can go to the casino now." << endl;
				cout << "You die." << endl;

				playerMoney = GetTotalMoney();
				playerMoney = 0; //You died.

				if (0 > playerMoney)
				{
					cout << "            You are officially out of cash.\n"
						<< " ===================== GAME OVER ======================\n"
						<< " ======================================================\n\n";
					playerDeath = true; // the player ran out of $$, GAME OVER
					break;
				}

				SetTotalMoney(playerMoney);
				gameLost = true;
			}
			else if ('2' == raiseHands)
			{
				cout << "You deal with the boring ride. You can't wait to get off." << endl;
				cout << "As you get off you notice someone left their wallet." << endl;
				cout << "You open it up to see who it belongs to." << endl;
				cout << "You notice there is a lot of money sitting in there." << endl;
				cout << "What do you do? Press 1 to take the money or 2 to bring it to lost and found:" << endl;
				cin >> walletMoney;

				while ('1' != walletMoney && '2' != walletMoney)
				{
					cout << "What do you do? Press 1 to take the money or 2 to bring it to lost and found:" << endl;
				}

				if ('1' == walletMoney)
				{
					cout << "You look around to see if anyone is watching. You decide to take the money." << endl;
					cout << "Wow! 15 dollars. Rock on!" << endl;
					cout << "Nobody sees you take the money. You decide to place the wallet back down and act like nothing happened." << endl;

					playerMoney = GetTotalMoney();
					playerMoney += 15; //This is the money you get from the wallet.

					if (0 > playerMoney)
					{
						cout << "            You are officially out of cash.\n"
							<< " ===================== GAME OVER ======================\n"
							<< " ======================================================\n\n";
						playerDeath = true; // the player ran out of $$, GAME OVER
						break;
					}

					SetTotalMoney(playerMoney);
				}
				else if ('2' == walletMoney)
				{
					cout << "You decide to bring the wallet to lost and found." << endl;
					cout << "As you are walking over, you hear some shouting in the distance." << endl;
					cout << "You hear a dad screaming something over and over." << endl;
					cout << "You notice it was the dad that was standing by the Giant Slide earlier." << endl;
					cout << "When he gets close enough you ask if this is his wallet." << endl;
					cout << "He screams that you have stolen his wallet and he punches you in the face." << endl;
					cout << "You are knocked out cold." << endl;
					cout << "When you wake, you are groggy. You check your posessions to see if you still have everything." << endl;
					cout << "You notice that you have 15 dollars missing." << endl;
					cout << "The dad took it while you were knocked out." << endl;

					playerMoney = GetTotalMoney();
					playerMoney -= 15; //Money you lose.

					if (0 > playerMoney)
					{
						cout << "            You are officially out of cash.\n"
							<< " ===================== GAME OVER ======================\n"
							<< " ======================================================\n\n"; 
						playerDeath = true; // the player ran out of $$, GAME OVER
						break;
					}

					SetTotalMoney(playerMoney);
				}
			}
		}

		if (true == gameLost)
		{
			break;
		}

		cout << "This has definitely been quite the adventure. Would you like to do more stuff in the Kiddie Park?" << endl;
		cout << "Press 1 to have some more fun in the Kiddie Park or anything else to leave the Kiddie Park:" << endl;
		cin >> playKiddieParkAgainInput;

	} while (playKiddieParkAgainInput == '1');
}