#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//����
void CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		Peoinfo* ptr = (Peoinfo*)realloc(pc->data, (pc->capacity += INC_SZ) * sizeof(Peoinfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
		}
		else
			pc->data = ptr;
		printf("���ݳɹ�\n");
	}

}

//��ʼ��con
//1.��̬�汾
//void InitContact(Contact* pc)
//{
//  assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//2.��̬�汾--3.�ļ��汾
void LoadContact(Contact* pc)
{
	FILE* pfread = fopen("Contact.txt", "rb");
	if (pfread == NULL)
	{
		perror("LoadContact");
		return;
	}
	Peoinfo temp = { 0 };
	while (fread(&temp, sizeof(Peoinfo), 1, pfread))
	{
		CheckCapacity(pc);
		pc->data[pc->count] = temp;
		pc->count++;
	}
	fclose(pfread);
	pfread = NULL;
}

void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (Peoinfo*)calloc(DEFAULF_SZ, sizeof(Peoinfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULF_SZ;
	//3.�����ļ�����Ϣ��ͨѶ¼��
	LoadContact(pc);
}

//�Ƴ�����ʱ��������Ķ�̬�ڴ�ռ�
void DestoryContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}


//����ͨѶ¼��ϵ��
//1.��̬�汾
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == MAX) 
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//
//	printf("��������ϵ�˵����֣�\n");
//	scanf("%s", pc->data[pc->count].name);
//	printf("��������ϵ�˵����䣺\n");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("��������ϵ�˵��Ա�\n");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("��������ϵ�˵ĵ绰��\n");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("��������ϵ�˵ĵ�ַ��\n");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("���ӳɹ�\n");
//}


//2.��̬�汾

void AddContact(Contact* pc)
{
	assert(pc);
	//����
	CheckCapacity(pc);

	printf("��������ϵ�˵����֣�\n");
	scanf("%s", pc->data[pc->count].name);
	printf("��������ϵ�˵����䣺\n");
	scanf("%d", &(pc->data[pc->count].age));
	printf("��������ϵ�˵��Ա�\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("��������ϵ�˵ĵ绰��\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("��������ϵ�˵ĵ�ַ��\n");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");
}

//��ʾͨѶ¼��Ϣ
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ִ�и�����\n");
		return;
	}
	//%s��ӡ���Ҷ��룬%-s��ӡ������룻\t�ǿո񿪡�
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

//ɾ��ͨѶ¼��ָ������ϵ��
void DelContact(Contact* pc)
{
	char name[MAX];
	int i = 0;
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ִ��ɾ������\n");
		return;
	}

	printf("��������Ҫɾ��������\n");
	scanf("%s", name);
	//1.����
	int pos = Finebyname(pc,name);
	if (pos == -1)
	{
		printf("ͨѶ¼�в����ڸ�����\n");
		return;
	}
	//2.ɾ��
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");

}

//����ͨѶ¼��ָ������ϵ��
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX];
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ִ�в�������\n");
		return;
	}

	printf("��������Ҫ���ҵ�����\n");
	scanf("%s", name);
	//1.����
	int pos = Finebyname(pc, name);
	if (pos == -1)
	{
		printf("ͨѶ¼�в����ڸ�����\n");
		return;
	}
	//2.��ӡ���ҵ�����ϵ����Ϣ
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n",  pc->data[pos].name,
												  pc->data[pos].age,
												  pc->data[pos].sex,
												  pc->data[pos].tele,
												  pc->data[pos].addr);
}

//�޸�ͨѶ¼��ָ����ϵ����Ϣ
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX];
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ִ���޸�����\n");
		return;
	}

	printf("��������Ҫ���ҵ�����\n");
	scanf("%s", name);
	//1.����
	int pos = Finebyname(pc, name);
	if (pos == -1)
	{
		printf("ͨѶ¼�в����ڸ�����\n");
		return;
	}
	//2.�޸���ϵ����Ϣ
	printf("��������ϵ�˵����֣�\n");
	scanf("%s", pc->data[pos].name);
	printf("��������ϵ�˵����䣺\n");
	scanf("%d", &(pc->data[pos].age));
	printf("��������ϵ�˵��Ա�\n");
	scanf("%s", pc->data[pos].sex);
	printf("��������ϵ�˵ĵ绰��\n");
	scanf("%s", pc->data[pos].tele);
	printf("��������ϵ�˵ĵ�ַ��\n");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�\n");

}



int compare_by_nmae(void* e1, void* e2)
{
	return strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name);
}

//����
//����������
void SortContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ִ����������\n");
		return;
	}
	qsort(pc->data, pc->count, sizeof(pc->data[0]), compare_by_nmae);

	printf("����ɹ�\n");

}


//����ͨѶ¼��Ϣ���ļ�
void SaveContact(const Contact* pc)
{
	assert(pc);
	FILE* pfwrite = fopen("Contact.txt", "wb");
	if (pfwrite == NULL)
	{
		perror("SaveContact");
		return;
	}
	//д�ļ�--�Զ����Ƶ���ʽ
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i,sizeof(Peoinfo),1,pfwrite);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}





