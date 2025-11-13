#include <stdio.h>

// building a basic caluator that performs addition,substraction,multiplication,division of 2 numbers
// gives output value in float till 2 decimals
// has option to perform another calculation

int main()
{
    char next_op;
    do
    {
        float num1; // entering input 1
        printf("enter the number 1:");
        scanf("%f", &num1);
        char op; // operation you want to perform('+','-','X')
        printf("enter the operator:");
        scanf(" %c", &op);
        float num2; // entering input 2
        printf("enter the number 2:");
        scanf("%f", &num2);

        switch (op)
        {
        case '+':
        {                            // used this as in case float is declared
            float add = num1 + num2; // case for addition opertion
            printf("%.2f", add);
            break;
        }
        case '-':
        {
            float subs = num1 - num2; // case for substraction operation
            printf("%.2f", subs);
            break;
        }
        case 'x': // for lowercase if inputted
        case 'X': // for uppercase if inputted
        {
            float multiply = num1 * num2; // case for multiplication operation
            printf("%.2f", multiply);
            break;
        }
        case '/':
        {
            if (num2 != 0) // division if denominator = 0 is undefined
            {
                float div = num1 / num2; // case for divison if denominator not 0
                printf("%.2f", div);
            }
            else // when denominator is 0
            {
                printf("the divison is not possible");
            }
            break;
        }
        default:
            printf("you entered invalid operator"); // i any other operator is entered
            break;
        }
        printf("you want to do another calculation(y or n)"); // enter y for next calcultaion OR enter n to ignore
        scanf(" %c", &next_op);                               // space before %c to prevent newline issue
    } while (next_op == 'y' || next_op == 'Y'); // loop for performing another calculation
    // if 'y' enetered loop will go for another calculation round if 'n' loop will be terminated

    return 0; // code sucessfully terminated
}