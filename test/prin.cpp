#include <iostream>

int main()
{
    int a = 92;

    std::string test = "hello" + std::to_string(a);

    std::cout << test << std::endl;
}