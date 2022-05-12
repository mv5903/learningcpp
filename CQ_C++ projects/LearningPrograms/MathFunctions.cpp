#define _USE_MATH_DEFINES //for pi,e,etc
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main(){
    double x = 3, y = 4, point = -2.64, z, s, a, b;
    z = max(x,y);
    s = min(x,y); 
    a = pow(x,y); //requires #include <cmath>
    b = sqrt(y);
    point = abs(point);
    point = round(point);
    const double PI = M_PI;

    
    //also ceil()
    //floor()
    cout << "max: " << z << '\n' << "min: " << s << '\n' << "pi: " << PI;
    return 0;
}