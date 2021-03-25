#include "headline.h"
//2.显示联系人

void showPerson(Addressbooks *abs) {
	//判断通讯录中人数是否为0，如果为0，提示为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0) {
		cout << "当前记录为空！" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名：" << abs->personArry[i].m_Name 
				 << "\t性别：" << abs->personArry[i].m_Sex 
				 << "\t年龄：" << abs->personArry[i].m_Age
				 << "\t电话：" << abs->personArry[i].m_Phone 
				 << "\t地址：" << abs->personArry[i].m_Addr << endl;
		}
	}

	system("pause");//按任意键继续
	system("cls");//清屏
}