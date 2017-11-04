#include <cmath>
#include <iostream>

using namespace std;

int main()
{
   constexpr  double a = -1.0;
   constexpr  double b  = 1.0;
   constexpr  double epsilon = 1E-7;

    int    n  = 2;
    double pi = 0, pi2, h;
    for (;;) {
            int i;
            double di1,di2;
            pi2=0;
        for(i=0;i<n;i++)
        {
            h=1.0/n;
            di1=sqrt(1-pow((h*i),2));
            di2=sqrt(1-pow((h*(i+1)),2));
            pi2=(di1+di2)*2*h+pi2;
        }
        if(abs(pi2-pi)<epsilon)
           break;
        pi=pi2;
        n++;
            }

    cout << "pi = " << pi << endl;
}
