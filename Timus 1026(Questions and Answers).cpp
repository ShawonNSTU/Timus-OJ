#include <iostream>
using namespace std;
#define MAX 100001
int ara[MAX],sort[MAX];
int main()
{
    string str;
    int i,j,n,q,k=0,number;
    int max=0,min=5000;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>number;
        if(number>max) max=number;
        if(number<min) min=number;
        ara[number]++;
    }
    cin.get();
    cin>>str;
    for(i=min;i<=max;i++){
        for(j=1;j<=ara[i];j++)
            sort[++k]=i;
    }
    cin>>j;
    for(i=0;i<j;i++){
        cin>>q;
        cout<<sort[q]<<endl;
    }
    return 0;
}
