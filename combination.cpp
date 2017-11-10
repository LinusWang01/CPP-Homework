#include <iostream>

using namespace std;

int main()
{
    int m,n,p,q,sum=0;
    for(m=0;m<9;m++)
        for(n=0;n<9;n++)
            for(p=0;p<9;p++)
                for(q=0;q<9;q++)
                    if((m==1||m==2||m==3||m==6||m==7||m==8)&&(n==1||n==2||n==3||n==6||n==7||n==8)&&(p==1||p==2||p==3||p==6||p==7||p==8)&&(q==1||q==2||q==3||q==6||q==7||q==8)&&(((10*m+n)-(10*p+q))==35)&&(!(p==q))&&(!(p==m))&&(!(p==n))&&(!(q==m))&&(!(q==n))&&(!(m==n)))
                       ++sum;
		    cout<<sum<<endl;
                    system("pause");
                    return 0;
}
