#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化con
void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));

}

//增加通讯录联系人
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX) 
	{
		printf("通讯录已满，无法添加\n");
		return;
	}

	printf("请输入联系人的名字：\n");
	scanf("%s", pc->data[pc->count].name);

	printf("请输入联系人的年龄：\n");
	scanf("%d", &(pc->data[pc->count].age));

	printf("请输入联系人的性别：\n");
	scanf("%s", pc->data[pc->count].sex);

	printf("请输入联系人的电话：\n");
	scanf("%s", pc->data[pc->count].tele);

	printf("请输入联系人的地址：\n");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功\n");

}

//显示通讯录信息
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，无法执行该命令\n");
		return;
	}
	//%s打印是右对齐，%-s打印是左对齐；\t是空格开。
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n",  pc->data[i].name, 
												 pc->data[i].age, 
											 	 pc->data[i].sex, 
											 	 pc->data[i].tele, 
												 pc->data[i].addr);
	}
	printf("\n");

}

static int Finebyname(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
			return i;
	}
	return -1;
}

//删除通讯录中指定的联系人
void DelContact(Contact* pc)
{
	char name[MAX];
	int i = 0;
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，无法执行删除命令\n");
		return;
	}

	printf("请输入需要删除的名字\n");
	scanf("%s", name);
	//1.查找
	int pos = Finebyname(pc,name);
	if (pos == -1)
	{
		printf("通讯录中不存在该名字\n");
		return;
	}
	//2.删除
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");

}

//查找通讯录中指定的联系人
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX];
	if (pc->count == 0)
	{
		printf("通讯录为空，无法执行查找命令\n");
		return;
	}

	printf("请输入需要查找的名字\n");
	scanf("%s", name);
	//1.查找
	int pos = Finebyname(pc, name);
	if (pos == -1)
	{
		printf("通讯录中不存在该名字\n");
		return;
	}
	//2.打印查找到的联系人信息
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

//修改通讯录中指定联系人信息
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX];
	if (pc->count == 0)
	{
		printf("通讯录为空，无法执行修改命令\n");
		return;
	}

	printf("请输入需要查找的名字\n");
	scanf("%s", name);
	//1.查找
	int pos = Finebyname(pc, name);
	if (pos == -1)
	{
		printf("通讯录中不存在该名字\n");
		return;
	}
	//2.修改联系人信息
	printf("请输入联系人的名字：\n");
	scanf("%s", pc->data[pos].name);
	printf("请输入联系人的年龄：\n");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入联系人的性别：\n");
	scanf("%s", pc->data[pos].sex);
	printf("请输入联系人的电话：\n");
	scanf("%s", pc->data[pos].tele);
	printf("请输入联系人的地址：\n");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");

}



int compare_by_nmae(void* e1, void* e2)
{
	return strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name);
}

//排序
//按名字排序
void SortContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，无法执行排序命令\n");
		return;
	}
	qsort(pc->data, pc->count, sizeof(pc->data[0]), compare_by_nmae);

	printf("排序成功\n");

}




