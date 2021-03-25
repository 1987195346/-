#include "headline.h"
void changePerson(Addressbooks *abs) {
	cout << "请输入你要修改的联系人：";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {//查到



		//姓名
		string name;
		cout << "请输入姓名：";
		cin >> name;
		abs->personArry[ret].m_Name = name;



		//性别
		cout << "请输入性别：";
		string sex;
		while (true) {
			cin >> sex;
			//如果输入是男或女则退出，若不是则从新输入
			if (sex == "男" || sex == "女") {
				abs->personArry[ret].m_Sex = sex;
				break;
			}
			cout << "输入错误，请重新输入性别：";
		}


		//年龄
		int age;
		cout << "请输入年龄：";
		cin >> age;
		abs->personArry[ret].m_Age = age;


		//电话
		string phone;
		cout << "请输入联系电话：";
		cin >> phone;
		abs->personArry[ret].m_Phone = phone;


		//地址
		string addr;
		cout << "请输入地址：";
		cin >> addr;
		abs->personArry[ret].m_Addr = addr;


		cout << "修改成功！" << endl;
	}
	else {//查无此人
		cout << "查无此人！" << endl;
	}
	//按任意键清屏
	system("pause");
	system("cls");
}