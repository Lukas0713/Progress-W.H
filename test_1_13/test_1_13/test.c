#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ӡ��ͷͼ��
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	//����whileҲ��
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		//��ӡ��n��
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			//��ӡ�ո�
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			//��ӡ*
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//��ӡ��n+1��
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			//��ӡ�ո�
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			//��ӡ*
//			for (j = 0; j < n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//����Ա��֣�7����������������ȥ����߸߷ֺ���ͷ֣�����ƽ���֣�ȥ��λС����

//int main()
//{
//	int arr[7] = { 0 };
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//for (i = 0; i < 7; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//	int min = 100;
//	int max = 0;
//	int sum = 0;
//
//	for (i = 0; i < 7; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		sum += arr[i];
//	}
//	float ret = (sum - min - max) / 5.0;
//	printf("min = %d max = %d ƽ���� = %.2f\n", min, max, ret);
//
//	return 0;
//}

//д��2.0
//int main()
//{
//	int n = 0;
//	int score = 0;
//	int min = 100;
//	int max = 0;
//	int sum = 0;
//	while (scanf("%d", &score) == 1)
//	{
//		n++;
//		if (min > score)
//			min = score;
//		if (max < score)
//			max = score;
//		sum += score;
//
//		if (n == 7)
//		{
//			printf("min = %d max = %d ƽ���� = %.2lf\n", min, max, (sum - max - min) / 5.0);
//
//			//��Ϣ����
//			n = 0;
//			min = 100;
//			max = 0;
//			sum = 0;
//			break;
//		}
//	 }
//	return 0;
//}



//�ҵ���
//һ��������ֻ��������ֻ������һ�Σ����඼���������Σ�
//дһ�������ҵ�������ֻ����һ�ε�����

////1.�����飨�㲻����
//void fine_single_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//1.���
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.����ret�Ķ����������ұߵĵڼ�λΪ1
//	int pos = 0;
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//			*pd2 ^= arr[i];
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	fine_single_dog(arr, sz, &dog1, &dog2);
//	printf("%d %d", dog1, dog2);
//
//	//5^6
//	//101 - 5 B 1 1 3 3 //�����һλ��1�ķŵ�B��
//	//110 - 6 A 2 2 4 4 //�����һλ��0�ķŵ�A��
//	//011
//	//������arr�����������ظ����ֵ���000��ֻ�е��������ֲŻ����011
//
//	//����
//	//1.�����������
//	//2.�ҳ����Ľ����������һλΪ1-��nλ
//	//3.�Ե�nΪ1����һ�飬��nλΪ0��һ��
//
//	return 0;
//}

//void fine_single_dog(int arr[], int sz, int* pd[2])

//void fine_single_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr[i];
//		int j = i+1;
//		while (j < sz)
//		{
//			if (temp == arr[j])
//				goto loop;
//			j++;
//		}
//		*pd1 = arr[i];
//		*pd2 = *pd1;
//		//*pd = arr[i];
//		//pd++;
//
//	loop:
//		;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* dog[2] = { 0 };
//	int dog1 = 0;
//	int dog2 = 0;
//
//	fine_single_dog(arr, sz , &dog1, &dog2);
//	//fine_single_dog(arr, sz, dog);
//
//	printf("%d %d\n", dog1,dog2);
//	//printf("%d %d\n", *dog, *dog+1);
//
//	return 0;
//}



//ģ��ʵ��atoi
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

//1.��ָ��
//2.���ַ���
//3.�ո�
//4.+-
//5.Խ��
//6.�������ַ�
//
enum status
{
	VALID,
	INVALID
}sta = INVALID;

int my_atoi(const char* str)
{
	assert(str);
	//���ַ���
	if (*str == '\0')
	{
		return 0;
	}
	//�����ո�
	while (isspace(*str))
		str++;
	//+-
	int flag = 1;
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	else if (*str == '+')
	{
		flag = 1;
		str++;
	}

	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');
			//Խ��
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	if (*str == '\0')
	{
		sta = VALID;
	}
	return (int)ret;

}

int main()
{
	char arr[200] = "12345678";
	//int ret = atoi(arr);  //atoi���ڽ������ַ���ת��Ϊ����
	int ret = my_atoi(arr);

	if (sta == VALID)//�Ϸ�
	{
		printf("�Ϸ�ת����%d\n", ret);
	}
	if (sta == INVALID)//�Ƿ�
	{
		printf("�Ƿ����أ�%d\n", ret);
	}
	//printf("%d ", ret);

	return 0;
}