#include <stdio.h>
#include <stdlib.h>

struct coordinates {
    int x;
    int y;
};

void add_five_and_a_half(float);
void double_third_index(int[]);
void reset_coordinates(struct coordinates);

int main() {

    // ---- 1

    // Create a pointer of int that points to nothing

    // print the pointer value (the address in memory it points to)

    // print the pointer own address

    // ---- 2

    // Instantiate an integer holding a value of 50

    // What is its address in memory (without using a pointer)

    // Create a new pointer that points to the integer

    // Change the value of the integer using the pointer

    // ---- 3

    // Create 5 pointers of different type. Print the pointers' size.
    // Compare the results with people using a different machine / system

    // ---- 4

    // Uncomment the next two lines of code, and fix the problem.
    // The goal is to put 20 into an integer (using pointers of course...)

    // int *ptr_i;
    // *ptr_i = 20;

    // ---- 5

    // We want to increase a float by five and a half using a function.
    // Observe the current behavior, fix it if needed.
    // Constraint: the function add_five_and_a_half needs to keep its void return type.

    // float cost = 16.5f;
    // add_five_and_a_half(cost);
    // printf("The cost is now %.2f!\n", cost);

    // ---- 6

    // Take the slides 12 and 13, observe and understand what's going on.

    // Recreate the piece of code used as example and add some printf to show the different addresses like on the slides.

    // code ...

    // Still on the slides, why are 4 cases of memory jumped at once when the pointer is incremented ?

    // And how does the compiler knows how much it is supposed to jump ? Unless it's always 4... ?

    // bonus: do you know the difference between ++i and i++ ?
    // if not, try to understand with this code:

    // int variable = 10;
    // printf("The variable is %d\n", variable++);
    // printf("The variable is now %d\n", variable);

    // variable = 10;
    // printf("The variable is %d\n", ++variable);
    // printf("The variable is now %d\n", variable);

    // ---- 7

    // With the following code, alter the double_third_index function. Make it have the same behavior,
    // but "[]" are now forbidden in the function body (therefore, you can keep it in the signature).

    // int int_array[] = {0, 1, 2, 3, 4, 5};
    // double_third_index(int_array);
    // printf("The value of the third index is now %d.\n", int_array[2]);

    // Make now the same change in the printf line just above, to access the third index value.

    // Why can we give an array to a function, and don't have the same problem as in exercise 5 ?
    // Write a piece of code to prove your point.

    // ---- 8

    // You can also create pointers of pointers.

    // int a = 10;
    // int *pointer;
    // int **pointer_of_pointer;

    // Set "pointer" to point to "a" and "pointer of pointer" to point to "pointer"

    // code ...

    // Now use "pointer of pointer" to change the value of "a"

    // code ...

    // You can even do more ! Make a pointer to a pointer to a pointer to a pointer to a pointer. (5 layers)
    // For info, this is extreme and useless...

    // code ...

    // ---- 9

    // Create an array of char defining your name (ex: 'S' 'i' 'm' 'o' 'n')
    // Create another array of same size of pointer and make each pointer point to the corresponding letter in the first array
    // Using the pointer array, make all the letters of your name capitalized

    // code ...

    // ---- 10

    // An array is a hidden pointer
    // A string is an array of char
    // Show how this can become a place where double pointers are used (write and code)

    // explanation + code ...

    // hint => the main function can have different signature:
    // int main()
    // int main(void)
    // int main(int argc, char** argv)
    // int main(int argc, char* argv[])

    // ---- 11

    // Struct are super useful, you can define your own types.
    // They are used all the time.
    // Similar to exercise 5, a copy of a struct is given as function parameter.
    // fix the code below so it works. The struct is defined at the top of the file.

    // struct coordinates coord;
    // coord.x = 30;
    // coord.y = 50;

    // reset_coordinates(coord);

    // printf("After reset, x = %d and y = %d\n", coord.x, coord.y);

}

void add_five_and_a_half(float number) {
    number += 5.5f;
}

// pre: given array must be of size >= 3
void double_third_index(int array[]) {
    array[2] = array[2] * 2;
}

void reset_coordinates(struct coordinates c) {
    c.x = 0;
    c.y = 0;
}
