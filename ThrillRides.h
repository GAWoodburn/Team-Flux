#ifndef ThrillRides_H
#define ThrillRides_H

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class ThrillRide {

private:

public:
	ThrillRide(int& playerMoney, bool& playerDeath);
	~ThrillRide();
	void menu(char& decision, string& delimiter, int&);
	const int MOONMOUNTAIN = 10, DEVILSDROP = 8, TERRORTOWER = 5, TESTTRACK = 5, PENALTY = 5, REWARD = 10, ZERO = 0;  // Constants for prices
	char decision, choice, resume;
	string name, delimiter = "\n\n========================================================\n========================================================\n\n";  // String name and divider

};

#endif


