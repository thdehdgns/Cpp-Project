#pragma once
#include <iostream>
using namespace std;
class Packet
{
private:
	int errorcode= -9999;
public:
	const int & ErrorCode()
	{
		return errorcode;
	}
	Packet();
	~Packet();
};

