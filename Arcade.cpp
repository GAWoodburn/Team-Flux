#include "Arcade.h"

// ** CIS164 - 22264
// ** Week #3 - Topic A2 - Group Project
// ** Theme Park Adventure 
// ** Gabriel Woodburn, February 2, 2020
// ** Email: gwoodburn@dmacc.edu
// ** This program will contain a pathway "Arcane Arcade" within the Theme Park Adventure Game

#include <iostream>
#include <string>
using namespace std;

Arcade::Arcade(int& playerMoney, bool& playerDeath) {
	playerDeath = false;
	while (playerDeath == false)
	{
	cout << delimiter;
	cout << "\nAs you walk around the park, you notice a mysterious tent... \n";
	cout << "\nYou're not sure what, but something draws you towards it... \n";
	cout << "\nAs you get closer an old wooden sign reads: \n";
	cout << "\n\t=================";
	cout << "\n\t= ARCANE ARCADE =";
	cout << "\n\t=================\n";
	cout << "\n You decide to step inside, and see a large wooden desk with games and prices...";
	cout << "\n\n How do you wish to expell your lifeforce?";
	cout << "\n (*Huh...expell MY lifeforce? Yeah, right.*)\n";

	here:  // Jump to here if player wishes to choose another game
		menu(decision, delimiter, playerMoney);  // Menu passing in char decision, string delimiter, playerMoney
		while (decision != 'A' && decision != 'a' && decision != 'B' && decision != 'b' && decision != 'C' && decision != 'c' && decision != 'D' && decision != 'd'
			&& decision != 'E' && decision != 'e' && decision != 'F' && decision != 'f')  // Verify input is on the switch menu
		{
			cout << "\nYour options are 'A', or 'B', 'C', or 'D'!";  // Throw error if not valid
			cout << "\n\nEnter your decision: ";  // Enter user input again
			cin >> decision;
		}
		switch (decision)  // Switch menu with char decision
		{
		case 'A':  // Pac Man
		case 'a':
			playerMoney = playerMoney - COSTPACMAN;  // Accumulate
			cout << "\n\nYou brush away the cobwebs as you approach the Pac-Man machine... ";
			cout << "\n\nAs you insert your money the machine begins to whir loudly!";
			cout << "\n\nYou step back if only for a second, as you are pulled into the machine!";
			cout << "\n\nYou notice strawberries as tall as yourself and a strange yellow reflection on what appears to be a maze...";
			cout << "\n\nExcitement and terror take over as you realize you've transformed into Pac-Man and you must solve the puzzle or perish!";
			cout << "\n\nFilled with adrenaline you clear half of the levels orbs and are filled with confidence!";
			cout << "\n\nYou grab a corner orb and devour Inky, Blinky, and Clyde!!!";
			cout << "\n\nJust as you've almost completed the level you're suddenly cornered by Pinky... ";
			cout << "\n\nDodge to the right or juke left?";
			cout << "\n\nEnter your choice ('R', 'L'): ";
			cin >> choice;
			cout << delimiter;

			while (choice != 'R' && choice != 'r' && choice != 'l' && choice != 'L')  // Validate input
			{
				cout << "Your options are ('R' or 'L'): ";
				cin >> choice;
			}
			if (choice == 'R' || choice == 'r')  // If choice right
			{
				cout << "\n\nAs you dash to the right, Pinky runs left!!";
				cout << "\n\nThis may be your last chance!!";
				cout << "\n\nYou decide to make your move...";
				cout << "\n\nQuickly realizing you've dodged Pinky, you grab the remaining orbs!";
				cout << "\n\nBut before you can gloat in it...";
				cout << "\n\nYou're sucked out of the game and returned to the ARCANE ARCADE...\n";
				break;
			}
			else if (choice == 'L' || choice == 'l')  // If choice left
			{
				cout << "\n\nYou feel a sharp pain on your side as Pinky grabs you...";
				cout << "\n\nThe game ends as you're teleported out of the game...";
				cout << "\n\nYou check your side... bruised!";
				cout << "\n\nFive dollars floats out of your wallet and into the machine!";
				cout << "\n\nThe screen lights up with Pinky dashing across the screen chuckling...";
				cout << "\n\nBetter luck next time!";
				playerMoney = playerMoney - PENALTY;  // Accumulate
				break;
			}
		case 'B':  // Mortal Kombat
		case 'b':
			playerMoney = playerMoney - COSTMORTALKOMBAT;  // Accumulate
			cout << "\n\nPOW POW POW \t HYAGHHH";
			cout << "\nWELCOME TO MOTRAL COMBAT";
			cout << "\nYou quickly glance around at the arena you've appeared in...";
			cout << "\nLava surrounds the arena...";
			cout << "\n\nSuddenly Scorpion appears!!";
			cout << "\nScorpion: Ssssoo, " << name << ", you wissssh to challenge me???";
			cout << "\nScorpion: How foolissssshhh\n\n";
			cout << "'HA! That's what you think! Prepare yourself!'";
			cout << "\nYou begin to fight but it quickly becomes apparent Scorpion's agility and ";
			cout << "\nability to control fire will be an issue as he hurls fireballs at you across the arena!!!";
			cout << "\nScorpion hurls another fireball in your direction, but you narrowly evade the blow and High Kick him!";
			cout << "\nYou connect another strike with a Teleport Punch, but he's too resilient to normal strikes...";
			cout << "\n\nHe lands quick counter-strikes as he retaliates!!!";
			cout << "\nYou quickly realize you must devise a plan to strategically handle Scropion...";
			cout << "\nYou decide you should hurl him over the ledge of the arena or onto the spear behind him... ";
			cout << "\n\nWhich do you choose? ('L', 'S'): ";
			cin >> choice;
			cout << delimiter;

			while (choice != 'L' && choice != 'l' && choice != 'S' && choice != 's')  // Validate input
			{
				cout << "\nYour choices are 'L' for ledge or 'S' for spear: ";
				cin >> choice;
			}
			if (choice == 'L' || choice == 'l')  // Choice for ledge
			{
				playerMoney = playerMoney - PENALTY;
				cout << "\n\nYou hurl him over the ledge and hope it's enough to stop him!";
				cout << "\n\nAs you turn to leave, Scorpion jumps out of the lava and hurls it back at you!";
				cout << "\n\nThe lava burns your legs as you are teleported back to the ARCANE ARCADE...";
				cout << "\n\nA burn appears on your legs as another $5 floats out of your wallet and into the machine...";
				cout << "\n\nA fireball is thrown across the screen, as you step back in fear...";
				break;
			}
			else if (choice == 'S' || choice == 's')  // Choice for spear
			{
				cout << "\nYou countergrab Scorpion's Kunai Strike and throw him onto the spear, severing his arm!";
				cout << "\nAs you approach him, a loud voice is heard: ";
				cout << "\n\n!!! FINISH HIM !!!";
				cout << "\nFINALLY all the hours you've poured into the game while playing in your basement are paying off...";
				cout << "\nYou recall Kung Lao's famous Fatality... 'Meat Slicer' as you grab the spear and SLICE and DICE!!";
				cout << "\nScorpion falls to pieces as you hear Kung Lao's voice: ";
				cout << "\n'Deli Meat Anyone'???";
				cout << "\n\nYou're teleported back to the ARCANE ARCADE...";
				break;
			}
		case 'C':  // Polybius
		case 'c':
			cout << "\n\nWelcome to Polybius!!!";
			cout << "\nYou approach the very unusual machine...";
			cout << "\nIt's seemingly harmless with bright lights and shapes streaming across it's screen...";
			cout << "\n\nA message appears to you...";
			cout << "\n'Have you ever played a game that consumed you?'";
			cout << "\nSurely you may think you have...?";
			cout << "\nRemembering faintly the ridiculous conspiracy theories behind this game, 'Polybius' ";
			cout << "\nYou can't help yourself but feel intrigued...";
			cout << "\n\n*A game can never consume me, surely, it's just a game after all...!*";
			cout << "\nYou look for a place to insert your money, but there is none!";
			cout << "\n*What's the harm in taking a quick play for free...*";
			cout << "\n\nYou begin to play the game and quickly get into the groove of the upbeat music and attractive lighting";
			cout << "\nIn fact...";
			cout << "\nAs a new player, you've gotten the hang of the game insanely quickly!!";
			cout << "\nBut you realize something horrid...";
			cout << "\nYou've become so entranced with the game that a minute passing was really an entire hour!!!";
			cout << "\n\nYou become soaked in sweat and start to shake with fear!";
			cout << "\n*Will I be stuck here forever playing Polybius?*";
			cout << "\nYour only hope is to tear yourself away, but you feel so safe playing the game...";
			cout << "\n\nWhat do you decide to do? ('T' to tear yourself away, 'P' to keep playing)? ";
			cin >> choice;
			cout << delimiter;

			while (choice != 'T' && choice != 't' && choice != 'P' && choice != 'p')  // Validate input
			{
				cout << "Your choices are 'T' to tear yourself away, or 'P' to keep playing: ";
				cin >> choice;
			}
			if (choice == 'T' || choice == 't')  // Choice tear yourself away
			{
				playerMoney = playerMoney + REWARD;  // Accumulate
				cout << "\n\nIt takes all of the strength you have, but you rip away from the screen!!";
				cout << "\n\nJust as you're being teleported back into the ARCANE ARCADE...";
				cout << "\n\nThe lights pierce through the screen and try to snatch you up!";
				cout << "\n\nAn evil chuckle can be heard, as a chill goes through your spine...";
				cout << "\n\nYou look for your footing and realize your wallet fell out of your pocket...or was it the game?";
				cout << "\n?????????????: YOU'VE BESTED ME THIS TIME";
				cout << "\n?????????????: Your reward, as promised...";
				cout << "\n\nIn a panic you search your wallet and notice it seems fuller than before?!";
				cout << "\n\nYou count an additional $10...";
				break;
			}
			else if (choice == 'P' || choice == 'p')  // Choice to keep playing
			{
				playerMoney = playerMoney - PENALTY;  // Accumulate
				cout << "\nYou decide to continue playing the mythical, mysterious... POLYBIUS";
				cout << "\n\nAs you sit and play your mind begins to hurt and eyes become strained!";
				cout << "\n\nYou pass out amidst trying to keep up with the everchanging complexity of the game...";
				cout << "\nYou wake up and notice something besides your head is hurting...";
				cout << "\nYou grab your wallet off the floor beside you...";
				cout << "\n\nRealizing you've lost money, you count the remainder and realize the game has stolen $5!!";
				cout << "\nStill, you can't help but feel lucky that's all Polybius took from you...";
				cout << "\n\nYou stand up uneasily, shaking your head in disbelief...";
				break;
			}
		case 'D': // Asteroids 
		case 'd':
			playerMoney = playerMoney - COSTASTEROIDS; // Accumulate
			cout << "\nPEW\tPEW\tPEW";
			cout << "\nYou're teleported into a black abyss...";
			cout << "\n\nNo, wait... you're in space!";
			cout << "\nAs the lights turn on in the spacecraft, you see a command chair several yards in front of you!";
			cout << "\n'COMMANDER: " << name << " , your mission is simple!'";
			cout << "\n\n'SURVIVE!'";
			cout << "\nAsteroids start to pelt the spacecraft as it wobbles up and down, or is it side-to-side??";
			cout << "\nYou aren't sure but you ARE sure that if you don't act soon you'll be flattened by the asteroid field you seemingly have teleported into!";
			cout << "\n\nYou're firing all the firepower your ship has to offer into the asteroids, but the asteroids break apart and continue coming at you once shot!";
			cout << "\nYou vaguley remember a Star Trek movie where Captian Kirk and Spock use a bomb...the GENESIS Bomb!";
			cout << "\nActing quickly you recognize fusion charges in a bag and a quantum battery!!";
			cout << "\n\n*Combining these two devices together will destroy the asteroid field and render my freedom...right?*";
			cout << "\nWith no time to act, you quickly make the decision to detonate the bomb or continue shooting your lasers...";
			cout << "\nEnter your choice ('B' for bomb, 'L' for lasers) ";
			cin >> choice;
			cout << delimiter;

			while (choice != 'B' && choice != 'b' && choice != 'L' && choice != 'l')  // Validate input
			{
				cout << "Your choices are 'B' for bomb or 'L' for lasers: ";
				cin >> choice;
			}
			if (choice == 'B' || choice == 'b')  // Choice for bomb
			{
				playerMoney = playerMoney + REWARD;  // Accumulate
				cout << "\nThanks to your quick decision making, you open the pressurized door and release the GENESIS bomb!";
				cout << "\nThe bomb does in fact destroy the asteroids...";
				cout << "but it also releases smaller asteroids at a higher speed than they were coming originally!";
				cout << "\n\nThe ship takes damage and you are thrown from your COMMANDER chair, but you've survived the onslaught...for now";
				cout << "\nYou are teleported off the floor of the spaceship and back into the ARCANE ARCADE...";
				cout << "\nWith your emotions as high as they are now, you sure wouldn't mind being Spock!";
				cout << "\nRegardless, your emotions will settle and you've escaped with a gift!";
				cout << "\n\nA $10 bill appears on top of the Asteroids machine and you slip it into your wallet...";
				break;
			}
			else if (choice == 'L' || choice == 'l')  // Choice for lasers
			{
				cout << "\nYou attempt to shoot your way out of asteroid field!";
				cout << "\n\nOnly...you are finding it difficult to match all of the asteroids multiplying...";
				cout << "\nThe spaceship is pelted with asteroids and you take cover behind the COMMANDER chair...";
				cout << "\nThe smaller asteroids combine into a large asteroid and strike the panels of the command room!!";
				cout << "\nAs the glass breaks, you are sucked out into space!";
				cout << "\nTrying to hold your breath, you suddenly feel a warm sensation as your lungs release...";
				cout << "\nYou've been spared as you look around the room of the ARCANE ARCADE...";
				cout << "\nBut you can't help but wonder if there was a better option for the situation...";
				break;
			}
		case 'E': // Missle Command
		case 'e':
			playerMoney = playerMoney - COSTMISSLECOMMAND;  // Accumulate
			cout << "\n\nYou are teleported to what appears to be a testing facility of sorts, but you are within a well furnished home!";
			cout << "\nA siren buzzes in the background...";
			cout << "\nFake fruit lies on the table...";
			cout << "\nA launch sequence begins to countdown from 10!!";
			cout << "\n\n10...9...8...";
			cout << "\nYou scramble outside of the house and see a command center!";
			cout << "\n7...6...5...";
			cout << "\nMissles! You can control missles from the command center!";
			cout << "\n4...3...2...";
			cout << "\n\nKnowing your mission ahead of you...you decide to take aim at the incoming enemy missles with your own missles!";
			cout << "\n1...";
			cout << "\nAs the missles begin to fill the sky, you take aim!";
			cout << "\nKnowing that you cannot stop every missle you begin to panic...";
			cout << "\nBut remaining as headstrong as you can, a plan comes into mind!";
			cout << "\n\nYou can either fire your own missles as quickly as you can or try to prioritize the strikes to intercept multiple enemy missles in a single hit...";
			cout << "\n\nWhat's your decision? ('F' to fire rapidly, 'I' to intercept multiple at a time): ";
			cin >> choice;
			cout << delimiter;

			while (choice != 'F' && choice != 'f' && choice != 'I' && choice != 'i')  // Validate input
			{
				cout << "\n\nYour choices are 'F' for rapid fire, or 'I' to try intercepting mutliple missles: ";
				cin >> choice;
			}
			if (choice == 'F' || choice == 'f')  // Choice for rapid fire
			{
				playerMoney = playerMoney - PENALTY;  // Accumulate
				cout << "\n\nYou attempt to track every asteroid and rapid fire them away!";
				cout << "\nAs you grit your teeth and fire with ferocity...";
				cout << "\nYou see your missles flying past the enemy missles!!";
				cout << "\n\nEnemy missles begin to land around you become blind!";
				cout << "\nHeat and debris reach the command center as you yell in frustration...";
				cout << "\nYou open your eyes and realize you're yelling within the ARCANE ARCADE...";
				cout << "\nYour wallet is $5 lighter...";
				break;
			}
			else if (choice == 'I' || choice == 'i')  // Choice for intercepting 
			{
				cout << "\n\nYou begin building an algorithm to predict where enemy missles will intercept...";
				cout << "\nYou strategically take aim and...";
				cout << "\nFIRE!!!";
				cout << "\n\nYou watch in amazement as the missles make contact and you feel overwhelmingly proud!";
				cout << "\nAs the last missles make contact and explode safely above the test site, you let out a sigh of relief.";
				cout << "\n\nYou are teleported to the ARCANE ARCADE practically glowing!!";
				cout << "\n*Hopefully that's not radiation!!*";
				cout << "\n*Must just be my radiant complexion...*";
				break;
			}
		case 'F':  // Quit case
		case 'f':
		{
			cout << "\n\nYou've left the ARCANE ARCADE with your wallet and possibly more than you'll ever know...";
			goto leave;  // Goto command to bypass another game prompt
		}

		}

		cout << delimiter;
		while (playerMoney <= 0)
		{
			cout << "\nGAME OVER! YOU RAN OUT OF MONEY!";
			playerDeath = true;
			playerMoney = 0;
			goto leave;
		}
		cout << "\n\nDo you wish to play another game? ('Y' or 'N'): ";  // Verify user wants to continue with another game or quit
		cin >> resume;
		if (resume != 'Y' && resume != 'y' && resume != 'N' && resume != 'n')  // Validate input
		{
			cout << "\nYour choices are ('Y' or 'N'): ";
			cin >> resume;
		}

		else if (resume == 'Y' || resume == 'y')  // If continue
		{
			goto here;  // Goto command to return to here before menu prompt at beginning of menu call
		}

		else if (resume == 'N' || resume == 'n')  // If leave game
		{
			cout << "\n**********************************";
			cout << "\n* You flee as fast as you can... *";
			cout << "\n**********************************";
			break;
		}

	}
	leave: // Case f goto command to bypass continue or leave prompt
	cout << "\n\nYour score at the ARCANE ARCADE was: $" << playerMoney << "\n\n";  // Display player name and final money count
}

void Arcade::menu(char& decision, string& delimiter, int& playerMoney)  // Menu function that accepts char decision and delimiter string
{
	cout << "\n PLAYER MONEY: $" << playerMoney << "!" << endl;
	cout << "\n A) Pac-Man \t\t($10.00)\n";
	cout << "\n B) Mortal Kombat \t($8.00)\n";
	cout << "\n C) ????????????? \t(Play if you dare... Survival will be rewarded greatly) \n";
	cout << "\n D) Asteroids     \t($5.00)\n";
	cout << "\n E) Missle Command \t($5.00)\n";
	cout << "\n F) LEAVE \n";
	cout << "\n Enter your choice... ";
	cin >> decision;
	cout << delimiter;
}
