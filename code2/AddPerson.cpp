#include "headline.h"
//1.�����ϵ��

void AddPerson(struct Addressbooks *abs) {

	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�������޷���ӣ�";
		return;
	}

	//����
	string name;
	cout << "������������" ;
	cin >> name;
	abs->personArry[abs->m_Size].m_Name = name;


	//�Ա�
	string sex;
	cout << "�������Ա�" ;
	while (true) {
		cin >> sex;
		//����������л�Ů���˳������������������
		if (sex == "��" || sex == "Ů") {
			abs->personArry[abs->m_Size].m_Sex = sex;
			break;
		}
		cout << "������������������Ա�";
		
	}
	//����
	int age;
	cout << "���������䣺";
	cin >> age;
	abs->personArry[abs->m_Size].m_Age = age;


	//�绰
	string phone;
	cout << "��������ϵ�绰��";
	cin >> phone;
	abs->personArry[abs->m_Size].m_Phone = phone;


	//��ַ
	string addr;
	cout << "�������ַ��";
	cin >> addr;
	abs->personArry[abs->m_Size].m_Addr = addr;

	//����ͨѶ¼����
	abs->m_Size++;
	cout << "��ӳɹ���" << endl;

	system("pause");  //�밴���������
	system("cls");  //����
}

