#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
        char operator;
        double a, b;

        while (1) {
                printf("Enter an operator (+, -, *, /) and 'exit' if you want to exit:\n");

                scanf("%s", &operator); // scanf takes in a pointer so
                                       // we have to use & to point to
                                       // the address that stores the variable
                                       // operand
                if ((strcmp("exit", &operator) == 0) || (strcmp("Exit", &operator) == 0)) {
                        exit(1);
                }

                printf("Enter first and second operands: ");

                scanf("%lf %lf", &a, &b); // &lf represents format string for double
                                            // precision flooating-point type

                switch(operator) {                        case '+':
                                printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
                                // %.1lf means to display one digit after the
                                // decimal point
                                break;
                        case '-':
                                printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
                                break;

                        case '*':
                                printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
                                break;

                        case '/':
                                printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
                                break;

                        default:
                                printf("Error :( Enter a valid operator");
                }
                printf("\n");



        }
}
