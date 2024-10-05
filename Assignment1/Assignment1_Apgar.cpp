#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    double height = 5.9;
    // Converting from one variable type to another
    double heightFeet = (int) 5.9;
    double heightInches = 5.9;
    // Changing variable using operators
    heightInches -= 5;
    heightInches *= 10;
    char grade = 'A';

    std::cout << "I am " << age << " years old.\n";
    std::cout << "My height is " << height << ", or in other words I am " << heightFeet << " feet and " << heightInches << " inches.\n";
    std::cout << "By the end of the semester I hope I will get an " << grade << ".";

    return 0;
}