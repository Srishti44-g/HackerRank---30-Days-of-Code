include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int  j;
    double e ;
    char ch[100];
    scanf("%d \n",&j);
    scanf("%lf \n",&e);
    scanf("%[^\n]%*c",ch);
     printf("%d \n",i+j);
     printf("%0.1lf \n",d+e);
    printf("%s%s", s,ch);
    

    return 0;
}