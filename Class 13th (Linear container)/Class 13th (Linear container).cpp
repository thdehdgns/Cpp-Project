#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{

#pragma region Stack
    // stack<int> stack;
    // 
    // stack.push(10);
    // stack.push(20);
    // stack.push(30);
    // 
    // cout << "Stack : " << stack.size() << endl;
    // 
    // while (stack.empty() == false)
    // {
    //     cout << stack.top() << endl;
    //     stack.pop();
    // }
#pragma endregion

#pragma region Queue
    queue<int> queue;

    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);

    while (queue.empty() == false)
    {
        cout << queue.front() << endl;
        queue.pop();
    }
#pragma endregion



    return 0;
}


