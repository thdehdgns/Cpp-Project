#include <iostream>
#include <vector>
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

    


    return 0;
}


