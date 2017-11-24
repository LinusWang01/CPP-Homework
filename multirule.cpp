#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<10;i++)
		for(int l=1;l<10;l++)
			{
				cout<<i<<"*"<<l<<"="<<i*l<<" ";
        			if(i==l)
        			{	
					cout<<endl;
					break;
				}
			}
}
