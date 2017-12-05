#include<iostream>
using namespace std;
//prototype
void mystrcpy(char* dest,char*src);
//void mystrcpy(char dest[], char src[]);
int main(){
	  char dest[50];
	  char src[20]= "hello";
	  //test1
	  mystrcpy(dest, src);
	  cout << dest; //hello
	  //test2
	  char *p = NULL;
	  mystrcpy(p, src); //函数应该什么都不做，直接返回
	  //test3
	  char *src2 = NULL;
	  mystrcpy(dest, src2);//函数应该什么都不做，直接返回
}
void mystrcpy(char* dest,char*src)
{
	if(!dest||!src)
		;
		else
		for(int i=0;!((*(src+i))=='\0');i++)
				*(dest+i)=*(src+i);

}
