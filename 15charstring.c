// input a string 'str' from user.make it 'str' into 15 length character by placing the empty places with alternate**' and starting with and output it.

// NOTE please enter the string whose length is less than or equals to 15.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[15];
    int len;
    int i = 0;
    int n;
    bool f = true;
    scanf("%s", str);
    printf("\n");
    len = strlen(str);
    for (i = len; i < 16; i++)
    {
        str[i] = f ? '*' : '#';
        f = !f;
        if (i == 15)
            str[i] = '\0';
    }
    printf(str);
    return 0;
}