#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");
    printf("5: *****\n");
    printf("6: ******\n");

    int n=6;
    for(int i=1;i<=n;i++) ///加糷,材i加
    {
        printf("%d: ",i);///材i加
        for(int k=1;k<=i;k++) printf("*");///材i加,i聋琍
            printf("\n");
    }

}
