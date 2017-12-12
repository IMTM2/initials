#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char getFirst(char *arrName);
string getInitials(char *arrName, char *cInit);

//https://cs50.stackexchange.com/questions/7793/is-there-a-way-to-store-user-input-as-an-array-of-strings-without-making-the-pro
// https://cs50.stackexchange.com/questions/20648/identifying-a-blank-space-in-a-string-pset2

char *cName;
int n = 0; //this will hold the length of characters entered by user

int main(void)
{
    char cInitials[5]; //for testing purposes -- initials shouldn't be more than total of 4 characters
    printf("Enter your name: ");
    string getName = get_string();
    if (getName != NULL) //make sure user entry is not null
    {
        n = strlen(getName);
        cName = strtok(getName, ""); //convert user entry to array of characters
        char a = getFirst(cName); // a will equal the first valid initial
        sprintf(cInitials, "%c", a);
        sprintf(cInitials, "%s", getInitials(cName, cInitials)); //the other initials will be added here
        printf("%s\n", cInitials); //output
    }
}
char getFirst(char arrName[]) //gets the first alphabetical letter from user entry
{
    char a;
    for (int i = 0; i < n; i++)
    {
        while (isalpha(arrName[i])) //checks that the character is alphabetical
        {
            a = toupper(arrName[i]); // if so, then get the uppercase value of character
            return a;
        }
    }
    return 0;
}
string getInitials(char arrName[], char cInit[]) // gets the remaining characters that may be initials
{
    char a;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
     if (isalpha(arrName[i]) && isspace(arrName[i - 1])) //if character returned is alphabetical and the space before is blank
        {
            {
                j++;
                a = toupper(arrName[i]); //then get the value of character and make it uppercase
                cInit[j] = a;
            }
        }
    }
    return cInit;
}
