#include <iostream>
#include <cmath>
using namespace std;
int int_sqrt(int x);
int Mypow(int di,int mi);
int main()

{
    int i;
    for(i=0;i<=100;i++)
    cout<<i<<"  "<<int_sqrt(i)<<endl;
    system("pause");
    return 0;
}
int int_sqrt(int x)
{
    int i;
    for(i=0;;i++)
    {
      if(x>=Mypow(i,2)&&x<Mypow(i+1,2))
          break;
    }
    return i;
}
int Mypow(int di,int mi)
{
    int i,tmp=1;
    for(i=0;i<mi;i++)
    tmp*=di;
    return tmp;
}
