#include <stdio.h>

int main() {
    // Declaring an array of floating-point numbers with size 5
    float numbers[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Traversing the array using a for loop
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %.1f\n", i, numbers[i]);
    }

    return 0;
}

//Out put:-
Array elements:
Element 0: 1.1
Element 1: 2.2
Element 2: 3.3
Element 3: 4.4
Element 4: 5.5
