#ifndef Casino_H
#define Casino_H

#include<iostream>
#include<math.h>
#include<time.h> 

using namespace std;

class Casino{

private:
	
public:

	Casino();
	int x = 1;
	int rand(int n);
	bool win();
	void money();
	char DisplayRule();


};

#endif
