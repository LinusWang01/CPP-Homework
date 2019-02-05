#include <iostream>
#include <list>
#include <string>
#include <fstream>
using namespace std;
class Employee
{
  private:
	string name;
	string sex;
	string No;
	string telephone;
	int salary;
	
  public:
	Employee(string na, string se, string Number, string tele, int sal);
	string getname(void);
	string getsex(void);
	string getNo(void);
	int getsalary(void);
	string gettele(void);
	void printitem(void);
};
Employee::Employee(string na, string se, string Number, string tele, int sal)
{
	name = na;
	sex = se;
	No = Number;
	telephone = tele;
	salary = sal;
}
string Employee::getname(void)
{
	return name;
}
string Employee::getsex(void)
{
	return sex;
}
string Employee::getNo(void)
{
	return No;
}
string Employee::gettele(void)
{
	return telephone;
}
int Employee::getsalary(void)
{
	return salary;
}
void Employee::printitem(void)
{
	cout << name <<" "<< sex <<" "<< No <<" "<< telephone <<" "<< (float)(salary / 100) << endl;
}

class Cmp
{
  public:
	bool operator()(Employee * a, Employee * b){
		return a->getsalary() > b->getsalary();
	}
};

list<Employee *> ListEmployee;

void showMenu()
{	
        cout << "0:员工信息录入" << endl;
        cout << "1:按照姓名查询" << endl;
        cout << "2:按照工号查询" << endl;
        cout << "3:按照工资排序输出员工信息" << endl;
        cout << "4:根据工号修改员工信息" << endl;
        cout << "5:根据工号删除员工信息" << endl;
        cout << "e:退出" << endl;
}
int main(int argc, char **argv)
{
	string name, sex, No, tele;
	float salary;
	fstream File("File.txt", ios::in);
	while (File >> name >> sex >> No >> tele >> salary)
		ListEmployee.push_back((new Employee(name, sex, No, tele, salary)));
	char Filechanged = 0;
	while (true)
	{
		showMenu();
		char fs = ' ';
		cout << "#请选择功能:";
		cin >> fs;
		if (fs == '0')
		{
			string name, sex, No, tele;
			float salary;
			system("cls");
			cout<<"#请输入信息,格式为：姓名 性别 工号 电话号码 工资(精确到小数点后两位),可输入多组数据，Ctrl+Z+Enter结束。"<<endl;
			while (cin >> name >> sex >> No >> tele >> salary)
				ListEmployee.push_back((new Employee(name, sex, No, tele, (int)(salary * 100))));
			Filechanged = 1;
			system("cls");
		}
		else if (fs == '1')
		{
			list<Employee *>::iterator i;
			string name;
			system("cls");
			cout<<"#请输入姓名"<<endl;;
			cin >> name;
			system("cls");
			for (i = ListEmployee.begin(); i != ListEmployee.end(); ++i)
				if ((*i)->getname() == name)
				{
					(*i)->printitem();
					break;
				}
			cout << "#按任意键返回主界面" << endl;
			getchar();
			getchar(); 
			system("cls");
		}
		else if (fs == '2')
		{
			system("cls");
			list<Employee *>::iterator i;
			string No;
			system("cls");
			cout << "#请输入工号" << endl;
			cin >> No;
			for (i = ListEmployee.begin(); i != ListEmployee.end(); ++i)
				if ((*i)->getNo() == No)
				{
					(*i)->printitem();
					break;
				}
			cout << "按任意键返回主界面" << endl;
			getchar();
			getchar();
			system("cls");
		}
		else if (fs == '3')
		{
			system("cls");
			ListEmployee.sort(Cmp());
			list<Employee *>::iterator i;
			for (i = ListEmployee.begin(); i != ListEmployee.end(); ++i)
				(*i)->printitem();
			cout << "#按任意键返回主界面" << endl;
			getchar();
			getchar();
			Filechanged = 1;
			system("cls");
		}
		else if (fs == '4')
		{
			string name, sex, No, tele;
			float salary;
			char flag = 0;
			Employee * del;
			list<Employee *>::iterator i;
			string Nu;
			system("cls");
			cout<<"请输入工号"<<endl;
			cin>>Nu;
			for (i = ListEmployee.begin(); i != ListEmployee.end(); ++i)
				if ((*i)->getNo() == Nu)
				{
					del = *i;
					ListEmployee.erase(i);
					flag = 1;
					break;
				}
			if(flag)
			{
				cout<<"您要修改的员工信息为："<<endl;
				del->printitem();
				cout<<"请输入新的员工信息，格式为：姓名 性别 工号 电话号码 工资(精确到小数点后两位)"<<endl;
				cin >> name >> sex >> No >> tele >> salary;
				ListEmployee.push_back((new Employee(name, sex, No, tele, (int)(salary * 100))));
				delete del;
				Filechanged = 1; 
			}
			else
				cout<<"工号输入错误"<<endl;
			cout<<"按任意键返回主界面"<<endl;
			getchar();
			getchar();
			system("cls");
		}
		else if (fs == '5')
		{
			char flag = 0;
			string No;
			Employee * del;
			list<Employee *>::iterator i;
			system("cls");
			cout<<"请输入工号"<<endl;
			cin>>No;
			flag = 0;
			for (i = ListEmployee.begin(); i != ListEmployee.end(); ++i)
				if ((*i)->getNo() == No)
				{
					del = *i;
					ListEmployee.erase(i);
					flag = 1;
					break;
				}
			if(flag)
			{
				cout<<"删除成功"<<endl;
				cout<<"删除的员工信息为："<<endl;
				del ->printitem(); 
				delete del;
				Filechanged = 1;
			}
			else
				cout<<"工号输入错误"<<endl;
			cout<<"按任意键返回主界面"<<endl;
			getchar();
			getchar();
			system("cls");
		}
		else if (fs == 'e')
			break;
		cin.clear();
		if(Filechanged)
		{
			list<Employee *>::iterator i;
			fstream File("File.txt", ios::out|ios::trunc);
			for (i = ListEmployee.begin(); i != ListEmployee.end(); ++i)
				File<<(*i)->getname() <<" "<< (*i)->getsex() <<" "<< (*i)->getNo() <<" "<< (*i)->gettele() <<" "<< (*i)->getsalary() << endl;
			Filechanged = 0;
		}
	}
}
