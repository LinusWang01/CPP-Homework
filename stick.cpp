#include<iostream>
using namespace std;
int sumI,suml;
int scanstick(string name)
{  
   for(int i=0;;i++)
   {  
      if(name[i]=='\0')
         break;
      else if(name[i]=='I')
         sumI++;
      else if(name[i]=='l')
         suml++;
   }
}
int main()
{
   string name;
   while(1)
   {
      suml=0;
      sumI=0;
      cin>>name;
      scanstick(name);
      cout<<"大写的i"<<endl<<sumI<<endl;
      cout<<"小写的L"<<endl<<suml<<endl;
   }


}
