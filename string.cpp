#include<iostream>
#include<string>
using namespace std;
string str;
string tstr[100];
int num[100];
int index=0,des=0;
int tenpow(int mi)
{
        int temp=1;
        for(int i=0;i<mi;i++)
                temp*=10;
        return temp;
}
int string_to_int(string str)
{
        int i,temp=0;
        for(i=0;;i++)
        {
                if(str[i]=='\0')
                        break;
                else
                        temp+=(str[i]-48)*tenpow((str.length
()-i-1));
        }
        return temp;
}
int scan(int des)
{
        int flag=0;	
	int i;
	for(i=des;;i++)
		{ 
			if(str[i]>='0'&&str[i]<='9')
		     {	
                        tstr[index]+=str[i];
                        flag=1;
                     }			
			else
				break;
		}
       	if(flag)
            {
               index++;
               flag=0;
            }	
	return i;
} 
int main()
{
	cin>>str;
	while(1)
	{
		des=scan(des);
		if(str[des]=='\0')
			break;
		des++;
	}
	for(int p=0;p<index;p++)
		num[p]=string_to_int(tstr[p]);
        for(int q=0;q<index;q++)
                cout<<num[q]<<" ";
                cout<<endl;
        cout<<index<<endl;
	return 0;
}
