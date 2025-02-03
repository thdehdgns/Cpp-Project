﻿#include <iostream>
#include "List.h"
#include <string>
using namespace std;
template <typename T>
bool Same(T a, T b)
{
	return a == b;
}
template <typename T>
bool Same(string a, string b)
{
	return a.length() == b.length();
	
}
int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수
	// 있는 기능입니다.

	// List<int> intList;
	// 
	// intList.Resize(5);
	// intList.Add(1);
	// intList.Add(6);
	// intList.Add(4);
	// intList.Add(7);
	// intList.Add(3);
	// intList.Add(2);
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << intList[i] << endl;
	// }
	

#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶을 경우 
	// 특정한 자료형만 다른 형식으로 동작시키는 템플릿 기능입니다.
	
	
	cout << Same(1, 2) << endl;
	cout << Same('A', 'B') << endl;
	cout << Same('A', 'A') << endl;
	cout << Same("aaa", "bbb") << endl;

#pragma endregion


	return 0;
}


