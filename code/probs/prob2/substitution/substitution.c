#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check the number of arguments
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    // Check if the key is valid
    // 1. 26 chars
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    // 2. Only alphabetic character
    // 3. No duplicate characters
    int count[26] = {0};
    for (int i = 0; i < strlen(key); i++)
    {
        char c = key[i];
        if (!isalpha(c))
        {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }
        c = tolower(c);
        if (count[c - 'a'] > 0)
        {
            printf("Key must not contain duplicate characters.\n");
            return 1;
        }
        count[c - 'a']++;
    }
    // Prompt the user for plaintext
    string plaintext = get_string("plaintext: ");
    string ciphertext = plaintext;
    // Output ciphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (islower(plaintext[i]))
        {
            int index = plaintext[i] - 'a';
            char c = key[index];
            ciphertext[i] = tolower(c);
        } else if (isupper(plaintext[i]))
        {
            int index = plaintext[i] - 'A';
            char c = key[index];
            ciphertext[i] = toupper(c);
        }
    }
    printf("ciphertext: %s\n", ciphertext);
}
