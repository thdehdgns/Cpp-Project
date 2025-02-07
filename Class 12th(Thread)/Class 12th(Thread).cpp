#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;
int main()
{
#pragma region vector container
    
    vector<int> vector;
    vector.reserve(6);
    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    vector.push_back(40);
    vector.push_back(50);
    
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << endl;
    }
    vector.pop_back();
    vector.pop_back();
    cout << "size:" << vector.size() << endl;
    cout << "capacity:" << vector.capacity() << endl;
    
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << endl;
    }

#pragma endregion

#pragma region list container
     list<int> list;
     
     list.push_back(20);
     list.push_back(30);
     list.push_front(10);
     
     list.pop_front();
     cout << "List의 크기 : " << list.size() << endl;
     
     list.assign(3, 4);
     cout << "List의 크기 : " << list.size() << endl;

#pragma endregion

#pragma region deque container
   deque<int> deque;
   
   deque.push_back(10);
   deque.push_back(15);
   deque.push_back(5);
   deque.push_front(20);
   deque.push_front(10);
   deque.push_front(5);
   deque.pop_back();
   deque.pop_front();
   
   for (int i = 0; i < deque.size();i++)
   {
       cout << deque[i] << endl;
   }

#pragma endregion


    return 0;
}


