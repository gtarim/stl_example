
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {57, 23, -43, 23, 12, 93, 23, -154};

    // // std::count
    // int apearCount = std::count(vec.begin(), vec.end(), 23);
    
    // std::count
    int apearCount = std::count_if(vec.begin(), vec.end(), [](const int& val){ return (val % 2 == 0) ? true : false;  });
    
    std::cout << "apaearCount = " << apearCount << std::endl;
    
    return 0;
}
