#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define DEFAULF_SZ 3
#define INC_SZ 2

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//两个版本
//1.静态版本--通讯录容量固定
//2.动态版本--通讯录容量可以扩容
//3.文件版本

//类型声明
typedef struct Peoinfo  //用typedef将struct Peoinfo这个结构体类型重新命名为Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

////静态版本
//typedef struct Contact
//{
//	Peoinfo data[100];//存放人的信息
//	int count;//记录当前通讯录中实际人数
//}Contact;

//动态版本
typedef struct Contact
{
	Peoinfo* data;//存放人的信息
	int count; //记录当前通讯录中实际人数
	int capacity;//记录通讯录的容量
}Contact;


//初始化con
void InitContact(Contact* pc);

//销毁通讯录内存空间
void DestoryContact(Contact* pc);

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

//保存通讯录信息到文件
void SaveContact(const Contact* pc);

//加载文件的信息到通讯录中
void LoadContact(Contact* pc);




