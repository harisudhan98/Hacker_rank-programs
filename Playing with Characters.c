#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a,s[10],sen[100];
    scanf("%c%s",&a,&s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    //gets(sen);
    printf("%c\n%s\n%s",a,s,sen);
    return 0;
}
