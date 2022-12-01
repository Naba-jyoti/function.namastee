//write a function that print NAMASTE if user is Indian and BONJOUR if the user is France.

#include<stdio.h>
void namaste();//function decleration
void bonjour();

int main()//function cell
{
    printf("Enter i for Indian & f for France:");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

    void namaste()//function defintion
    {
        printf("NAMASTE\n");
    }
    void bonjour()
    {
        printf("BONJOUR\n");
    }
