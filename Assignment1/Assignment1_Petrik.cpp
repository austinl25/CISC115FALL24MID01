#include<iostream>
#include<string>
using namespace std;
int main()
{
    //This varibale called name stores my first name Steven
    string name = "Steven";
    //This variable stores an integer number of 57 which will be converted to my actual age
    int age = 57;
    //This variable stores my actual height as a decimal
    double height = 5.4;
    //This variable stores the grade I want as a single character
    char grade = 'A';
    //This changes the age variable by dividing the number by three to get the number nineteen
    age = (age / 3);
    //This changes my age to a decimal 
    double newAge = age;
    //This rounds my height down to be 5ft
    double newHeight = static_cast<int>(height);
    //These statements allow for the variables stored to be displayed in readable text on the terminal 
    cout<<"My name is: "<<name<<endl;
    cout<<"This is my very first basic program in C++!"<<endl;
    cout<<"Age: "<<age<<" years"<<endl;
    cout<<"Height: "<<height<<"ft"<<endl;
    cout<<"I want my Grade in CISC115 to be: "<<grade<<endl;
    cout<<"New Age (double): "<<newAge<<" years"<<endl;
    cout<<"Rounded Height (int): "<<newHeight<<"ft"<<endl;
}
