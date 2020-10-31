#include <iostream>
#include <stack>

int main(int argc, char const *argv[])
{
    // std::stack
    std::stack<int> stackList;

    stackList.push(30);
    stackList.push(31);
    stackList.push(32);
    stackList.push(33);
    stackList.push(34);
    stackList.push(35);

    while(!stackList.empty())
    {
        std::cout << stackList.top() << " ";
        stackList.pop();
    }
    std::cout << std::endl;

    return 0;
}
