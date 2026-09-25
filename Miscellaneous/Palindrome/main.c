#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool if_palindrome(const char *word)
{
    int left = 0;
    int right = strlen(word)-1;

    while(left<right)
    {
        if (word[left] != word[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main(void)
{
    char word[100];

    printf("Give me a word: ");
    scanf("%99s", word);

    printf("%s\n", word);

    if (if_palindrome(word))
    {
        printf("%s is a palindrome\n", word);
    }
    else 
    {
        printf("%s is not a palindrome\n", word);
    }

    return 0;
}