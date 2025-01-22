﻿#include <iostream>
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

    Terran* terran = new Golliath();

    terran->Stats();

    //가상 함수는 실행 시간에 상위 클래스에 대한 참조로
    // 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion


    return 0;
}

