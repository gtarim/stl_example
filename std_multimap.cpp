#include <iostream>
#include <map>

int main(int argc, char const *argv[])
{
    std::multimap<int, std::string> multimap;

    multimap.insert(std::pair<int, std::string>(3, "gokhan"));
    multimap.insert(std::pair<int, std::string>(32, "tarim"));
    multimap.insert(std::pair<int, std::string>(13, "go"));
    multimap.insert(std::pair<int, std::string>(535, "khan"));

    // multimap.erase(multimap.begin(), multimap.find(3)); // to remove

    return 0;
}
