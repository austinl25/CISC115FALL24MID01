#include <iostream>
#include <string>
using namespace std;

int main()
{
// These are the variables declared within this program.
string name;
int age;
float height;
char grade;
double newAge;
double newHeight;

//These are the initializations for the variables used within the program.
name = "Evan Gabriel";
age = 20;
newAge = age;
height = 5.7;
grade = 'A';
newHeight = static_cast<int>(height);


//These are the output statements in which the information from the variables is put into a stream.
cout <<"My name is: "<< name <<endl;
cout <<"This is my first C++ program ever!" <<endl;
cout <<"Age: "<< age <<endl;
cout <<"Rounded Age: "<< newAge <<endl;
cout <<"Height: "<< height <<endl;
cout <<"Rounded (Height): "<< newHeight <<endl;
cout <<"The grade I want: "<< grade <<endl;
cout <<"I look forward to working and learning with everyone this semester!" <<endl;

return 0;
}
