#include "headline.h"
//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
int isExist(Addressbooks *abs,string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArry[i].m_Name == name) {
			return i;//找到返回这个人在数组中的下标
		}
	}
	return -1;//如果遍历结束都没找到，返回-1
}

//删除通讯录中的联系人
void deletePerson(Addressbooks *abs) {
	cout << "请输入你要删除的联系人：";
	string name;
	cin >> name;

	//ret==-1 未查到
	//ret!=-1 查到了

	int ret=isExist(abs, name);//这里用abs是因为在deletePerson中传过来的abs就已经是一个指针了
	if (ret != -1) {
		//查到此人
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArry[i] = abs->personArry[i + 1];//将后面的信息前移一位

		}
		abs->m_Size--;//人数减一
		cout << "删除成功！" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}

	system("pause");
	system("cls");//清屏
}