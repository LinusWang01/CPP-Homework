#include <iostream>
using namespace std;
int num0;
int num[5];
int Mypow(int di,int mi);
int no_of_digits(int x);
bool is_narcissistic(int x);
int main()
{
    cout<<"The narcissistic numbers less than 1000000 are:"<<endl;
    for(num0=0;num0<1000000;num0++)
    {
        if(is_narcissistic(num0))
            cout<<num0<<endl;
    }
    system("pause");
    return 0;
}
int Mypow(int di,int mi)
{
    int i,m=1;
    for(i=0;i<mi;i++)
    m*=di;
    return m;
}
int no_of_digits(int x)
{
    int i,flag;
    if(x==0)
    return 1;
    if(x<0)
    {
      x=-x;
      flag=1;
    }
    else
    flag=0;
    for(i=0;x>0;i++)
    {
      num[i]=x%10;
      x/=10;
    }
    if(flag)
        return -i;
    if(!flag)
        return i;
}
bool is_narcissistic(int x)
{
    int i,sum,digit;
    digit=no_of_digits(x);
    for(i=0;i<digit;i++)
    sum=sum+Mypow(num[i],digit);
    if(sum==x)
    return true;
    else
    return false;
}
