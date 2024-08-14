// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool has_lower, has_upper, has_digit, has_symbol;
    for (int i = 0; i < strlen(password); i++)
    {
        char letter = password[i];

        if (islower(letter))
        {
            has_lower = true;
        }
        else if (isupper(letter))
        {
            has_upper = true;
        }
        else if (isdigit(letter))
        {
            has_digit = true;
        }
        else
        {
            has_symbol = true;
        }

        if (has_lower && has_upper && has_digit && has_symbol)
        {
            return true;
        }
    }
    return false;
}
