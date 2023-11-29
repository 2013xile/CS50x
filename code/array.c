#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // // Initialize array
    // int a[5] = {1, 2, 3, 4, 5};
    // int b[] = {1, 2};
    // // Assign
    // int c[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     c[i] = a[i];
    // }
    // // Two-dimension array
    // // int d[2][2] = {{1, 2}, {3, 4}};
    // // for (int i = 0; i < 2; i++)
    // // {
    // //     for (int j = 0; j < 2; j++)
    // //     {
    // //         printf("(%d, %d) = %d\n", i, j, d[i][j]);
    // //     }
    // // }
    // char str[] = "abc";
    // str[0] = 'b';
    // printf("%s\n", str);

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 1;
}

// // Passed by Reference VS Passed by value
// void set_array(int array[4]);
// void set_int(int x);
// int main(void)
// {
//     int a = 10;
//     int b[4] = {0, 1, 2, 3};
//     set_int(a);
//     set_array(b);
//     printf("%d %d\n", a, b[0]);
// }
// void set_array(int array[4]) { array[0] = 22; }
// void set_int(int x) { x = 22; }
