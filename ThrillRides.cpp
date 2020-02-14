#include "ThrillRides.h"

// ** CIS164 - 22264
// ** Week #5 - Topic A2 - Group Project
// ** Theme Park Adventure 
// ** Gabriel Woodburn, February 2, 2020
// ** Email: gwoodburn@dmacc.edu
// ** This program will contain a pathway "Trifling Thrills" within the Theme Park Adventure Game

ThrillRide::ThrillRide() {

	cout << "\nEnter your name: ";
	getline(cin, name);
	cout << delimiter;
	cout << "\nYou find yourself wanting some thrill...";
	cout << "\nYou hear screams and yells, surely those must the fabled rides of *TRIFLING THRILLS*...";
	cout << "\nAs you approach a large metal sign, you read its name";
	cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~*";
	cout << "\n*~~~~TRIFLING TERRORS~~~~*";
	cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~*";
	cout << "\nAt long last, you're ready to have some fun!!!";
	cout << "\nHow shall you begin spending your precious money?";
	cout << "\nAfter all...you deserve to let loose!!!\n";

here:  // Jump to here if player wishes to choose another game
	menu(decision, delimiter);  // Menu passing in char decision and string delimiter

	while (decision != 'A' && decision != 'a' && decision != 'B' && decision != 'b' && decision != 'C' && decision != 'c' && decision != 'D' && decision != 'd'
		&& decision != 'E' && decision != 'e' && decision != 'F' && decision != 'f')  // Verify input is on the switch menu
	{
		cout << "\nYour options are 'A', or 'B', 'C', 'D', 'E', or 'F'!";  // Throw error if not valid
		cout << "\n\nEnter your decision: ";  // Enter user input again
		cin >> decision;
	}
	switch (decision)
	{
	case 'A':
	case 'a':
		playerMoney = playerMoney - MOONMOUNTAIN;
		cout << "\nYou've arrived at Moon Mountain!!";
		cout << "\nYou hear a dainty older man over the speaker...";
		cout << "\n*Ready yourself for an exciting adventure upwards and beyond!*";
		cout << "\n*Have you got what it takes to explore outerspace??*";
		cout << "\nExplore outerspace, hmm...This ride only appears to go maybe 50 feet upwards, hardly 'outerspace'...";
		cout << "\nWith confidence, you step inside and begin to get strapped into the rather realistic rocketship.";
		cout << "\nAs the countdown begins, the ride begins to thrust forward as if immense pressure is building underneath you...";
		cout << "\nWell that's strange, you swear your seat is vibrating. Cool feature or is something devious at play?";
		cout << "\nThe man over the speaker: ";
		cout << "\n*Don't forget your helmet! It's real oxygen for your very real lungs!";
		cout << "\nYou think to yourself, how odd...well of course my lungs are real!";
		cout << "\nThe engines begin to thrust you upwards towards the stratosphere as the park below becomes but a dot...";
		cout << "\nThe panic sets in as you realize you're not on Earth anymore.";
		cout << "\nThere's only two levers within your reach...\n";
		cout << left << setw(20) << "TO EARTH" << setw(20) << "BEYOND";
		cout << "\nWhich will you pull? ('E' for Earth, 'B' for BEYOND) ";
		cin >> choice;
		while (choice != 'E' && choice != 'e' && choice != 'B' && choice != 'b')  // Validate input
		{
			cout << "Your options are 'E' or 'B': ";
			cin >> choice;
		}
		if (choice == 'E' || choice == 'e')
		{
			cout << "\nYou decide to call it quits as your heart rate is already quite quick...";
			cout << "\nYou don't wish ANOTHER second of this emptiness in front of you";
			cout << "\nFull of fear, you pull the sensible choice 'TO EARTH'";
			cout << "\nYou hear a whining noise as the spaceship becomes peculiarly dark!";
			cout << "\nYou must be falling back to Earth as a bright red cone envelopes the craft...";
			cout << "\nAn intense pressure pushes you to the front of your seat and suddenly...";
			cout << "\nThe door opens to your surprise!!";
			cout << "\nThe Speaker Phone Man reaches out to help you to your feet...";
			cout << "\nI expected a little bit of adventure from you!";
			cout << "\nAt least you're safely on your feet ... but did you ever really leave?";
			break;
		}
		else if (choice == 'B' || choice == 'b')
		{
			cout << "\nYou've already made it this far, you persist forward and reach for the lever on the right";
			cout << left << setw(40) << "'BEYOND'" << endl;
			cout << "\nAn afterburner fires on as you head towards Mars!";
			cout << "\nThe elder man's voice appears over the radio...";
			cout << "\n*Above and beyond is what you choose to be, oh how you impress me!!*";
			cout << "\nThe spaceship reaches light speed as galaxies unfold before your eyes!!!";
			cout << "\nNever have you seen anything so mezmerizing...";
			cout << "\nYou begin to realize you're back above Earth and beginning to prepare for landing...";
			cout << "\nThe craft begins to land as the older man reaches his hand out to help you from the craft...";
			cout << "\nYou feel an overwhelming love for what we refer to as 'Dirt', Earth, whichever.";
			cout << "\nYou know you'll remember the ride for as long as you live, longer maybe...";
			cout << "\nYou look down at your hand and notice $10, the older man gives you a wink as you leave...";
			playerMoney = playerMoney + REWARD;
			break;
		}
	case 'B':
	case 'b':
		playerMoney = playerMoney - DEVILSDROP;
		cout << "\nWelcome, Welcome";
		cout << "\nYou've reached the depths of hell!!";
		cout << "\nCharming...";
		cout << "\nBright flames burn towards the sky as the warmth reaches your neck...you descend down to the main attraction...";
		cout << "\nNext to what seems to be an old miners cart are employees ushering people into the carts";
		cout << "\nThe hair on the back of you neck stands...your gut clenches up, but you've already paid, so forwards you go";
		cout << "\nYou're seated and ready to begin the descent into the depths";
		cout << "\nYou quickly notice the group of 10 before you now seems to have lost some numbers...you count 6!";
		cout << "\nDismissing it as paranoia, the ride begins a slow approach into a dark corridor...";
		cout << "\nThe floor drops from beneath you, you're thrown to the right and left, and there's an intense heat climbing higher and higher!";
		cout << "\nThe cart becomes searing hot as you pull your hand away from its ledge!!!";
		cout << "\nYou appear before a rather dated doorway with a language you don't quite comprehend...yet it seems familiar";
		cout << "\nA sinister voice fills your ears...";
		cout << "\n*All day with you pesky mortals!*";
		cout << "\nHoly Moly, it's the DEVIL!!";
		cout << "\n*I haven't all day*, he exclaims...*Oh wait, I have eternity*";
		cout << "\nHe offers his hand out to you, it's aflame but yet cool to the touch...";
		cout << "\n*Have some faith and join me inside?* He asks of you with a sly grin...";
		cout << "\nDo you give in or refuse? ('I' for go inside, 'R' for refuse and leave) ";
		cin >> choice;
		while (choice != 'I' && choice != 'i' && choice != 'R' && choice != 'r')  // Validate input
		{
			cout << "\nYour options are 'I' or 'R': ";
			cin >> choice;
		}
		if (choice == 'I' || choice == 'i')
		{
			cout << "\nWelcome in, " << name << ", you've made a wise decision...";
			cout << "\nThe cart zooms past a river of lava and up onto a rocky cliff";
			cout << "\nYou look over the carts ledge and see endless fire in every direction...";
			cout << "\nThe Devil appears in a cloud of smoke, *Whaddya think?*";
			cout << "\n*My own little domain down here, not bad, eh?*\n";
			cout << name << ": Yeah...not bad, hehhhh";
			cout << "\n(Nervous laughter fills the air)";
			cout << "\n*You've proven yourself wise, a reward for one so daring...";
			cout << "\nHe hands you $10...strange...";
			cout << "\nYou're jerked backwards as the air becomes cleaner, fresher...you must be returning to the surface...";
			cout << "\nAs you get out of the cart, the $10 has a burnt scent to it...but visibly, it's fine...";
			cout << "\nWhat a strange experience...you return to Thrill Rides...";
			playerMoney = playerMoney + REWARD;
			break;
		}
		else if (choice == 'R' || choice == 'r')
		{
			cout << "\nYou refuse to enter and immediately are sent to the surface!";
			cout << "\nYou can't help but feel relieved but remise...";
			cout << "\nPerhaps you left with something that was rightfully yours, maybe you should've ventured forward!";
			cout << "\nBut into HELL for a reward... surely isn't worth it, hmm...";
			cout << "\nYou leave but the doubt still lingers in your mind...";
			break;
		}
	case 'C':
	case 'c':
		cout << "\nYou've arrived at Miracle Mirrors!!";
		cout << "\nYou've heard of magic before, but nothing has struck you as magical until now...";
		cout << "\nThe house doesn't charge a fee...(*well how do they make money then?*)";
		cout << "\nAs you enter you're sense of perception becomes disoriented and every corner begins to look the same!";
		cout << "\nYou're not sure what took over you, but the room seems to be spinning!";
		cout << "\nYou're lost as you dash forward looking for the exit";
		cout << "\nYou slip into a mirror, only it doesn't break and you fall straight through to the otherside...";
		cout << "\nYou try to see clearly but you cannot...!";
		cout << "\nYou decide you must act!";
		cout << "\nDo you give in to your senses and close your eyes, or will you continue to struggle for vision? ('C' to close your eyes, 'V' to try and regain vision) ";
		cin >> choice;
		while (choice != 'C' && choice != 'c' && choice != 'V' && choice != 'v')  // Validate input
		{
			cout << "\nYour options are 'C' or 'V': ";
			cin >> choice;
		}
		if (choice == 'C' || choice == 'c')
		{
			cout << "\nAs you close your eyes, you immediately regain vision!";
			cout << "\nWhat a strange sensation to have your eyes close but able to see the clearest you've ever seen!";
			cout << "\nQuickly, you retrace your steps...turning left, right, another right and then left again...";
			cout << "\nYou're at the entrance again! You turn around to see a solid wall of which you were just walking through!";
			cout << "\nWhat a strange, strange place...";
			cout << "\nNot only have you retraced your steps, you feel a bill crumpled in your hand... $10!!";
			cout << "\nSometimes the unorthodox choice proves useful!!! Sometimes...";
			playerMoney = playerMoney + REWARD;
			break;
		}
		else if (choice == 'V' || choice == 'v')
		{
			cout << "\nYou try to regain your vision, but with every second your eyes are open, the room becomes construed worse!";
			cout << "\n\nYou can't help but panic as you let out a yell....!";
			cout << "\nSomething grabs your hand and begins moving, as if leading you...";
			cout << "\nYou decide it's best not to fight it as it's the most progress you've been able to make in this madhouse of mirrors...";
			cout << "\n\nYou are maneuvered through the hallways and find yourself at the entrance of Miracle Mirrors...";
			cout << "\n*Thank you!!*, you exclaim, but there's nobody there...";
			break;
		}
	case 'D':
	case 'd':
		playerMoney = playerMoney - TERRORTOWER;
		cout << "\nYou've traveled to Terror Tower!!";
		cout << "\nYou read the fine print on the towers sign as you wait your turn to be seated...";
		cout << "\nNot responsible for lack of satisfaction, yadda yadda...or otherwise feelings of complete dread for weeks after your experience on the ride...";
		cout << "\nThat's just the type of thrill you've been longing for!";
		cout << "\nYou board the tower seat and begin to hear the countdown from 10";
		cout << "\nOnly as the countdown reaches 0, the ride seems to flip upside down!";
		cout << "\nThe tower drops 100 feet, then the sensation of flipping appears again as the tower reverses back the 100 feet the opposite way!";
		cout << "\nAfter 8 turns of this, you're sick to your stomach and longing to get off of the ride...";
		cout << "\nShould you wait it out, as it surely can't be much longer...or risk yelling for an employee to stop the ride? ('W' to wait, 'Y' to yell) ";
		cin >> choice;
		while (choice != 'W' && choice != 'w' && choice != 'Y' && choice != 'y')  // Validate input
		{
			cout << "\nYour options are 'W' or 'Y': ";
			cin >> choice;
		}
		if (choice == 'W' || choice == 'w')
		{
			cout << "\nYou decide to wait it out!";
			cout << "\nAs the ride goes another turn, your wallet becomes dislodged from your pocket!";
			cout << "\nMoney begins to slip out, but you grab the majority of it...";
			cout << "\nAs the ride ends, you're in disbelief that some people find that fun, you hurl off to the side..";
			cout << "\nYou check the contents of your wallet... $5 down the drain...";
			cout << "\nYou begin to feel sick again as you cut your losses and head for the exit...";
			playerMoney = playerMoney - PENALTY;
			break;
		}
		else if (choice == 'Y' || choice == 'y')
		{
			cout << "\nYou can't handle it anymore and you yell out!!!";
			cout << "\nThe ride stops and you're not 20 feet off the ground...but how the...?";
			cout << "\nWhat seemed to be from such a previous height, surely can't just be imagined...";
			cout << "\nAt least you're finally off the ride, and you feel like that's for the best, for now...";
			cout << "\nAn employee apologizes for your grievances with the ride and hands you back your money and then some...$10";
			playerMoney = playerMoney + REWARD;
			break;
		}
	case 'E':
	case 'e':
		cout << "\nYou've arrived at the in(Famous) TEST TRACK!";
		cout << "\n*A place that puts bumper cars to shame!*";
		cout << "\n*A place where you can feel the wind in your hair, adrenaline down your body, and 800 horses under your feet!!";
		cout << "\nYou hear the roar of the beautiful, exotic cars all around you";
		cout << "\nThe ground vibrating with the passing of the cars around the track!!";
		cout << "\nYou approach the vehicles but you can't decide between the Ferrari or the Lamborghini...('F' for Ferrari, 'L' for Lamborghini) ";
		cin >> choice;
		while (choice != 'F' && choice != 'f' && choice != 'L' && choice != 'l')  // Validate input
		{
			cout << "\nYour options are 'F' or 'L': ";
			cin >> choice;
		}
		if (choice == 'F' || choice == 'f')
		{
			cout << "\nYou decide to climb into the cherry red Ferrari!";
			cout << "\nAs you fire it up, the engine roars to life!!";
			cout << "\nYou begin to peel out and smell the rubber tracks left in your dust!";
			cout << "\nWhat an exhilirating feeling!";
			cout << "\nFor a few laps, you're able to roar around the track";
			cout << "\nYou pull the car over as your laps are up and feel refreshed!";
			cout << "\nAs you leave... Louis Camilleri hands you a card with a bill inside...$10!";
			cout << "\nPaid to drive a beautiful car at alarmingly dangerous speeds? Winning!";
			cout << "\nYou can't help but stroll back to Trifling Thrills with a smile on your face...";
			playerMoney = playerMoney + REWARD;
			break;
		}
		else if (choice == 'L' || choice == 'l')
		{
			cout << "\nYou climb into the grey Lamborghini...";
			cout << "\nIt stinks like cheese and you feel squished...";
			cout << "\nYou'd think with the ticket price on this thing it'd be comfortable...";
			cout << "\nAs you begin your laps around the track, you continously miss gears!";
			cout << "\nThe car dipping back and forth with the missed shifts becomes so annoying that you call it quits...";
			cout << "\nYou leave the car with a feeling of disappointment and return to Trifling Thrills...";
			break;
		}
	case 'F':
	case 'f':
	{
		cout << "\nYou've left Trifling Thrills... hopefully it was worthwhile...";
		goto leave;
	}
	}
	cout << delimiter;
	cout << "\n\nDo you wish to play another game? ('Y' or 'N') ";  // Verify user wants to continue with another game or quit
	cin >> resume;
	if (resume != 'Y' && resume != 'y' && resume != 'N' && resume != 'n')  // Validate input
	{
		cout << "\nYour choices are 'Y' or 'N': ";
		cin >> resume;
	}

	else if (resume == 'Y' || resume == 'y')  // If continue
	{
		goto here;  // Goto command to return to here before menu prompt at beginning of menu call
	}

	else if (resume == 'N' || resume == 'n')  // If leave game
	{
		cout << "\n**********************************";
		cout << "\n* You decide to call it quits... *";
		cout << "\n**********************************";
	}

leave: // Case f goto command to bypass continue or leave prompt
	cout << "\n\nYour score, " << name << "at TRIFLING THRILLS was: $" << playerMoney << endl;  // Display player name and final money count
}

ThrillRide::~ThrillRide()
{
}

void ThrillRide::menu(char& decision, string& delimiter)  // Menu function that accepts char decision and delimiter string
{
	cout << "\n A) Moon Mountain \t($10.00)\n";
	cout << "\n B) Devils Drop \t($8.00)\n";
	cout << "\n C) ????????????? \t(Play if you dare... Survival will be rewarded greatly) \n";
	cout << "\n D) Terror Tower     \t($5.00)\n";
	cout << "\n E) The Test Track \t($5.00)\n";
	cout << "\n F) LEAVE \n";
	cout << "\n Enter your choice... ";
	cin >> decision;
	cout << delimiter;
}
