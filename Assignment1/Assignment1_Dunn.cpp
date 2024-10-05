#include <iostream> 
using namespace std; 
int main() 
{ 
int age;
float height; 
char grade; 
string fullname; 

//Assign Values

age = 20; 
height = 6.0; 
grade = 'A';
fullname = "Cory Dunn";

//Perform Basic Operations 

age = age + 15; //age after 15 years
height = height + .5; // Height after a growth spurt of .5 inches


//Type conversion (Casting)

 float ageInFloat = static_cast<float>(age);

//Output Results 
cout << "Full Name; " << fullname << endl;
    cout << "Age after 15 years; " << age << " years" << endl;
    cout << "Height after a growth spurt of .5 inches; " << height << " feet" << endl;
    cout << "Grade I hope I get; " << grade << endl;
return 0;
}
