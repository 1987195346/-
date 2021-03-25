#include "headline.h"
void findPerson(Addressbooks * abs) {
	cout << "请输入你要查找的联系人：";
	string name;
	cin >> name;
	//判断指定的联系人是否存在在通讯录中
	int ret = isExist(abs,name);//判断指定联系人是否在通讯录中
	if (ret != -1) {  //找到
		cout << "姓名：" << abs->personArry[ret].m_Name
			<< "\t性别：" << abs->personArry[ret].m_Sex
			<< "\t年龄：" << abs->personArry[ret].m_Age
			<< "\t电话：" << abs->personArry[ret].m_Phone
			<< "\t地址：" << abs->personArry[ret].m_Addr << endl;
	}
	else {  //未找到
		cout << "查无此人！"<<endl;
	}
	system("pause");
	system("cls");//清屏
}