#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <assert.h>

//Fibonacci数列
//找到数字n离Fibonacci数列最近相差几个数
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	scanf("%d", &n);
//	
//	while (1)
//	{
//		if (b == n)
//		{
//			printf("0\n");
//			break;
//		}
//		else if(b > n)
//		{
//			if (abs(a - n) < abs(b - n)) //abs（a-n）为求a-n的绝对值
//			{
//				printf("%d", abs(a - n));
//			}
//			else
//			{
//				printf("%d", abs(b - n));
//			}
//			break;
//
//		}
//		c = a + b;
//		a = b;
//		b = c;
//	}
//
//	return 0;
//}

//请实现一个函数, 将一个字符串中的每个空格替换成“ % 20”。
//例如, 当字符串为We Are Happy.则经过替换之后的字符串为 We % 20Are % 20Happy。

int main()
{
	char arr[100] = "We Are Happy";
	int length = strlen(arr);
	//printf("%d", sz);
	int i = 0;
	int count = 0;

	while (i < length + count * 2 - 1)
	{
		if (arr[i] == ' ')
		{
			count++;
			int j = 0;
			for (j = length + count * 2 -1; j > i; j--)
			{
				arr[j + 1] = arr[j - 1];
			}
			arr[i] = '%';
			arr[i + 1] = '2';
			arr[i + 2] = '0';
		}

		i++;
	}

	for (i = 0; i < 100; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}



//err找不到问题所在
//void replacespace(char* str, int length)
//{
//	assert(str);
//	char* cur = str;
//	int count = 0;
//	while (*cur)
//	{
//		if (*cur == ' ')
//			count++;
//		cur++;
//	}
//
//	int end1 = length - 1;
//	int end2 = length + count * 2 - 1;
//	while (end1 != end2)
//	{
//		if (end1 != ' ')
//		{
//			str[end2--] = str[end1--];
//
//		}
//		else
//		{
//			end1--;
//			str[end2--] = '0';
//			str[end2--] = '2';
//			str[end2--] = '%';
//		}
//	}
//
//}
//
//int main()
//{
//	char arr[100] = "We Are Happy";
//	int length = strlen(arr);
//	replacespace(arr, length);
//
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%c", arr[i]);
//	}
//
//	return 0;
//}