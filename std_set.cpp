#include <iostream>
#include <algorithm>
#include <set>

int main(int argc, char const *argv[])
{
    // std::set
    std::set<int> setList;

    setList.insert(30);
    setList.insert(31);
    setList.insert(32);
    setList.insert(33);
    setList.insert(34);
    setList.insert(35);

    setList.insert(35); // only one time can be stay in list

    // std::for_each
    std::for_each(setList.begin(), setList.end(), [](const int& val){ std::cout << val << std::endl; });

    return 0;
}
