#include <iostream>
using namespace std; //allows me to write std::cout as just cout and std:endl as endl
//dont forget about std::string
int main(){
    int a = 1;
    int b = 2;
    int sum = a + b;

    double price = 10.99, gpa = 3.5;

    char grade = 'A';
    char safety = 'C';

    bool student = true;
    bool priceRaise = price > 11;

    cout << priceRaise << endl;
//normally std::string
    string name = "Chris";
    cout << "Hello " << name << "!" << endl;
    cout << "The price is " << price;

//prefix const fixes a variable to a value (READ ONLY). You can't change this value afterwards. Convention: All uppercase
    const double PI = 3.14159;


    return 0;
}