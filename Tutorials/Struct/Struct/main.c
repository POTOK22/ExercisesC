#include <stdio.h>
#include <string.h>

struct MyStructure
{
    int myNum;
    char myLetter;
    char myString[30]; // string definition
};


int main(void)
{
    struct MyStructure s1;

    s1.myNum = 67;
    s1.myLetter = 'B';
    strcpy(s1.myString, "Some string"); // assigning a value to string by strcpy() function

    // simpler syntax
    struct MyStructure s2 = {45, 'C', "Different string"};

    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myString);

    printf("My second number %d\n", s2.myNum);
    printf("My second letter %c\n", s2.myLetter);
    printf("My second string %s\n", s2.myString);

    return 0;
}