#include <iostream>

int main() {
    int size = 10;  // Size of the array

    // Create a dynamic array of integers
    int* array = new int[size];

    // Fill the array with values
    for (int i = 0; i < size; i++) {
        array[i] = i * 2;
    }

    // Print out the values in the array
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }

    // Don't forget to delete the array when you're done with it!
    delete[] array;

    return 0;
}

