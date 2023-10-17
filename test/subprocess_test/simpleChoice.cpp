#include <iostream>
#define print(x) std::cout << x << std::endl
#define print2(x) std::cout << x << std::flush
int main()
{
    int choice;
    std::cin >> choice;

    if (choice == 1) print("You chose 1");
    else if (choice == 2) print("You chose 2");
    else if (choice == 3) print("You chose 3");
    else print("invalid choice"); 
}