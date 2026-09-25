/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main()
{
    char line[100];
    char name[20];
    char surname[20];
    char day[10];
    char month[20];
    char year[10];
    char number[20];
    
    printf("Enter your name and surname: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s %s", name, surname);       

    printf("Enter your date of birth (day month year): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s %s %s", day, month, year);

    printf("Enter your phone numer (XX-XXXXXXXXX): ");
    scanf("%s", number);

    printf("Name\t: %s %s\n", name, surname);
    printf("DOB\t: %s %s %s\n", day, month, year);
    printf("Mobile\t: %s\n", number);

    return 0;
}