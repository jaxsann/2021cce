#include <stdio.h>
int main()
{   ///�Q���D100�H�U���Ҧ����
    for(int n=2;n<=100;n++) ///������,��n�O���O��� ///n���,�u��1�Mn�i�H�㰣
    {
        int bad=0;
        for(int i=2;i<n;i++){
            if(n%i==0) bad=1;
        }
    if(bad==0) printf("%d ",n);  ///���F
    }
}


