#include <stdio.h>
int main()
{   ///稱笵100┮Τ借计
    for(int n=2;n<=100;n++) ///场代,代n琌ぃ琌借计 ///n借计,Τ1㎝n俱埃
    {
        int bad=0;
        for(int i=2;i<n;i++){
            if(n%i==0) bad=1;
        }
    if(bad==0) printf("%d ",n);  ///т
    }
}


