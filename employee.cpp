#include <iostream>
using namespace std;
//show the function menus
int index=0;
int sortfloat(string A[],string B[],float C[]) ;
int sortstring(string A[],string B[],float C[]);
int search(string A[],string B[],float C[]);
int deleteinfo(int deleteindex);
int searchonce(string A[],string B[],float C[]);
void showMenu()
{
        cout << "0:员工信息录入" << endl;
        cout << "1:按照姓名查询" << endl;
        cout << "2:按照工号查询" << endl;
        cout << "3:按照姓名排序" << endl;
        cout << "4:按照工号排序" << endl;
        cout << "5:按照工资排序" << endl;
        cout << "6:删除员工信息" << endl;
        cout << "e:退出" << endl;
}

//define the global variable to store employee information
string names[100];
string ecodes[100];
float sal[100];

int main()
{
        while(true)
        {    
                showMenu();
                char fs = ' ';
                cout << "#请选择功能:";
                cin >> fs;

                if (fs=='0')
                {
					system("cls");
                	cout<<"#请输入信息,格式为：姓名 工号 工资,可输入多组数据，Ctrl+Z+Enter结束。"<<endl;;
                	while(cin>>names[index]>>ecodes[index]>>sal[index])
							{
                       	         index++;
                      	         if(index>99)
                       	                {
                                                cout<<"#数据库已满，无法加入新的数据";
                                                break;
                                        }
                        	}
                    system("cls");
        		}

                else if (fs=='1')
                {
                	system("cls");
                	cout<<"#请输入姓名,可查询多组数据，Ctrl+Z+Enter结束。"<<endl;;
                	search(names,ecodes,sal);
                	system("cls");
				}
                else if (fs=='2')
                {
                	system("cls");
                	cout<<"#请输入工号,可查询多组数据，Ctrl+Z+Enter结束。"<<endl;;
					search(ecodes,names,sal);
					system("cls");
                }
                else if (fs=='3')
                {
                	system("cls");
                	sortstring(names,ecodes,sal) ;
                	cout<<"#按任意键返回主界面"<<endl;
					getchar(); 
					getchar();
					system("cls");
                	
				}
                else if (fs=='4')
                {	
                	system("cls");
					sortstring(ecodes,names,sal) ;
					cout<<"#按任意键返回主界面"<<endl;
					getchar(); 
					getchar();
					system("cls");
                }
                else if (fs=='5')
                {	
                	system("cls");
					sortfloat(names,ecodes,sal) ;
					cout<<"#按任意键返回主界面"<<endl;
					getchar(); 
					getchar();
					system("cls");
                }
                else if (fs=='6')
                {	
                	system("cls");
					char flag=' '; 
                	int deleteindex;
                	cout<<"#请输入你要删除的员工姓名 "<<endl; 
                	deleteindex=searchonce(names,ecodes,sal);
					cout<<"#你确定要删除这一组信息吗？请输入y确认。"<<endl;
					cin>>flag;
					if(flag=='y')
						deleteinfo(deleteindex);
					system("cls");
                }
  				else if (fs=='e')
                {
					break;
                }
        	cin.clear();
		}
} 
int search(string A[],string B[],float C[])
{	
	int i,f=0;
	string M;
	while(cin>>M)
	{	f=0;
		for(i=0;i<index;i++)
			if(A[i]==M)
			{
				cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<endl;
				f=1;
				break;
			}
			if(!f)
		 		cout<<"#数据库里没有这条信息"<<endl;
	}
	return 0; 
}
int sortstring(string A[],string B[],float C[]) 
{	int flag=0;
	do
		{	
		    flag=0;
			for(int i=0;i<index-1;i++)
			{
				if(A[i]>A[i+1])
				{	
					string temp;
					float tem;
					temp=A[i];
					A[i]=A[i+1];
					A[i+1]=temp;
					temp=B[i];
					B[i]=B[i+1];
					B[i+1]=temp;
					tem=C[i];
					C[i]=C[i+1];
					C[i+1]=tem;
					flag=1;	
				}
			}
		}while(flag==1);
		for(int i=0;i<index;i++)
			cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<endl;
		return 0; 
}
int sortfloat(string A[],string B[],float C[]) 
{	int flag=0;
	do
		{	
		    flag=0;
			for(int i=0;i<index-1;i++)
			{
				if(C[i]>C[i+1])
				{	
					string temp;
					float tem;
					temp=A[i];
					A[i]=A[i+1];
					A[i+1]=temp;
					temp=B[i];
					B[i]=B[i+1];
					B[i+1]=temp;
					tem=C[i];
					C[i]=C[i+1];
					C[i+1]=tem;
					flag=1;	
				}
			}
		}while(flag==1);
		for(int i=0;i<index;i++)
			cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<endl;
		return 0; 
}
int deleteinfo(int deleteindex)
{
	for(int i=deleteindex;i<index-1;i++)
		{
			names[i]=names[i+1];
	 		ecodes[i]=ecodes[i+1];
	 		sal[i]=sal[i+1];
		}
	index--; 
}
int searchonce(string A[],string B[],float C[])
{	
	int i,f=0;
	string M;
	cin>>M;
	for(i=0;i<index;i++)
		if(A[i]==M)
		{
			cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<endl;
			f=1;
			break;
		} 
		if(!f)
		 cout<<"#数据库里没有这条信息"<<endl;
	return i; 
}










