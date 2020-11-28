#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {10, 15, 20, 25, 30, 35}; 

    bool search = std::binary_search(vec.begin(), vec.end(), 20);
    std::cout << "20 search result = " << search << std::endl;

    search = std::binary_search(vec.begin(), vec.end(), 40);
    std::cout << "40 search result = " << search << std::endl;

    return 0;
}


