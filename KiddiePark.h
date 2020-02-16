//Robert Knar, rknar@dmacc.edu, 2.10.2020

/*
Header file for KiddiePark
*/

#include <iostream>
#include <string>

using namespace std;

class KiddiePark
{
	public:
		KiddiePark(int playerMoney);
		~KiddiePark();

		void RunKiddieParkTextAdventure();
		char DisplayChoices();
		void SetTotalMoney(int totalMoney);
		int GetTotalMoney();

	private:
		int TotalMoney;
};
