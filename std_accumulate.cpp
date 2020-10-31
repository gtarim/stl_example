#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::vector<int> newVec(intVec.size());

    // std::accumulate
    int initVal = 0;
    int sum = std::accumulate(intVec.begin(), intVec.end(), initVal);
    std::cout << sum << std::endl;
  
    return 0;
}
