#include<iostream>
using namespace std;
	int main()
	{
	    int lengthA,lengthB;
	    int A[10];
	    int B[10];
	    cout<<"Please enter the length of arrayA"<<endl;
	    cin>>lengthA;
	    cout<<"Please enter the data of arrayA"<<endl;
		for(int i=0;i<lengthA;i++)
		   cin>>A[i];
		cout<<"Please enter the length of arrayB"<<endl;
	    cin>>lengthB;
	    cout<<"Please enter the data of arrayB"<<endl;
		 for(int i=0;i<lengthB;i++)
		   cin>>B[i];
		   int C[20];
		int num[1000];
		int flaga[1000];
		bool flag=true;
		int length=20;
		int i;
		for(int p=0;p<lengthA;p++)
		   num[p]=A[p];
		for(int q=0;q<lengthB;q++)
		   num[q+lengthA]=B[q];
		num[length]=2147483647;
		do
		{
		    flag=0;
			for(int i=0;i<length;i++)
			{
				if(num[i]>num[i+1])
				{
					int temp;
					temp=num[i];
					num[i]=num[i+1];
					num[i+1]=temp;
					flag=1;
				}
			}
		}while(flag==1);
		for(i=length-lengthA-lengthB;i<length;i++)
			{
			    C[i]=num[i];
			    cout<<C[i]<<" ";
			}
		cout<<endl;

	}
