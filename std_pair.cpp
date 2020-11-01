#include <iostream>
#include <utility>

int main(int argc, char const *argv[])
{
    std::pair<int, std::string> pair;

    pair.first = 1;
    pair.second = "gokhan tarim";

    std::cout << pair.first << "-" << pair.second << std::endl;

    return 0;
}
