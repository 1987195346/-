#include "headline.h"
void changePerson(Addressbooks *abs) {
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {//�鵽



		//����
		string name;
		cout << "������������";
		cin >> name;
		abs->personArry[ret].m_Name = name;



		//�Ա�
		cout << "�������Ա�";
		string sex;
		while (true) {
			cin >> sex;
			//����������л�Ů���˳������������������
			if (sex == "��" || sex == "Ů") {
				abs->personArry[ret].m_Sex = sex;
				break;
			}
			cout << "������������������Ա�";
		}


		//����
		int age;
		cout << "���������䣺";
		cin >> age;
		abs->personArry[ret].m_Age = age;


		//�绰
		string phone;
		cout << "��������ϵ�绰��";
		cin >> phone;
		abs->personArry[ret].m_Phone = phone;


		//��ַ
		string addr;
		cout << "�������ַ��";
		cin >> addr;
		abs->personArry[ret].m_Addr = addr;


		cout << "�޸ĳɹ���" << endl;
	}
	else {//���޴���
		cout << "���޴��ˣ�" << endl;
	}
	//�����������
	system("pause");
	system("cls");
}