#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::vector<int> newVec(intVec.size());

    // // std::copy
    // std::copy(intVec.begin(), intVec.begin() + newVec.size(), newVec.begin());
    // for (std::vector<int>::size_type i = 0; i != newVec.size(); ++i)
    //     std::cout << newVec[i] << " ";
    // std::cout << std::endl;
    
    // std::copy_if
    std::copy_if(intVec.begin(), intVec.begin() + newVec.size(), newVec.begin(),[](int i){return i%2!=0;});
    for (std::vector<int>::size_type i = 0; i != newVec.size(); ++i)
        std::cout << newVec[i] << " ";
    std::cout << std::endl;
    

    return 0;
}
