#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: ");
    int length = strlen(message);
    int bulbs[length][BITS_IN_BYTE];

    for (int i = 0; i < length; i++)
    {
        int c = (int)message[i];
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            bulbs[i][j] = c % 2;
            c /= 2;
        }
    }

    for (int i = 0; i < strlen(message); i++)
    {
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            print_bulb(bulbs[i][j]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    } else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
