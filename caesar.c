#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{  
    // ends the program if user entered non compliant data
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("please use a single nonnegative integer\n");
        return 1;
    }
    // prompts user for intput
    string p = GetString();
    // cycles through string one letter at a time
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            // scales ascii back to 0, performs math, then scales it back up
            int k = atoi(argv[1]);
            int c;
            if (isupper(p[i]))
            {
                c = ((p[i] + k - 'A') % 26 + 'A');
                printf("%c", c);
            }
            else if (islower(p[i]))
            {
                c = ((p[i] + k - 'a') % 26 + 'a');
                printf("%c", c);
            }
            else
            {
                c = p[i];
                printf("%c", c);
            }
        } 
    printf("\n");
    return 0;
}
