#include<iostream>
#include<string>
using namespace std;
string str; //输入的字符串储存在该变量中
string tstr[100];//进行字符串缓冲，第一次扫描将字符串放入该数组。
int num[100];//最终转换为整形储存在该数组中
int index=0,des=0;//index：作为tstr的“指针”，控制tstr的位置，des:作为str的“指针”，指示str的当前位置。
int tenpow(int mi)//求10的n次幂
{
        int temp=1;
        for(int i=0;i<mi;i++)
                temp*=10;
        return temp;
}
int string_to_int(string str)//将全为数字的字符串转换为整形变量
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
int scan(int des)//扫描字符串中的数字，将其存入tstr字符串数组中
{
        int flag=0;	
	int i;
	for(i=des;;i++)
		{ 
			if(str[i]>='0'&&str[i]<='9')
		     {	
                        tstr[index]+=str[i];
                        flag=1;//标记是否扫描到了数字
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
	getline(cin,str);
	while(1)//进行字符串数字扫描
	{
		des=scan(des);
		if(str[des]=='\0')
			break;
		des++;
	}
	for(int p=0;p<index;p++)//进行字符串-整形转换
		num[p]=string_to_int(tstr[p]);
        for(int q=0;q<index;q++)//输出整形数组
                cout<<num[q]<<" ";
                cout<<endl;
        cout<<index<<endl;
	return 0;
}
