#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{

    std::vector<int> vec = {10, 15, 20, 25, 30, 35}; 

    auto posIter = std::lower_bound(vec.begin(), vec.end(), 34);

    std::cout << "30 found position = " <<  posIter - vec.begin() << std::endl;

    return 0;
}
