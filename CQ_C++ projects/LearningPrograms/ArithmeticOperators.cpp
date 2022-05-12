#include <iostream>
using namespace std;

int main(){
//addition 
int a = 1;
a = a + 1;
a += 1;
a++;

//subtraction
int b = 10;
b = b - 1;
b -= 1;
b--;

//multiplication
int c = 1;
c = c * 2;
c *= 2;

//division
int d = 100;
d = d / 2;
d /= 2;

//modulus %
int remainder = (10 + 1) % 3;

//ternary operator
// condition ? expression1 : expression2; --> alt for if else statements
string response;
int moneyCollected = 100, moneyPayed = 50;
moneyCollected > moneyPayed ? response = "Rich" : response = "Broke";

cout << response;
return 0;
}
