#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long int llint;
double root[100000];
char str[1000],s[1000],string[20000][1000];
int main()
{
    int i,j,k=0,q=0,check,len;
    double p,m;
    llint n,sum;
    while(gets(str)){
        for(i=0;str[i];i++){
            if(isdigit(str[i])){
                j=0;
                while(isdigit(str[i])){
                    s[j++]=str[i++];
                }
                s[j]='\0';
            sum=0,m=0.0;
            len=strlen(s);
            for(j=len-1;j>=0;j--){
                p=pow(10.0,m);
                sum+=(s[j]-48)*p;
                m++;
            }
        root[k++]=sqrt(sum);
        if(str[i]=='\0') break;
            }
        }
    }
    for(i=k-1;i>=0;i--) printf("%.4lf\n",root[i]);
    return 0;
}
