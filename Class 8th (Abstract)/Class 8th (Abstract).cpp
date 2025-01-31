#include <iostream>
#include "Vector2.h"
using namespace std;

int main()
{
#pragma region 연산자 오버로딩
     
    Vector2 direction1;
    Vector2 direction2;
    Vector2 direction;
    direction1.Direction(10, 9);
    direction2.Direction(5, 3);

    direction = direction1 + direction2;
    cout <<"(" << direction.X() << "," << direction.Y() <<")" << endl;
    direction = direction1 * direction2;
    cout << "(" << direction.X() << "," << direction.Y() << ")" << endl;
    direction = direction1 / direction2;
    cout << "(" << direction.X() << "," << direction.Y() << ")" << endl;
    ++direction;
    cout << "(" << direction.X() << "," << direction.Y() << ")" << endl;
    --direction;
    cout << "(" << direction.X() << "," << direction.Y() << ")" << endl;
    direction++;
    cout << "(" << direction.X() << "," << direction.Y() << ")" << endl;
    direction--;
    cout << "(" << direction.X() << "," << direction.Y() << ")" << endl;

#pragma endregion


    return 0;
}
