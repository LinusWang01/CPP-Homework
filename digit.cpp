#include"iostream"
using namespace std;
int error(int a)
{   int re;
	if(a<0)
	{
		cout<<"It is a negetive number"<<endl;
	    re=0;
	}
	else re=1;
	return re;
}
int digit(int a)
{   int i;
	for(i=0;a>0;i++)
	   a=a/10;
	return i;
}
int main()
{
	int num,digi;
	cout<<"Please enter a non-negetive int number "<<"\n";
	cin>>num;
		if(error(num))
		{
		 digi=digit(num);
		 cout<<"The digits of the number are"<<" "<<digi<<endl;
		}
	system("pause");
	return 0;
}
