#include <iostream>
#include <deque>

int main(int argc, char const *argv[])
{
    std::deque<int> deque;
    deque.push_back(10);
    deque.push_front(20);
    deque.push_back(30);

    while(!deque.empty())
    {
        // std::cout << deque.front() << std::endl;
        // deque.pop_front();

        std::cout << deque.back() << std::endl;
        deque.pop_back();
    }

    return 0;
}

