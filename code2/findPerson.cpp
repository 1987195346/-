#include "headline.h"
void findPerson(Addressbooks * abs) {
	cout << "��������Ҫ���ҵ���ϵ�ˣ�";
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ������ͨѶ¼��
	int ret = isExist(abs,name);//�ж�ָ����ϵ���Ƿ���ͨѶ¼��
	if (ret != -1) {  //�ҵ�
		cout << "������" << abs->personArry[ret].m_Name
			<< "\t�Ա�" << abs->personArry[ret].m_Sex
			<< "\t���䣺" << abs->personArry[ret].m_Age
			<< "\t�绰��" << abs->personArry[ret].m_Phone
			<< "\t��ַ��" << abs->personArry[ret].m_Addr << endl;
	}
	else {  //δ�ҵ�
		cout << "���޴��ˣ�"<<endl;
	}
	system("pause");
	system("cls");//����
}