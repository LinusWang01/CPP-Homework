#include<iostream>
using namespace std;
int insert(int num0,int des,int C[]);
void fillAtoC(int C[],int A[]);
void input(int A[]);
void output(int A[]); 
int main()
{ 
  int A[10];
  int B[10];
  input(A);
  input(B);
  int C[20];
   int i,num0,j;
   fillAtoC(C,A);
   for(i=0;i<10;i++)
   {
        num0=B[i];
        for(j=0;j<20;j++)
        {
            if(num0<=C[j])
            {
			 insert(num0,j,C);
			 break;
            }
            if(j==19)
            C[j]=num0; 
            
        }
   } 
        output(C);
       
		return 0; 
}
int insert(int num0,int des,int A[])
{
 int temp[30];
   for(int i=0;i<20;i++)
       temp[i]=A[i];
   for(int i=des;i<20;i++)
        {
         temp[i+1]=A[i];
         temp[des]=num0;
        }
   for(int p=0;p<20;p++)
        A[p]=temp[p];
   for(int p=0;p<20;p++)
        temp[p]=0;
}
void output(int A[])
{
    for(int i=0;i<20;i++)
        cout<<A[i]<<"  ";
        cout<<endl;
}
void fillAtoC(int C[],int A[])
{
   for(int i=0;i<10;i++)
       C[i]=A[i];
}

void input(int A[])
{
	for(int i=0;i<10;i++)
	cin>>A[i];
}
