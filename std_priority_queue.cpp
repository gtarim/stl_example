#include <iostream>
#include <queue>

int main(int argc, char const *argv[])
{
    std::priority_queue<int> queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);

    while(!queue.empty())
    {
        std::cout << queue.top() << std::endl;
        queue.pop();
    }

    return 0;
}

