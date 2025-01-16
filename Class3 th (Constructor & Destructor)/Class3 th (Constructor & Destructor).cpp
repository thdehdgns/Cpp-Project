#include <iostream>
using namespace std;

class Unit
{
private:
    int health = 0;

    int* kill;

public:
    Unit(int health)
    {
#pragma region tihs 포인터
        // 자기 자신을 가르키는 포인터입니다.

        this->health = health;

        kill = new int;

        *kill = 0;

#pragma endregion

    }

    Unit(const Unit & clone)
    {
        health = clone.health;

        kill = clone.kill;
    }

    const int & Health()
    {
        return health; 
    }
    ~Unit()
    {
        delete kill;
    }

};

int main()
{
#pragma region 복사 생성자
    // 같은 객체를 복사하여 생성시킬 때 호출되는
    // 생성자 입니다.
    Unit marine(40);

    Unit marine1(marine);

    cout << marine.Health() << endl;
    cout << marine1.Health() << endl;

    // 복사 생성자를 정의하지 않고, 객체를 복사하게 되면
    // 기본 복사 생성자가 호출되기 때문에 얕은 복사로 객체가 복사됩니다.

#pragma endregion

#pragma region 얕은 복사
    // 객체를 복사할 때 주소값을 복사하여 같은 
    // 메모리공간을 가리키게 하는 것입니다.

    int* ptr1 = new int;
    int* ptr2 = ptr1;

    *ptr2 = 110;

    cout <<"prt 1: " << *ptr1 << endl;
    cout << "prt 2: " << *ptr2 << endl;
    cout <<"prt 1: "<< ptr1 << endl;
    cout << "prt 2: " << ptr1 << endl;


    Unit firebat1(50);

    Unit firebat2(firebat1); //터짐

    // 얕은 복사의 경우 같은 객체가 서로 같은 메모리
    // 공간을 참조하고 있기 때문에 하나의 객체로 값을
    // 변경하게 되면 서로 참조된 객체도 함께 영향을 받습니다.
#pragma endregion


    return 0;
}

