#include <iostream>
using namespace std;

class Weapon
{
protected:
    int attack;
    int interscetion;

public:

#pragma region 오버라이드
    // 상위 클래스에 있는 함수를 하위 클래스에서
    // 재정의 하여 사용하는 기능입니다.

#pragma endregion

    void Attack()
    {
        cout << "Weapon Attack" << endl;
    }

    // 오버라이드는 상속 관계에서만 이루어지며,
    // 하위 클래스에서 함수를 재정의 할 때 상위
    // 클레스의 함수 형태와 일치해야 합니다.
};

class Knife : public Weapon
{

public:
    void Attack()
    {
        cout << "Knife Attack" << endl;
    }
};

class Kunkles : public Weapon
{
public:
    void Attack()
    {
        cout << "Kunkles Attack" << endl;
    }
};

int main()
{

#pragma region 다형성
    //여러 개의  서로 다른 객체가 동일한 기능을 서로
    // 다른 방법으로 처리할 수 있는 작업입니다.

    Knife knife;
    Kunkles kunkles;

    knife.Attack();
    kunkles.Attack();

    // 다형성은 컴파일 시점에서 함수와 속성이 결정되는
    // 정적 바인딩을 하지 않고, 실행 시간에 함수와 속성이
    // 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma endregion



    return 0;
}

