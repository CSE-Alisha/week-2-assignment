#include <stdio.h>
int main()
{
    char str1[20], str2[20], final[41];
    int len1, len2, i;
    printf("Enter string 1:");
    scanf("%s", &str1);
    printf("Enter string 2:");
    scanf("%s", &str2);
    for (len1 = 0;;)
        if (str1[len1] != '\0')
        {
            final[len1] = str1[len1];
            len1++;
        }
        else
            break;
    for (len2 = 0;;)
        if (str2[len2] != '\0')
        {
            final[len1 + len2] = str2[len2];
            len2++;
        }
        else
            break;
    for (i = len1 + len2 - 1; i >= 0; i--)
        printf("%c", final[i]);
    return 0;
}