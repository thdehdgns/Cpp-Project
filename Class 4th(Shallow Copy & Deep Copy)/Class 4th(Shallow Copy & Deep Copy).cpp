#include <iostream>
using namespace std;
void Stats(string Name, int atc, int def, int hel)
{
    cout << Name << "의 공격력: " << atc << endl;
    cout << Name << "의 체력: " << def << endl;
    cout << Name << "의 방어력: " << hel << endl;

}
class Unit
{
protected:
    int health = 100;
    int defense= 30;
public:
    Unit()
    {
        cout << "Created Terran" << endl;
    }
};


class Marine : public Unit
{
private:
    int attack =6;
public:
    Marine()
    {
        health = 40;
        defense = 0;
        cout << "Created Marine" << endl;

    }
    int Health()
    {
        return health;
    }
    int Defense()
    {
        return defense;
    }
    int Attack()
    {
        return attack;
    }
    void stat()
    {

        Stats("마린", attack, defense, health);
    }
};

class Firebat : public Unit
{
private:
    int attack = 16;
public:
    Firebat()
    {
        health = 50;
        defense = 1;
        cout << "Created Firebat" << endl;

    }
    int Health()
    {
        return health;
    }
    int Defense()
    {
        return defense;
    }
    int Attack()
    {
        return attack;
    }

    void stat()
    {
        Stats("파이어벳", attack, defense, health);

    }
};

class Ghost : public Unit
{
private:
    int attack = 10;
public:
    Ghost()
    {
        health = 45;
        defense = 0;
        cout << "Created Ghost" << endl;
    }
    int Health()
    {
        return health;
    }
    int Defense()
    {
        return defense;
    }
    int Attack()
    {
        return attack;
    }
    void stat()
    {

        Stats("고스트", attack, defense, health);
    }
};



int main()
{
#pragma region 캘슐화
    // 클래스 안에 서로 연관되어 있는 속성과 기능들을 하나의 캡술로 
    // 만들어 데이터를 외부로부터 보호하며, 사용자에게 인터페이스를
    // 제공하여 클래스의 기능을 사용하게 하는 것입니다.
    
#pragma endregion
    
#pragma region 상속
    // 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
    // 설정해주는 기능입니다.
    Unit unit;

    Marine marine;

    Firebat firebat;

    Ghost ghost;

    marine.stat();
    firebat.stat();
    ghost.stat();

    cout << "Unit 객체의 메모리 크기 : " << sizeof(Unit) << endl;
    cout << "Marine 객체의 메모리 크기 : " << sizeof(Marine) << endl;
    cout << "Firebat 객체의 메모리 크기 : " << sizeof(Firebat) << endl;
    cout << "Ghost 객체의 메모리 크기 : " << sizeof(Ghost) << endl;


    // 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 
    // 속성을 사용 할 수 없으며, 하위 클래스는 상위 클래스의 
    // 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.

#pragma endregion

    return 0;
}

