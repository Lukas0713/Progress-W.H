#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//打印箭头图案
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	//不用while也行
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		//打印上n行
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			//打印空格
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			//打印*
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//打印下n+1行
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			//打印空格
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			//打印*
//			for (j = 0; j < n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//公务员打分：7个分数（整数），去掉最高高分和最低分，再求平均分，去两位小数。

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
//	printf("min = %d max = %d 平均数 = %.2f\n", min, max, ret);
//
//	return 0;
//}

//写法2.0
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
//			printf("min = %d max = %d 平均数 = %.2lf\n", min, max, (sum - max - min) / 5.0);
//
//			//信息重置
//			n = 0;
//			min = 100;
//			max = 0;
//			sum = 0;
//			break;
//		}
//	 }
//	return 0;
//}



//找单身狗
//一个数组里只有两个数只出现了一次，其余都出现了两次；
//写一个程序找到这两个只出现一次的数。

////1.异或分组（搞不懂）
//void fine_single_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//1.异或
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.计算ret的二进制中左右边的第几位为1
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
//	//101 - 5 B 1 1 3 3 //把最后一位是1的放到B里
//	//110 - 6 A 2 2 4 4 //把最后一位是0的放到A里
//	//011
//	//把数组arr里的数异或，有重复数字的是000，只有单独的数字才会出现011
//
//	//分组
//	//1.所有数字异或
//	//2.找出异或的结果数字中哪一位为1-第n位
//	//3.以第n为1，分一组，第n位为0分一组
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



//模拟实现atoi
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

//1.空指针
//2.空字符串
//3.空格
//4.+-
//5.越界
//6.非数字字符
//
enum status
{
	VALID,
	INVALID
}sta = INVALID;

int my_atoi(const char* str)
{
	assert(str);
	//空字符串
	if (*str == '\0')
	{
		return 0;
	}
	//跳过空格
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
			//越界
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
	//int ret = atoi(arr);  //atoi用于将数字字符串转化为数字
	int ret = my_atoi(arr);

	if (sta == VALID)//合法
	{
		printf("合法转换：%d\n", ret);
	}
	if (sta == INVALID)//非法
	{
		printf("非法返回：%d\n", ret);
	}
	//printf("%d ", ret);

	return 0;
}