#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Make sure every character in argv[1] is a digit
    string key = argv[1];
    if (!only_digits(key))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Convert argv[1] from a `string` to an `int`
    int k = atoi(key);
    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");
    // For each character in the plaintext:
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // Rotate the character if it's a letter
        plaintext[i] = rotate(plaintext[i], k);
    }
    printf("ciphertext: %s\n", plaintext);
}

bool only_digits(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    if (c >= 'a' && c <= 'z')
    {
        return 'a' + (c - 'a' + n) % 26;
    } else if (c >= 'A' && c <= 'Z')
    {
        return 'A' + (c - 'A' + n) % 26;
    } else
    {
        return c;
    }
}
