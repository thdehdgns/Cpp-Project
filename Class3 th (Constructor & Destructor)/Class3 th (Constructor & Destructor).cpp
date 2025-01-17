﻿#include <iostream>
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
        // 얕은 복사는 객체가 메모리에서 해제될 때 생성자
        // 의 실행 순서와 반대로 소멸자가 실행되기 때문에
        // 복사한 객체가 먼저 해제되므로 원래 잇던 객체가
        // 해제될 때는 이미 해제된 메모리에 접근하게 됩니다.
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

class Item {
private:
    int * price;
    char grade;
public:
    Item(char grade)
    {
        this->grade = grade;

        price = new int;
    }
    Item(const Item & clone)
    {
        grade = clone.grade;

        price = new int;
    }

    ~Item()
    {
        delete price;
    }
};

int main()
{
#pragma region 복사 생성자
    // 같은 객체를 복사하여 생성시킬 때 호출되는
    // 생성자 입니다.
    //Unit marine(40);
    //
    //Unit marine1(marine);
    //
    //cout << marine.Health() << endl;
    //cout << marine1.Health() << endl;
    //
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


    //Unit firebat1(50);

    //Unit firebat2(firebat1); 

    // 얕은 복사의 경우 같은 객체가 서로 같은 메모리
    // 공간을 참조하고 있기 때문에 하나의 객체로 값을
    // 변경하게 되면 서로 참조된 객체도 함께 영향을 받습니다.
#pragma endregion

#pragma region 깊은 복사
    // 객체를 복사할 때, 참조 값이 아닌 객체 자체를 새로
    // 복사하여 서로 다른 메모리를 생성하는 복사입니다.

    Item posison1('B');

    Item posison2(posison1);


    

#pragma endregion

    return 0;
}

