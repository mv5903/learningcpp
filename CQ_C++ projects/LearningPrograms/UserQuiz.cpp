#include <iostream>
using namespace std;

// cout << insertion operator
// cin >> extraction operator (in this case it uses user input)

int main(){

    int answer1;
    double score;
    string answer2;

    cout << "What is 1 + 1?" << endl;
    cin >> answer1;
    if (answer1 == 2) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    cout << "What is the color of sulfur?" << endl;
    cin >> answer2;
    if (answer2 == "yellow") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }
    cout << "Your score is: " << score/2 * 100 << "%";
    return 0;
}