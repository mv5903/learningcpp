#include <iostream>
#include <string>
#include <cstdio>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    for (int i: arr) {
        std::cout << i << std::endl;
    }
}