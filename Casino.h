#ifndef Casino_H
#define Casino_H

class Casino{

private:

public:

	Casino(int& playerMoney, bool& playerDeath);

	int x = 1;
	int rand(int n);
	bool win();
	void money();


};

#endif
