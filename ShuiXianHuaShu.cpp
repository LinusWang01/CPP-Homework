#include <iostream>
using namespace std;
int num0,digit;
int num[5];
int mix(int di,int mi)
{
    int i,m=1;
    for(i=0;i<mi;i++)
    m*=di;
    return m;
}
int number(int a)
{
    int i;
    for(i=0;a>0;i++)
    {
      num[i]=a%10;
      a/=10;
    }
    return i;
}
int  mixjudge(int a)
{
    int i,sum;
    for(i=0;i<digit;i++)
        sum=sum+mix(num[i],digit);
    if(sum==a)
       cout<<sum<<endl;
    sum=0;
}
int main()
{   cout<<"The narcissistic numbers less than 1000000 are:"<<endl;
    for(num0=0;num0<1000000;num0++)
    {
        digit=number(num0);
        mixjudge(num0);
    }
    system("pause");
    return 0;
}
