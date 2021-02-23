#include <iostream>

void welcome_message()
{
    std::cout << "Hello World!" << '\n' << std::endl;
}

//returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return (x == y);
    // operator == returns true if x equals y, and false otherwise
}