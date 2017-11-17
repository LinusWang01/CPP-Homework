#include<iostream>
using namespace std;
	int main()
	{
		int num[1000];
		int flaga[1000];
		bool flag=true;
		int length=21;
		int i;
		num[length]=2147483647;
		for(i=0;i<length;i++)
		{
			cin>>num[i];
			cout<<num[i]<<" ";
		}
		do
		{
			for(int i=0;i<length;i++)
			{
				if(num[i]>num[i+1])
				{
					int temp;
					temp=num[i];
					num[i]=num[i+1];
					num[i+1]=temp;
					flaga[i]=1;
				}
				else
				flaga[i]=0;
			}
			flag=flaga[0];
			for(int p=0;p<length;p++)
			{
				cout<<flaga[p]<<" ";
				flag=flag||flaga[p];
			}
			cout<<endl;
		}while(flag==1);
		for(int m=0;m<length;m++)
		cout<<num[m]<<" ";
		cout<<endl;

	}
