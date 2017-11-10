#include <iostream>
using namespace std;
int get_value(int row, int col);
void output_triangle(int row);
/*主函数*/ 
int main(int argc, char** argv) 
{
output_triangle(8);
}
/*get_value(int row, int col)，通过调用get_value函数输出杨辉三角，输入：row（行数），col（列数），返回杨辉三角的一元素值*/ 
int get_value(int row, int col)
{   
    int sum=0;
	if(row==col||col==1)
	return 1;
	sum+=get_value(row-1, col-1)+get_value(row-1, col);
	return sum;
}
/*output_triangle(int row)，通过调用get_value函数输出行数为row的杨辉三角，输入：row（行数），无返回*/ 
void output_triangle(int row)
{   
    int i,p,m;
	for(i=1;i<=row;i++)
	{
	 for(m=0;m<=(row/2)-(i/2);m++)
	     cout<<"  ";               //输出行前空格 
	 if(i%2==0)
	 cout<<" ";                    //偶数行前补一空格 
	 for(p=1;p<=i;p++)
	    cout<<get_value(i, p)<<"  ";//输出元素 
	 cout<<endl;                    //换行 
	}
}
