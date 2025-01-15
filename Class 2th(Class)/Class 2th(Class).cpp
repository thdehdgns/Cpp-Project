#include <iostream>
#include <windows.h>
using namespace std;
namespace Austraila
{

	int area = 100;
	void Size()
	{ 
		cout << "Austreaila area: " << area << endl;
	}
}

namespace China
{

	int area = 200;
	void Size()
	{
		cout <<"China area: " << area << endl;
	}
}

class Object
{
private:
	static int count;
public:
	Object()
	{
		cout << "Created Object" << endl;
	}
	~Object()
	{
		count++;
		cout << "Kill count: " << count << endl;
		cout << "Destroy Objetc" << endl;
	}
};


int Object::count = 0;

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.
	//Austraila::Size();
	//China::Size();
#pragma endregion

#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로
	// 호출되는 특수한 멤버 함수입니다.
	
	//Object object;

	

	// 생성자의 경우 객체가 생성될 때 단 한번만 호출되며,
	// 생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기
	// 전에는 객체에 대한 메모리가 할당되진 않습니다.
#pragma endregion

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의
	// 멤버 함수입니다.

	Object * object1 = new Object;
	Object* object2 = new Object;
	Object* object3 = new Object;

	delete object1;
	delete object2;
	delete object3;


	// 소멸자는 객체가 메모리에서 해제될 때 단 한번만
	// 호출되며, 소명자에게는 매개 변수를 생성하여 사용할
	// 수 없습니다.
#pragma endregion

	return 0;
}


