#include <iostream>
using namespace std;

class Terran
{
protected:
    int health = 100;
    int defense= 30;
public:
    Terran()
    {
        cout << "Created Terran" << endl;
    }
};

class Marine : public Terran
{
private:
    int attack =59;
public:
    Marine()
    {
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
    Terran terran;

    Marine marine;
    
    cout << "마린의 체력: " << marine.Health() << endl;
    cout << "마린의 공격력: " << marine.Attack() << endl;
    cout << "마린의 방어력: " << marine.Defense() << endl;

    // 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 
    // 속성을 사용 할 수 없으며, 하위 클래스는 상위 클래스의 
    // 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.

#pragma endregion

    return 0;
}

