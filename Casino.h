#ifndef Casino_H
#define Casino_H

class Casino{

private:

public:

	Casino();     // Constructor called in main switch 
	~Casino(){};  // Default Destructor
	int x = 1;
	int rand(int n);
	bool win();
	void money();


};

#endif
