#include <iostream>
#include <set>

int main(int argc, char const *argv[])
{
    std::multiset<int, std::greater<int>> multiset;

    multiset.insert(3);
    multiset.insert(32);
    multiset.insert(13);
    multiset.insert(535);

    // multiset.erase(multiset.begin(), multiset.find(3)); // to remove

    return 0;
}
