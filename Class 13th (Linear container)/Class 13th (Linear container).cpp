#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Stack : " << stack.size() << endl;

    while (stack.empty() == false)
    {
        cout << stack.top() << endl;
        stack.pop();
    }


    return 0;
}


