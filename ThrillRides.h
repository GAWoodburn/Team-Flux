#ifndef ThrillRides_H
#define ThrillRides_H

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class ThrillRide {

private:

public:
	ThrillRide(int &playerMoney, bool &playerDeath);
	~ThrillRide();
	void menu(char& decision, string& delimiter);
	const int MOONMOUNTAIN = 10.00, DEVILSDROP = 8.00, TERRORTOWER = 5.00, TESTTRACK = 5.00, PENALTY = 5.00, REWARD = 10.00, ZERO = 0;  // Constants for prices
	char decision, choice, resume;
	string name, delimiter = "\n\n========================================================\n========================================================\n\n";  // String name and divider

};

#endif

