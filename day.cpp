#include<iostream>
using namespace std;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int year,mon;
int day,sum;
int main()
{
		
		cin>>year>>mon>>day;
	        for(int i=0;i<mon-1;i++)
			sum+=month[i];
                sum=sum+day;
		if((((year%4==0)&&!(year%100))||(year%400==0))&&((mon>2)))
	  		sum=sum+1;
		cout<<sum<<endl;
	
}
