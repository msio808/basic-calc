#include <stdio.h>
#include <stdlib.h>

float addition(float, float);
float subtraction(float, float);
float multiplication(float, float);
float division(float, float);

int main()
{
    // Array of function pointers for the different operations
    float (*ptrFUNC[4])(float, float) = {addition, subtraction, multiplication, division};
    int c;
    float a, b;
    
    printf("Select an option to perform an operation : ");
    printf("\n 1.) ADDITION\n 2.) SUBTRACTION\n 3.) MULTIPLICATION\n 4.) DIVISION\n");
    scanf("%d", &c);

    // Check for invalid choice
    if (c < 1 || c > 4) {
        printf("Invalid Entry\n");
        return EXIT_FAILURE; // Return non-zero to indicate an error
    }
    printf("-> Enter two numbers : ");
    scanf("%f %f", &a, &b);

    // Adjust the array index by subtracting 1 to match menu choice (0-based array index)
    printf("%.2lf\n", ptrFUNC[c - 1](a,b));
    return 0;
}

// Function definitions
/* Addition */
float addition(float a, float b){return a + b;}
/* Subtraction*/
float subtraction(float a, float b){return a - b;}
/* Multiplication */
float multiplication(float a, float b){return a * b;}
/* Division */
float division(float a, float b){return a / b;}