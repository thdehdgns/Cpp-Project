#pragma once
#include <iostream>
using namespace std;
class Resource
{
private:
	shared_ptr<Resource> sharedpointer;
public:
	Resource();
	
	void Share(const shared_ptr<Resource> &resource);
	~Resource();

};

