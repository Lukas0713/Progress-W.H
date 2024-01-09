#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//类型声明
typedef struct Peoinfo  //用typedef将struct Peoinfo这个结构体类型重新命名为Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

//
typedef struct Contact
{
	Peoinfo data[100];
	int count;
}Contact;

//初始化con
void InitContact(Contact* pc);

//增加通讯录联系人
void AddContact(Contact* pc);

//显示通讯录信息
void ShowContact(const Contact* pc);

//删除通讯录中指定的联系人
void DelContact(Contact* pc);

//查找通讯录中指定的联系人
void SearchContact(const Contact* pc);

//修改通讯录中指定联系人信息
void ModifyContact(Contact* pc);

//排序
//按名字排序
void SortContact(Contact* pc);




