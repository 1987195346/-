#include <iostream>
#include <string>
#include "menu.h"
#include "AddPerson.h"
#include "showPerson.h"
#include "deletePerson.h"
#include "findPerson.h"
#include "changePerson.h"
#include "cleanPerson.h"
using  namespace std;

#define MAX 1000 //�������
struct  Person {
	string m_Name;  //����
	string m_Sex;      //�Ա�
	int m_Age;      //����
	string m_Phone; //�绰
	string m_Addr;  //סַ
};

struct Addressbooks {
	struct Person personArry[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size;  //ͨѶ¼����Ա����
};