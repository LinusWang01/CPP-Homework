#include<iostream>
using namespace std;
int main()
{

	for(int i=1;i<6;i++)
	{
		for(int m=0;m<((9-(2*i-1))/2);m++)
			cout<<" ";
		for(int q=0;q<(2*i-1);q++)
			cout<<"*";
		cout<<endl;

	}

	return 0;




}
