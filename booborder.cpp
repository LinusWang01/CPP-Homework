#include<iostream>
using namespace std;
	int main()
	{
		int num[1000];
		int flaga[1000];
		bool flag=true;
		int length;
		int i;
                cout<<"请输入数据长度"<<endl;
                cin>>length;
		num[length]=2147483647;
		cout<<"请输入数据"<<endl;
		for(i=0;i<length;i++)
                	cin>>num[i];
                        int f=0;
		do
		{
                        
			for(int i=0;i<length-f;i++)
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
                f++;
		}while(flag==1);
		for(int m=0;m<length;m++)
		cout<<num[m]<<endl;
		

	}
