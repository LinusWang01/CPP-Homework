#include<iostream>
using namespace std;
int mystrcmp(char* src, char*src2)
{
	if(!src2||!src)
		return;
	int final;
	while(!(final=*(unsigned char*)src-*(unsigned char*)src2) && *src)  
    	{  
        	src++;  
        	src2++ ; 
    	}
	if(final>0)
		return 1;
	if(final<0)
		return -1;
	return 0;
}
int main()
{
	char dest[50]="456";
	char src[20]= "123";
	char src1[50]= "123";
	//test1
	cout<<mystrcmp(src, dest)<<endl;
	cout<<mystrcmp(dest, src)<<endl;
	cout<<mystrcmp(src1, src)<<endl;
	//test2
	char *p = NULL;
	mystrcmp(p, src); //函数应该什么都不做，直接返回
	//test3
	char *src2 = NULL;
	mystrcmp(dest, src2);//函数应该什么都不做，直接返回
} 
