#pragma once
#include <iostream>
using namespace std;
template <typename T>
class List
{
private:
	int size;
	int index;
	T* pointer;

public:
	List() {
		index = 0;
		size = 0;
		pointer = nullptr;
	}
	void Resize(int size)
	{
		this->size = size;
		pointer = new T[this->size];
		
		for (int i = 0; i < size; i++)
		{
			pointer[i] = 0;
		}
			
	}
	void Add(T data)
	{
		if (index >= size)
		{
			cout << "Index Out of Range" << endl;
		}
		else if(size <= 0)
		{
			cout << "Null index size" << endl;
		}
		else
		{
			pointer[index++] = data;
		}
		
	}

	const T & operator [](int index)
	{
		return pointer[index];
	}
	


	~List() {
		if(pointer != nullptr)
		delete [] pointer;
		
	}
};


