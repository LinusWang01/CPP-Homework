#include<iostream>
#include<string>
using namespace std;
string str;
int num;
int tenpow(int mi)
{
	int temp=1;
	for(int i=0;i<mi;i++)
		temp*=10;
	return temp;
}
int int_to_string(string str)
{
	int i,temp=0;
	for(i=0;;i++)
	{
		if(str[i]=='\0')
			break;
		else
			temp+=(str[i]-48)*tenpow((str.length()-i-1));
	} 
	return temp;
}
int main()
{
cin>>str;
num=int_to_string(str);
cout<<num<<endl;






}
