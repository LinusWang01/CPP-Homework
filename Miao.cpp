#include <iostream>

using namespace std;

int main()
{   int c,h,hand;
    for(c=0;c<100;c++)
        for(h=0;h<100;h++)
          for(hand=0;hand<100;hand++)
             if(c*3==30&&c+h*2==20&&h+4*hand==9)
             cout<<h+(hand*(c-hand))<<endl;
    return 0;
}
