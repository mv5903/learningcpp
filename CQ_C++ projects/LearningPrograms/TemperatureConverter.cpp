#include <iostream>
using namespace std;

int main(){
    cout << "Input temperature (no degree unit): ";
    double temp;
    cin >> temp;
    cout << "Input degree unit (C,F,K): ";
    char unit;
    cin >> unit;
    cout << "Input unit to convert to (C,F,K): ";
    char convert;
    cin >> convert;
    double newTemp;
    if (unit != convert){ //avoids unnecessary calculation if unit is converted to itself.
        switch (unit){
            case 'C':
                convert == 'F' ? newTemp = temp * 9/5 + 32 :  newTemp = temp + 273.15;
                break;
            case 'F':
                convert == 'C' ? newTemp = (temp - 32) * 5/9 : newTemp = (temp - 32) * 5/9 + 273.15;
                break;
            case 'K':
                convert == 'C' ? newTemp = temp - 273.15 :  newTemp = (temp - 273.15) * 9/5 + 32;
                break;
        }
    } else {
        newTemp = temp;
    }
    cout << "Your new temperature is: " << newTemp;

    return 0;
}