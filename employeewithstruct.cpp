#include <iostream>
using namespace std;
typedef struct date
{
	string year;
	string month;
} DATE;
typedef struct employee
{
	string name;
	string ecodes;
	float sal;
	DATE birthday;
	float otsal;
	float tax;
	float truesal;	
} EMP; 
bool fullflag=0;
int index=0;
int search(EMP *employ);
int deleteinfo(int deleteindex);
int searchonce(EMP *employ);
void printemp();
//show the function menus
void showMenu()
{		if(fullflag)
			cout << "##数据库已满##" <<endl<<endl;
        cout << "0:员工信息录入" << endl;
        cout << "1:按照姓名查询" << endl;
        cout << "2:删除员工信息" << endl;
        cout << "3:输出所有信息" << endl;
        cout << "4:修改员工信息" << endl;
        cout << "e:退出" << endl;
}

//define the global variable to store employee information
EMP employ[100];
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
                	cout<<"#请输入信息,格式为：姓名 工号 出生年份 出生月份 工资 加班工资,可输入多组数据，Ctrl+Z+Enter结束。"<<endl;
                	while(cin>>employ[index].name>>employ[index].ecodes>>employ[index].birthday.year>>employ[index].birthday.month>>employ[index].sal>>employ[index].otsal)
						{			
									if((employ[index].sal+employ[index].otsal)>3500.0)		
									employ[index].tax=(employ[index].sal+employ[index].otsal-3500.0)*0.05;
									else 
									employ[index].tax=0;
									employ[index].truesal=employ[index].sal+employ[index].otsal-employ[index].tax;
									index++;
                      	         	if(index>99)
                       	                {
                                            break;
                                        }
                		}
                        system("cls");
        		}
				else if (fs=='1')
                {
                	system("cls");
                	cout<<"#请输入姓名,可查询多组数据，Ctrl+Z+Enter结束。"<<endl;;
                	search(employ);
                	system("cls");
				}
              	else if (fs=='2')
                {	
                	system("cls");
					char flag=' '; 
                	int deleteindex;
                	errorpoint1: 
                	cout<<"#请输入你要删除的员工姓名 "<<endl; 
                	deleteindex=searchonce(employ);
                	if(deleteindex==-1)
                		goto errorpoint1;
					cout<<"#你确定要删除这一组信息吗？请输入y确认,输入其它任意字符取消。"<<endl;
					cin>>flag;
					if(flag=='y')
						deleteinfo(deleteindex);
					system("cls");
                }
                else if (fs=='3')
                {	
                	system("cls");
					printemp();
					cout<<"#按任意键返回主界面"<<endl; 
					getchar();
					getchar();
					system("cls");
            	}
            	else if (fs=='4')
                {	
                	int m;
                	system("cls");
                	errorpoint2: 
              		cout<<"#请输入你要修改的员工姓名 "<<endl; 
                	m=searchonce(employ);
                	if(m==-1)
                		goto errorpoint2;
					cout<<"#请输入新的信息,格式为：姓名 工号 出生年份 出生月份 工资 加班工资"<<endl;
              		cin>>employ[m].name>>employ[m].ecodes>>employ[m].birthday.year>>employ[m].birthday.month>>employ[m].sal>>employ[m].otsal; 
                		if((employ[m].sal+employ[m].otsal)>3500.0)		
							employ[m].tax=(employ[m].sal+employ[m].otsal-3500.0)*0.05;
						else 
							employ[m].tax=0;
						employ[m].truesal=employ[m].sal+employ[m].otsal-employ[m].tax;
                		system("cls");
            	}
  				else if (fs=='e')
                	break;
                if(index>99)
       				fullflag=1;
                else
                    fullflag=0;
                cin.clear();
			}
} 
int search(EMP *employ)
{	
	int i,f=0;
	string M;
	while(cin>>M)
	{	
		f=0;
		for(i=0;i<index;i++)
			if(employ[i].name==M)
			{
				cout<<employ[i].name<<" "<<employ[i].ecodes<<" "<<employ[i].birthday.year<<" "<<employ[i].birthday.month<<" "<<employ[i].sal<<" "<<employ[i].otsal<<" "<<employ[i].tax<<" "<<employ[i].truesal<<endl;
				f=1;
				break;
			} 
		if(!f)
		cout<<"#数据库里没有这条信息"<<endl;
	}
	return 0; 
}
int deleteinfo(int deleteindex)
{
	for(int i=deleteindex;i<index-1;i++)
		employ[i]=employ[i+1];
	index--; 
}
int searchonce(EMP *employ)
{	
	int i,f=0;
	string M;
	cin>>M;
	for(i=0;i<index;i++)
		if(employ[i].name==M)
		{
			cout<<employ[i].name<<" "<<employ[i].ecodes<<" "<<employ[i].birthday.year<<" "<<employ[i].birthday.month<<" "<<employ[i].sal<<" "<<employ[i].otsal<<" "<<employ[i].tax<<" "<<employ[i].truesal<<endl;
			f=1; 
			break; 
		} 
		if(!f)
		{ 
		 	cout<<"#数据库里没有这条信息"<<endl;
		 	return -1; 
		} 
	return i; 	
}
void printemp()
{
	for(int i=0;i<index;i++)	
		cout<<employ[i].name<<" "<<employ[i].ecodes<<" "<<employ[i].birthday.year<<" "<<employ[i].birthday.month<<" "<<employ[i].sal<<" "<<employ[i].otsal<<" "<<employ[i].tax<<" "<<employ[i].truesal<<endl;
}




 

