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
    for(int i=1;i<=n;i++) ///先建出樓層,第i樓
    {
        printf("%d: ",i);///第i樓
        for(int k=1;k<=i;k++) printf("*");///第i樓,i顆星
            printf("\n");
    }

}
