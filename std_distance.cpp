
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};

    // std::distance
    int distance = std::distance(vec.begin(), vec.end());
    std::cout << distance << std::endl;

    return 0;
}
