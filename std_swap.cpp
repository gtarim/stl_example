#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
    int val1 = 15;
    int val2 = 20;

    std::cout << "val1=" << val1;
    std::cout << " val2=" << val2 << std::endl;
    
    std::swap(val1,val2);

    std::cout << "val1=" << val1;
    std::cout << " val2=" << val2 << std::endl;

    return 0;
}
