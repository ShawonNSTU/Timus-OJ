/*
    Email: shuvroshawon9@gmail.com
    ID: ShawonNSTU
*/

#include <stdio.h>
#include <math.h>
#define MAX 164000
int prime[MAX];
int ara[15001];
void seive()
{
    int i,j,k=0;
    prime[0]=prime[1]=1;
    for(i=2;i<MAX;i++)
        prime[i]=0;
    for(i=4;i<MAX;i+=2)
        prime[i]=1;
    for(i=3;i<=sqrt(MAX);i+=2){
        for(j=i*i;j<MAX;j+=i)
            prime[j]=1;
    }
    for(i=2;i<MAX;i++){
        if(prime[i]==0)
            ara[++k]=i;
    }
}
int main()
{
    seive();
    int t,num;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        printf("%d\n",ara[num]);
    }
    return 0;
}
