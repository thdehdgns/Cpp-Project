#include <iostream>
 

class GameObject
{
#pragma region 접근 지정자
    // 클래스 내부에 포함되어 있는 속성에 접근 범위를 
    // 제한하는 지정자입니다.

    // public : 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스
    //          클래스 외부에서도 접근을 허용하는 지정자
    
    // protected : 클래스 내부와 자기가 상속하고 있는 클래스 까지만
    //             접근을 허용하는 지정자입니다.

    // private : 클래스 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion
    
    
public:
    int x;

private:
    int y;
public:
    int z = 5;

    int Z()
    {
        return z;
    }

};

void Swap(int & x, int & y)
{
    int temp = x;
    x = y;
    y = temp;
}


int main()
{
#pragma region 클래스
    // 사용자 정의 데이터 유형으로 속성과 함수가 포함
    // 되어 있으며, 클래스를 통해 객체를 생성하여 접근
    // 하고 사용하는 집합체입니다.

    GameObject gameobject1;
    GameObject gameobject2;
    GameObject gameobject3;


    gameobject1.x = 100;
    gameobject1.z = 5;
    gameobject2.z = 10;
    gameobject3.z = 20;


    
    std::cout << "GameObject1 Z의 값: " << gameobject1.z << std::endl;
   
    std::cout << "GameObject2 Z의 값: " << gameobject2.z << std::endl;
   
    std::cout << "GameObject3 Z의 값: " << gameobject3.z << std::endl;

    std::cout << "GameObject의 x값 : " << gameobject1.x << std::endl;
    // 클래스의 경우 클래스 내부에있는 변수는 클래스의 
    // 메모리 영역에 포함되지만 정적 변수와 함수의 메모리는
    // 클래스 영역에 포함되지않습니다.

#pragma endregion

#pragma region 참조자
    // 어떤 변수의 메모리 공간에 다른 이름
    // 지정하는 지정자입니다.

    int data = 10;

    int& reference = data;

    std::cout << "data의 값: " << data << std::endl;
    std::cout << "reference의 값: " << reference << std::endl;

    reference = 20;

    std::cout << "data의 값: " << data << std::endl;
    std::cout << "reference의 값: " << reference << std::endl;
    std::cout << std::endl;

    int a = 10;
    int b = 20;
    std::cout << "a의 값: " << a << std::endl << "b의 값: " << b << std::endl;

    Swap(a, b);

    std::cout << "a의 값: " << a << std::endl << "b의 값: " << b << std::endl;
#pragma endregion


    return 0;
}


