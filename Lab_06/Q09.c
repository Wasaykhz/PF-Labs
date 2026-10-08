#include <stdio.h>
int main() {
    char word[20];
    printf("Enter a word: ");
    scanf("%s",&word);

    int count = 0;
    while (word[count] != '\0') count++;
    printf("Original Word: %s\n",word);
    printf("Word Length: %d\n",count);

    printf("Reversed word: ");
    for (int i = count - 1; i >= 0; i--) printf("%c", word[i]);
    
    int palindrome = 1;
    for (int i = 0; i < count / 2; i++)
    {
        if (word[i] != word[count - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) printf("\nPalindrome: Yes");
    else printf("\nPalindrome: No");
    
    int vowels = 0, consonants = 0;
    for (int i = 0; i < count; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') vowels++;
        else consonants++;
    }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);

    return 0;
}
