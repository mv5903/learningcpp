#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin,name); //includes spaces

    int nameLength = name.length(); 
    bool isEmpty = name.empty();
    //name.clear() would 
    string newName = name.append(" is your name.");
    char letter = name.at(0); //returns letter at the first position in name
    string insertedName = name.insert(0, "@"); //Ex: Chris --> @Chris
    //name.find(' '); returns the location of the char as an int.
    //name.erase(start,end) erases the characters from start to end (notInclusive at end)




    return 0;
}
