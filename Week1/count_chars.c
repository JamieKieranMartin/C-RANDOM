#include <stdio.h>

void count_chars() {
    //  Declare an integer variable which will be used to count characters.
    //  Initialise the variable to zero.

    //  Enter a loop which continues indefinitely.
            // Read a single character code from standard input.

        // If the character code is equal to EOF, break out of the loop.

        // Increment the counter by 1.
    // End the body of the loop.

    // Display the number of characters processed.
    int count = 0;
    while (1 == 1) {
        char ch1 = getchar();
        if (ch1 == EOF) {
            break;
        }
        count++;
    }
    printf("The document contains %d characters.\n", count);
}


int main() {
	count_chars();
	return 0;
}
