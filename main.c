#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
double nth_root(double, double);

int main()
{
    // Array of function pointers for the different operations
    double (*ptrFUNC[6])(double, double) = {addition, subtraction, multiplication, division, pow, nth_root};
    int c;
    double a, b;
    
    printf("Select an option to perform an operation : ");
    printf("\n 1.) ADDITION\n 2.) SUBTRACTION\n 3.) MULTIPLICATION\n 4.) DIVISION\n 5.) POWER\n 6.) N'TH ROOT (eg: (5, 4) = FIFTH ROOT OF 4)\n");
    scanf("%d", &c);

    // Check for invalid choice
    if (c < 1 || c > 6) {
        printf("Invalid Entry\n");
        return EXIT_FAILURE; // Return non-zero to indicate an error
    }
    printf("\n-> Enter two numbers : ");
    scanf("%lf %lf", &a, &b);

    // Adjust the array index by subtracting 1 to match menu choice (0-based array index)
    printf("\nRESULTS = %lf\n", ptrFUNC[c - 1](a, b));
    return 0;
}

// Function definitions
/* Addition */
double addition(double a, double b){return a + b;}
/* Subtraction*/
double subtraction(double a, double b){return a - b;}
/* Multiplication */
double multiplication(double a, double b){return a * b;}
/* Division */
double division(double a, double b){return a / b;}
/* Nth Root */
double nth_root(double a, double b){return pow(b, 1.0 / a);}