#include <iostream>
#include "Packet.h"
#include "Resource.h"
#include "Character.h"
using namespace std;
int main()
{
#pragma region 스마트 포인터
    // 포인터를 사용하는 동시에 자동으로 메모리 관리를
    // 해주며, 경계 확인과 같은 추가 기능을 제공하는 추상
    // 데이터 포인터 형식입니다.

     // int* pointer2 = nullptr;
     // 
     // {
     //     int* pointer1 = new int;
     //     *pointer1 = 100;
     //     pointer2 = pointer1;
     // }
     // cout << "Pointer2: " << *pointer2 << endl;

#pragma endregion

#pragma region unique pointer
    // 특정한 객체를 하나의 스마트 포인터만 가리킬 수 
    // 있도록 되어있는 포인터입니다.

    // unique_ptr<Packet> uniquePointer = make_unique<Packet>();
    // 
    // cout << "uniquePointer Error code: " << uniquePointer->ErrorCode() << endl;
    // 
    // unique_ptr<Packet> uniqueReference = move(uniquePointer); //메모리 소유권 넘김
    // 
    // cout << "uniquePointer Error code: " << uniquePointer->ErrorCode() << endl;// 터짐
    // 
    // cout << "uniqueReference Error code: " << uniqueReference->ErrorCode() << endl;


#pragma endregion

#pragma region shared pointer
    // 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
    // 모든 포인터 객체가 자원 객체를 필요하지 않을 때 자원 객체를
    // 해제하도록 설계되어있는 포인터입니다.

    // shared_ptr<Resource> oil = make_shared<Resource>(); //EBCO
    // 
    // shared_ptr<Resource> mineral = make_shared<Resource>();
    // 
    // 
    //  oil->Share(mineral);
    //  mineral->Share(oil);
    //  cout << "Reference count oil: " << oil.use_count() << endl;
    //  cout << "Reference count mineral: " << mineral.use_count() << endl;
    

    

#pragma endregion

#pragma region weak pointer
    // 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 
    // 자원 객체를 가리켜서 참조 개수에 영향을 미치지 않게하는 포인터 입니다.

    shared_ptr<Character> weakPointer = make_shared<Character>();
    shared_ptr<Character> asdasd = make_shared<Character>();
    weakPointer->Parter(asdasd);
    asdasd->Parter(weakPointer);
    cout << "weakPointer count: " << weakPointer.use_count() << endl;
    cout << "asdasd count: " << asdasd.use_count() << endl;

#pragma endregion

    return 0;

}


