#include <cs50.h>

// typedef struct {
//     int age;
//     string name;
// } Person;

int main()
{
    struct Person {
        int age;
        string name;
    } p0 = {20, "John"};

    struct A {
        struct Person p;
    };

    struct Person p1;
    p1.age = 20;
    p1.name = "John";
    int age = p1.age;
    struct Person p2 = {20, "John"};
    struct Person p3 = {.name = "John", .age = 20};
}
