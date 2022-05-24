/*
Demonstrates the differences between C++ and Java. If what you're looking for isn't already mentioned here, it's probably the same as it is in Java!
Matthew Vandenberg
*/

#include <iostream> //for printing, getting user input, and other io operations
#include <cmath> //for math functions like log, sin, etc
#include <fstream> //for working with files
#include <string> //for advanced strings

using namespace std;

// Functions must be defined before they are used, or there's an alternative (uncomment to run, and also call them wherever you'd like in the code):
void variables();


int main() {
	// With the using namespace approach 
	cout << "Hello World!";

	// Directly referencing the library
	std::cout << "Hello World with direct reference!";


	// Line breaks:
	cout << "Line \n Break";

	// Another option:
	cout << "Line " << endl << " Break" << endl;

	// Program executed successfully
	variables();

	return 0;
}

/*  VARIABLES  */

void variables() {
	// All types of variables: 
	int integer = 5;
	double doubleNumber = 5.43;
	char myLetter = 'D';
	string text = "String";
	bool boolean = true;

	// Constants
	const int constant = 0;

	// Scientific notation
	int scientific = 10e5;


	// Displaying variables
	cout << "Integer variable: " << integer << endl;

	// Arrays
	bool boolArr[] = {true, false, true, true};
	bool otherArr[5] = { true, false }; // if you know you are going to need more space in the future, you don't have to define it all initially.
	int size = sizeof(boolArr) / sizeof(bool); // by default, size is based on number of bytes. So you have to divide it by the type in order to get the length of an array

	int arr[] = {1, 2, 3, 4, 5};
	cout << "Length of Array: " << sizeof(arr) / sizeof(int) << endl;
}

/* USER INPUT */

void userInput() {
	cout << "Enter name: " << endl;
	string name;
	cin >> name;
	cout << "Hello " << name << endl;
}

/* STRUCTURES */
struct person {
	string name;
	int age;
};

void usingStructs() {
	person p;
	p.name = "Matthew";
	p.age = 4;
}

/* REFERENCES and POINTERS */

void references() {
	int pizzaBoxes = 5;
	int& numberBoxes = pizzaBoxes; // creates a reference to pizzaBoxes

	// Print both and you'll get the same result
	cout << "pizzaBoxes: " << pizzaBoxes << endl;
	cout << "numberBoxes: " << numberBoxes << endl;

	// Print the memory address of the variable
	cout << "pizzaBoxes memory address: " << &pizzaBoxes;
}
void pointers() {
	int age = 5;
	int* years = &age; // stores the memory address as the value

	// Does the same thing!
	cout << "age address: " << &age << endl;
	cout << "years address: " << years << endl;

	// Get back the value at that address (dereferencing)
	cout << "derefence: " << * years << endl;
}

/* FUNCTIONS */
void function(string name = "defaultName") {
	// Provide a default value for name if not provided
}
void referenceFunction(string& name) {
	// Tell c++ that you're passing in a reference!
}
void arrayFunction(int arr[5]) {
	// Full declaration is required for function parameters
}

/* CLASSES AND OBJECTS */
class Car {
public:
	string model;
	int age;

	Car(string model, int age) { // Constructors. If none provided, a default constructor is implicitly defined, just like in java
		this->model = model;
		this->age = age;
	}

	void sayHi() {
		cout << "Hi" << endl;
	}

	void outsideClass(); //define later, outside of class
};

void Car::outsideClass() {
	cout << "This is the outside of a class!" << endl;
}

void creatingClasses() {
	Car car("Chevy", 10); // create a car
	car.model = "Toyota"; // overwrite values later
	car.age = 10;
}

/* INHERITANCE */
class Animal {

};

class Vehicle {

};

class Mammal : Animal {
	// Extend the Animal Class
};

class Tranformer : public Animal, public Vehicle {
	// Multiple Inheritance
};

/* FILES */
void files() {
	// Create and open a text file
	ofstream MyFile("filename.txt");

	// Write to the file
	MyFile << "Files can be tricky, but it is fun enough!" << endl;

	// Close the file
	MyFile.close();

	// Read from a file
	ifstream MyInputFile("filename.txt");

	// Get each line from file
	string text;
	while (getline(MyInputFile, text)) {
		cout << text;
	}

	MyInputFile.close();
}

/* Exceptions */
void exceptions() {
	try {
		int age = 15;
		if (age >= 18) {
			cout << "You are old enough.";
		}
		else {
			throw (age);
		}
	}
	catch (int age) {
		cout << "Your current age of " << age << " is not old enough!" << endl;
	}

	try {
		// Some code
	}
	catch (...) {
		// If you do not know the type of exception being thrown
	}
}




