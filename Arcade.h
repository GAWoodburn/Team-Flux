#ifndef Arcade_H
#define Arcade_H

#include <iostream>
#include <string>
using namespace std;

class Arcade {

private:

public:

	Arcade(int& playerMoney, bool& playerDeath);    // Constructor called in main switch 
	~Arcade() {}; // Default destructor 
	void menu(char& decision, string& delimiter);  // Menu function

	const int COSTPACMAN = 10.00, COSTMORTALKOMBAT = 8.00, COSTASTEROIDS = 5.00, COSTMISSLECOMMAND = 5.00, PENALTY = 5.00, REWARD = 10.00, ZERO = 0;  // Constants for prices 
	char decision, choice, resume;  // Characters to guide pathways
	string name, delimiter = "\n\n========================================================\n========================================================\n\n";  // String name and divider
};

#endif
