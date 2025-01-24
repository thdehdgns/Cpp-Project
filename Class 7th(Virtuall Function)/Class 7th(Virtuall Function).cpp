﻿#include <iostream>
#include "Paint.h"
#include "Brush.h";
#include "Pencil.h"
using namespace std;

int main()
{
#pragma region 추상 클래스
    //함수에 특정한 내용이 구현되어 있지 않고, 선언만 
    // 되어있는 클래스입니다.

    Paint* paint = new Brush();
    
    paint->Draw();
    
    delete paint;
    
    paint = new Pencil();

    paint->Draw();
    
    delete paint;

    // 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
    // 객체를 생성할 수 없습니다.
#pragma endregion

#pragma region 가상 소멸자
    // 객체가 소멸될 떄 현재 참조하고 있는 객체와
    // 상관없이 모두 호출되는 소멸자입니다.



    // 상속된 객체가 해제도리 때 하위 클래스이 소멸자가 먼저
    // 실행되고, 상위 클래스의 소멸자 실행되어야 하기 때문에
    // 실행 시간에 메모리에 활당된 객체를 확인하고 차례대로 소멸시켜야 합니다.
#pragma endregion


    return 0;
}


