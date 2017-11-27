#include <iostream>
using namespace std;
int get_value(int row, int col);
void output_triangle(int row);
/*Ö÷º¯Êý*/ 
int main(int argc, char** argv) 
{
output_triangle(8);
} 
int get_value(int row, int col)
{   
    int sum=0;
	if(row==col||col==1)
	return 1;
	sum+=get_value(row-1, col-1)+get_value(row-1, col);
	return sum;
}
void output_triangle(int row)
{   
    int i,p,m;
	for(i=1;i<=row;i++)
	{
	 for(m=0;m<=(row/2)-(i/2);m++)
	     cout<<"  ";               
	 if(i%2==0)
	 cout<<" ";                  
	 for(p=1;p<=i;p++)
	    cout<<get_value(i, p)<<"  "; 
	 cout<<endl;                     
	}
}
