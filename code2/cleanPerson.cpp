#include "headline.h"
void cleanPerson(Addressbooks *abs) {
	abs->m_Size = 0;//将当前记录联系人置为0，做逻辑清空操作
	cout << "通讯录已清空！" << endl;
	//按任意键清屏
	system("pause");
	system("cls");
}