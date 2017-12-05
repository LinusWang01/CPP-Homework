#include <iostream>
using namespace std;
void select_sort(int *p,int n);	
void max_min(int *p,int n,int *p1);//用回参数组p1做返回 
int num[10];
int mini,sig;
int main() 
{	int p1[5];
	for(int i=0;i<10;i++)
		cin>>num[i];
	max_min(num,10,p1);
	for(int i=0;i<5;i++)
		cout<<p1[i]<<" ";
	cout<<endl;
	return 0;
}
void select_sort(int *p,int n) 
{
	int flag=0;
	for(int q=0;q<n;q++)
		{	flag=0;
			mini=*(p+q);
			for(int y=q;y<n;y++)
			{
				if(*(p+y)<mini)
				{
					mini=*(p+y);
					sig=y;
					flag=1;
				}
					
			}
				if(flag)
				{
				*(p+sig)=*(p+q) ;
				*(p+q)=mini;
				}
		}
}
void max_min(int *p,int n,int *p1)
{	
	select_sort(p,n);
	for(int i=0;i<4;i++)
		*(p1+i)=*(p+((n/4*i)));
	*(p1+4)=*(p+n-1);
} 
