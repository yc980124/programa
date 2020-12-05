#ifndef _CONTACT_H_
#define _CONTACT_H_

#include "sysutil.h"
#define MAX_NAME_SIZE 10
#define MAX_TEL_SIZE 20
#define MAX_ADDR_SIZE 25
#define MAX_SEX_SIZE 5
#define MAX_CONTACT_SIZE 200

typedef enum ENUM_TYPE
{
	EXIT = 0,
	ADD,
	DEL,
	FIND,
	SHOW,
	MODIFY,
	SORT,
	CLEAR,
	DESTROY
}ENUM_TYPE;
//定义个人信息
typedef struct PersonInfo_t
{
	char name[MAX_NAME_SIZE];
	char sex[MAX_SEX_SIZE];
	char tel[MAX_TEL_SIZE];
	char addr[MAX_ADDR_SIZE];
	int age;
}PersonInfo_t;

//定义通讯录结构
typedef struct Contact_t
{
	PersonInfo_t space[MAX_CONTACT_SIZE];  //通信录的存储空间
	//int a[MAX_CONTACT_SIZE];
	size_t size;                   //通讯录的信息条数
	size_t capacity;           //通讯录的容量
}Contact_t;

/////////////////////////////////////////////////////////////////
// 函数的申明
void ContactInit(Contact_t *pct);
void ContactAdd();
void ContactDel();
void ContactFind();
void ContactShow();
void ContactModify();


#endif /*_CONTACT_H_*/