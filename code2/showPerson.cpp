#include "headline.h"
//2.��ʾ��ϵ��

void showPerson(Addressbooks *abs) {
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾΪ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������" << abs->personArry[i].m_Name 
				 << "\t�Ա�" << abs->personArry[i].m_Sex 
				 << "\t���䣺" << abs->personArry[i].m_Age
				 << "\t�绰��" << abs->personArry[i].m_Phone 
				 << "\t��ַ��" << abs->personArry[i].m_Addr << endl;
		}
	}

	system("pause");//�����������
	system("cls");//����
}