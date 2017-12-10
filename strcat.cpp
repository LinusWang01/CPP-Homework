#include<iostream> 
using namespace std;
char* mystrcat(char* src, char* dest)
{
	char *p=dest;
	int p1=0;
	if(!dest||!src)
		return;
	for(p1;(*(dest+p1))!='\0';p1++)
		*(dest+p1)=*(dest+p1);
	for(int l=0;(*(src+l))!='\0';l++)
		*(dest+p1+l)=*(src+l);	
	*(dest+p1+l)='\0'; 
	return p;
}
int main()
{
	  char *p1;
	  char dest[50]="i love you";
	  char src[20]= " forever";
	  //test1
	  p1=mystrcat(src, dest);
	  cout << p1; //hello
	  //test2
	  char *p = NULL;
	  p1=mystrcat(p, src); //函数应该什么都不做，直接返回
	  //test3
	  char *src2 = NULL;
	  p1=mystrcat(dest, src2);//函数应该什么都不做，直接返回
}
