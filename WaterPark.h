#pragma once

using namespace std;

class WaterPark{

private:


public:

	WaterPark(double &); // The constructor calls then entire program

	// Global Variables
	const int ONE = 1;
	const int TEN = 10;
	const int SEVEN = 7;
	const int FIVE = 5;

	char decision1, // used for first player decisions (original A/B/C paths)
		decision2a, // original "A" paths
		decision4a,
		decision6b; // original "B" paths

	double playerMoney = 100.00; // player starts off with $100.00

	// forward declarations
	void introduction();
	void mainChoices(char&, char&, char&, char&, double&);
	void decisionATwo(char&, double&);
	void decisionAThree();
	bool decisionAFour(char&);
	void decisionBOne(char&, double&);
	void decisionBTwo();
	void decisionBThree();
	void pathA(char&, char&, double&, bool&);
	void pathB(char&, double&);
	void pathC(double&, bool&);
	
};

