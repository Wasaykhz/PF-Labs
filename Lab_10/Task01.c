#include <stdio.h>
#include <string.h>

int main()
{
    char fb[500];   //feedback
    char result[2000];
    char *found;
    int Good, Bad;  // '1' if "good" or "bad" found

    printf("Enter customer feedback: ");
    fgets(fb, sizeof(fb), stdin);

    /* fgets keeps the newline, remove it */
    fb[strcspn(fb, "\n")] = '\0';

    printf("\nTotal characters in feedback: %lu\n", strlen(fb));

    Good = (strstr(fb, "good") != NULL);
    Bad  = (strstr(fb, "bad")  != NULL);
    printf("\nSentiment Report:\n");
    if (Good)
        printf("Keyword \"good\" found: Positive sentiment detected.\n");
    if (Bad)
        printf("Keyword \"bad\" found: Negative sentiment detected.\n");
    if (!Good && !Bad)
        printf("No emotional keywords found: Neutral feedback.\n");

    /* replace every "bad" with "not good" */
    while ((found = strstr(fb, "bad")) != NULL)
    {
        int pos = found - fb;          /* characters before "bad" */

        result[0] = '\0';
        strncat(result, fb, pos);      /* part before "bad"       */
        strcat(result, "not good");          /* replacement             */
        strcat(result, found + 3);           /* part after "bad"        */

        strcpy(fb, result);            /* copy back to fb   */
    }

    if (Bad)
        printf("\nUpdated review: %s\n", fb);

    return 0;
}
