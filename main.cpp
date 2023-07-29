#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Demonstrate swapping two standalone variables using pointers
    int var1 = 5;
    int var2 = 10;

    std::cout << "Before swap: var1 = " << var1 << ", var2 = " << var2 << std::endl;

    swap(&var1, &var2);

    std::cout << "After swap: var1 = " << var1 << ", var2 = " << var2 << std::endl;

    // Demonstrate creating and manipulating a dynamic array
    int size = 10;  // Size of the array

    // Create a dynamic array of integers
    int* array = new int[size];

    // Fill the array with values
    for (int i = 0; i < size; i++) {
        array[i] = i * 2;
    }

    // Swap the first two elements in the array
    std::cout << "Before swap: array[0] = " << array[0] << ", array[1] = " << array[1] << std::endl;
    
    swap(&array[0], &array[1]);

    std::cout << "After swap: array[0] = " << array[0] << ", array[1] = " << array[1] << std::endl;

    // Print out the values in the array
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }

    // Don't forget to delete the array when you're done with it!
    delete[] array;

    return 0;
}
