#include "headline.h"
//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
int isExist(Addressbooks *abs,string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArry[i].m_Name == name) {
			return i;//�ҵ�����������������е��±�
		}
	}
	return -1;//�������������û�ҵ�������-1
}

//ɾ��ͨѶ¼�е���ϵ��
void deletePerson(Addressbooks *abs) {
	cout << "��������Ҫɾ������ϵ�ˣ�";
	string name;
	cin >> name;

	//ret==-1 δ�鵽
	//ret!=-1 �鵽��

	int ret=isExist(abs, name);//������abs����Ϊ��deletePerson�д�������abs���Ѿ���һ��ָ����
	if (ret != -1) {
		//�鵽����
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArry[i] = abs->personArry[i + 1];//���������Ϣǰ��һλ

		}
		abs->m_Size--;//������һ
		cout << "ɾ���ɹ���" << endl;
	}
	else {
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");//����
}