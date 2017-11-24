#include<iostream>
using namespace std;
bool Array[17];
int i;
void filltrue();


int main()
{
	filltrue();
	int sum=0,sum1;
        i=0;
	while(sum<16)
		{      
                         
                        sum=0;
			if(Array[i]==1)
				sum1++;
			if(sum1==3)
			{
				Array[i]=0;
				sum1=0;
                        	for(int l=0;l<17;l++)
                        		cout<<Array[l];
                        	cout<<endl;
			}
                        if(i==16)
                        	i=-1;
			for(int q=0;q<17;q++)
				if(Array[q]==0)
                              		sum++;
                        
                        i++;
                }
	for(int x=0;x<17;x++)
        	cout<<Array[x];
        cout<<endl;
        for(int d=0;d<17;d++)
        	if(Array[d])
        		cout<<d+1<<endl;
}


void filltrue()
{
	for(i=0;i<17;i++)
	Array[i]=1;
}
