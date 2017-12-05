#include <iostream>
using namespace std;
void select_sort(int *p,int n);
int num[10];
int mini,sig;
int main() 
{
	for(int i=0;i<10;i++)
		cin>>num[i];
	select_sort(num,10);
	for(int i=0;i<10;i++)
		cout<<num[i]<<" ";
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
