#include <iostream>
#include "Terran.h"
#include "Vulture.h"
#include "SiegeTank.h"
#include "Golliath.h"
using namespace std;
int main()
{
#pragma region 가상 함수
    // 상속하는 클래스 내에서 같은 형태의 함수로
    // 재정의 될 수 있는 함수입니다.

    // Terran terranl;
    // Vulture vulture;
    // SiegeTank siegetank;
    // Golliath golliath;
    // 
    // vulture.Stats();
    // cout << endl;
    // siegetank.Stats(false);
    // cout << endl;
    // golliath.Stats();

    // Terran* terran = new Golliath();
    // 
    // terran->Stats();
    // 
    // cout << "Terran 메모리 크기: " << sizeof(Terran) << endl;

    //가상 함수는 실행 시간에 상위 클래스에 대한 참조로
    // 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion


#pragma region 가상함수 포인터
    int count = 0;
    int input = 0;
    Terran * terran = new Terran();
  
    while (count < 5)
    {
        cin >> input;
        switch (input)
        {
        case 1:
            terran = new Vulture();
            terran->Stats();
            count++;
            break;
        case 2:
            terran = new SiegeTank();
            terran->Stats();
            count++;
            break;
        case 3:
            terran = new Golliath();
            terran->Stats();
            count++;
            break;
        default:
            cout << "잘못입력하셨습니다. 다시 입력해주세요," << endl;
            break;
        }
    }

    // 가상함수는 한 개 이상의 가상 함수를 포함하는 클래스가
    // 있을 때 객체 주소에 가상함수 테이블을 추가합니다.
#pragma endregion

    return 0;
}

