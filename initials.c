#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



char *cInitials;

int main(int argc, string argv[])
{
    int x = 0;
    if (argc > 1)
    {
        //verify input is NOT NULL
        //use for loop to iterate string arrays
        for (int i = 1; i < argc; i++)
        {
                if (isalpha(argv[i][0]))
                {
                    char c = argv[i][0];
                    // sprintf(cInitials, "%c", c);
                    cInitials[x] = toupper(c);
                    x++;
                }
        }
    }
    printf("%s\n", cInitials);
    return 0;
}
