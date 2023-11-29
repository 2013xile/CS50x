#include <cs50.h>
#include <stdio.h>

int get_cents(void);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    int values[] = {25, 10, 5, 1};
    int coins = 0;
    for (int i = 0; i < 4; i++)
    {
        coins += cents / values[i];
        cents %= values[i]; // cents = cents % values[i];
    }
    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int owed;
    do
    {
        owed = get_int("Change owed: ");
    } while (owed < 0);
    return owed;
}
