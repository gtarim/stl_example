#include <iostream>
#include <sstream>
int main()
{
    int val = 30;

    std::cout << "in octal:   " << std::oct << val << '\n'
              << "in decimal: " << std::dec << val << '\n'
              << "in hex:     " << std::hex << val << '\n';
}
