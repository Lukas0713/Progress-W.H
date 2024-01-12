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

//�����汾
//1.��̬�汾--ͨѶ¼�����̶�
//2.��̬�汾--ͨѶ¼������������
//3.�ļ��汾

//��������
typedef struct Peoinfo  //��typedef��struct Peoinfo����ṹ��������������ΪPeoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

////��̬�汾
//typedef struct Contact
//{
//	Peoinfo data[100];//����˵���Ϣ
//	int count;//��¼��ǰͨѶ¼��ʵ������
//}Contact;

//��̬�汾
typedef struct Contact
{
	Peoinfo* data;//����˵���Ϣ
	int count; //��¼��ǰͨѶ¼��ʵ������
	int capacity;//��¼ͨѶ¼������
}Contact;


//��ʼ��con
void InitContact(Contact* pc);

//����ͨѶ¼�ڴ�ռ�
void DestoryContact(Contact* pc);

//����ͨѶ¼��ϵ��
void AddContact(Contact* pc);

//��ʾͨѶ¼��Ϣ
void ShowContact(const Contact* pc);

//ɾ��ͨѶ¼��ָ������ϵ��
void DelContact(Contact* pc);

//����ͨѶ¼��ָ������ϵ��
void SearchContact(const Contact* pc);

//�޸�ͨѶ¼��ָ����ϵ����Ϣ
void ModifyContact(Contact* pc);

//����
//����������
void SortContact(Contact* pc);

//����ͨѶ¼��Ϣ���ļ�
void SaveContact(const Contact* pc);

//�����ļ�����Ϣ��ͨѶ¼��
void LoadContact(Contact* pc);




