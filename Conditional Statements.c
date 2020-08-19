#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d",&a);
    char ab[][10]={"","one","two","three","four","five","six","seven","eight","nine"};
    if(a<=9)
        printf("%s",ab[a]);
    else 
        printf("Greater than 9");
    return 0;
}
