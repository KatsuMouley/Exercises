#include <stdio.h>
#define MAX 50
int main()
{
    char str[MAX];

    // MAX Size if 50 defined
    fgets(str, MAX, stdin);

    printf("String is: \n");

    // Displaying Strings using Puts
    puts(str);

    return 0;
}