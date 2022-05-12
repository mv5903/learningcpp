#include <iostream>
using namespace std;

int main(){
    //this is a comment similar to java
    /* 
    this is a multiline comment 
    -the shortcut is shift-alt-a
    */
    string name;
    cout << "What is your full name? " << endl;
    getline(cin >> ws,name); //this allows you to type spaces : also getline() is a function
                             // >>ws allows you to clear the buffer when asking a question prior to getline
    cout << "Hi " << name << endl;

    return 0;
}