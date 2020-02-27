#ifndef Arcade_H
#define Arcade_H

#include <iostream>
#include <string>

using namespace std;

class Arcade {

private:

public:

	Arcade(int& playerMoney, bool& playerDeath);    // Constructor called in main switch 
	~Arcade() {};								    // Default destructor 
	void menu(char& decision, string& delimiter, int& playerMoney);   // Menu function
	const int COSTPACMAN = 10, COSTMORTALKOMBAT = 8, COSTASTEROIDS = 5, COSTMISSLECOMMAND = 5, PENALTY = 5, REWARD = 10, ZERO = 0;  // Constants for prices 
	char decision, choice, resume;  // Characters to guide pathways
	string name, delimiter = "\n\n========================================================\n========================================================\n\n";  // String name and divider
};

#endif

