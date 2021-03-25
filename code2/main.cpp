#include "headline.h"

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数

	abs.m_Size = 0;
	int select = 0;
	while (true) {
		menu();
		cin >> select;
		switch (select) {
			case 1:    //1.添加联系人
				AddPerson(&abs);   //利用地址传递，可以修饰新参
				break;
			case 2:    //2.显示联系人
				showPerson(&abs);
				break;
			case 3:    //3.删除联系人
				deletePerson(&abs);
				break;
			case 4:    //4.查找联系人
				findPerson(&abs);
				break;
			case 5:    //5.修改联系人
				changePerson(&abs);
				break;
			case 6:    //6.清空联系人
				cleanPerson(&abs);
				break;
			case 0:    //0.退出通讯录
				cout << "欢迎下次使用!!!" << endl;
				system("pause");
				return 0;
				break;
			default:    //输入错误
				break;
		}

	}



	system("pause");
	return 0;
}

