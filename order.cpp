#include<iostream>
using namespace std;
int num[10];
int in(int num0,int des);
void fillall();
void out();
int main()
{
   int i,num0,j;
   fillall();
   for(i=0;i<10;i++)
   {
	
	
	cin>>num0;
	for(j=0;j<10;j++)
		{
			if(num0<=num[j])
			  {
			   in(num0,j);
		           break;
		          }
		}
   }
	out();
}
int in(int num0,int des)
{
   int temp[20];
   for(int i=0;i<10;i++)
       temp[i]=num[i]; 
   for(int i=des;i<9;i++)
	{ 
	temp[i+1]=num[i];
	temp[des]=num0; 
	}
   for(int p=0;p<10;p++)
	num[p]=temp[p]; 
   for(int p=0;p<10;p++)
	temp[p]=0;
}
void out()
{
   
    for(int i=0;i<10;i++)
	cout<<num[i]<<"  "; 
        cout<<endl;
}
void fillall()
{
   for(int i=0;i<10;i++)
       num[i]=2147483647;
}
