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

#define MAX 1000 //最大人数
struct  Person {
	string m_Name;  //姓名
	string m_Sex;      //性别
	int m_Age;      //年龄
	string m_Phone; //电话
	string m_Addr;  //住址
};

struct Addressbooks {
	struct Person personArry[MAX]; //通讯录中保存的联系人数组
	int m_Size;  //通讯录中人员个数
};