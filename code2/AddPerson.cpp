#include "headline.h"
//1.添加联系人

void AddPerson(struct Addressbooks *abs) {

	//判断通讯录是否已满
	if (abs->m_Size == MAX) {
		cout << "通讯录已满，无法添加！";
		return;
	}

	//姓名
	string name;
	cout << "请输入姓名：" ;
	cin >> name;
	abs->personArry[abs->m_Size].m_Name = name;


	//性别
	string sex;
	cout << "请输入性别：" ;
	while (true) {
		cin >> sex;
		//如果输入是男或女则退出，若不是则从新输入
		if (sex == "男" || sex == "女") {
			abs->personArry[abs->m_Size].m_Sex = sex;
			break;
		}
		cout << "输入错误，请重新输入性别：";
		
	}
	//年龄
	int age;
	cout << "请输入年龄：";
	cin >> age;
	abs->personArry[abs->m_Size].m_Age = age;


	//电话
	string phone;
	cout << "请输入联系电话：";
	cin >> phone;
	abs->personArry[abs->m_Size].m_Phone = phone;


	//地址
	string addr;
	cout << "请输入地址：";
	cin >> addr;
	abs->personArry[abs->m_Size].m_Addr = addr;

	//更新通讯录人数
	abs->m_Size++;
	cout << "添加成功！" << endl;

	system("pause");  //请按任意键继续
	system("cls");  //清屏
}

