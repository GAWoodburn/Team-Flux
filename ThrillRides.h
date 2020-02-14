#ifndef ThrillRides_H
#define ThrillRides_H

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class ThrillRide {

private:

public:
	ThrillRide();
	~ThrillRide();
	void menu(char& decision, string& delimiter);
	double playerMoney = 100.00;  // Player money
	const double MOONMOUNTAIN = 10.00, DEVILSDROP = 8.00, TERRORTOWER = 5.00, TESTTRACK = 5.00, PENALTY = 5.00, REWARD = 10.00;  // Constants for prices
	char decision, choice, resume;
	string name, delimiter = "\n\n========================================================\n========================================================\n\n";  // String name and divider

};

#endif

