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
		KiddiePark();
		~KiddiePark();

		void RunKiddieParkTextAdventure();
		int DisplayChoices();
		void SetTotalMoney(double totalMoney);
		double GetTotalMoney();

	private:
		double TotalMoney;
};
