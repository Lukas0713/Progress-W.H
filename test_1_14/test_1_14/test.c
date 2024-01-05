#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

////乐乐数数字
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &input);
//
//	while (input)
//	{
//		int a = input % 10;
//		if (a % 2 == 1)//a是奇数
//		{
//			a = 1;
//		}
//		else//a是偶数
//		{
//			a = 0;
//		}
//		sum += a * pow(10, i);
//		i++;
//		input = input/10;
//	}
//	printf("%d", sum);
//	return 0;
//}


////打印带空格直角三角形
////改变一个空格的个数就可以变换成等边三角形
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


////网购折扣计算
//int main()
//{
//	float val = 0.0;
//	int mon = 0;
//	int day = 0;
//	int con = 0;
//	scanf("%f %d %d %d", &val, &mon, &day, &con);
//
//	if (mon == 11 && day == 11)
//		val = val * 0.7 - con * 50;
//	else if(mon == 12 && day == 12)
//		val = val * 0.8 - con * 50;
//	
//	if (val <= 0)
//		printf("%.2f\n", 0);
//	else
//		printf("%.2f\n", val);
//	return 0;
//}



//题目名称:猜名次
//题目内容 :5位运动员参加了10米台跳水比赛, 有人让他们预测比赛结果 :
//A选手说 : B第二, 我第三;
//B选手说:我第二, E第四;
//C选手说:我第一, D第二;
//D选手说:C最后, 我第三;
//E选手说:我第四, A第一;
//比赛结束后, 每位选手都说对了一半, 请编程确定比赛的名次。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//abcde每种情况都枚举出来
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1;d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						//
//						if ((b == 2) + (a == 3) == 1
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if((a+b+c+d+e==15)&&(a*b*c*d*e==120))
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//猜凶手
//题目内容 :日本某地发生了一件谋杀案, 警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//现在请根据这些信息, 写一个程序来确定到底谁是凶手。
//A说 : 不是我。
//B说 : 是C。
//C说 : 是D。
//D说 : C在胡说
//已知3个人说了真话, 1个人说的是假话。
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer!='a') + (killer=='c') + (killer=='d') + (killer!='d') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}


//杨辉三角
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	for (j = 0; j < 10; j++)
//	//	{
//	//		if (i + j < 10)
//	//		{
//	//			printf("*");
//	//		}
//	//	}
//	//	printf("\n");
//	//}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d", arr[i][j]);// "%4d" 是尾部对其4个空格，即此字符尾部距离上一个字符尾部为4个字符；
//		}							//  "    %d" 是头部空4个字符，此字符的头部距离上一个字符尾部空4个字符。
//		printf("\n");
//	}
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k的字符。
#include <string.h>
//法1
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;//当k大于字符串的长度时，去掉字符串的倍数。
//	int j = 0;
//
//	while (k--)
//	{
//		char temp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = temp;
//	}
//
//	//int len = strlen(arr);
//	//k %= len;
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < k; i++)
//	//{
//	//	char temp = arr[0];
//	//	for (j = 0; j < len - 1; j++)
//	//	{
//	//		arr[j] = arr[j + 1];
//	//	}
//	//	arr[len-1] = temp;
//	//}
//}

//法2
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);       //翻转左边的字符串
//	reverse(arr + k, arr + len - 1); //翻转右边的字符串
//	reverse(arr, arr + k - 1);       //翻转整个字符串
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}




//杨氏矩阵
//有一个数字矩阵, 矩阵的每行从左到右是递增的, 矩阵从上到下是递增的,
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求 : 时间复杂度小于0(N);

////法1，用地址的方法
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py -1;
//
//	while (x < *px && y >= 0)
//	{
//		if (k < arr[x][y])
//			y--;
//		else if (k > arr[x][y])
//			x++;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//
//	}
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	int a = 3;
//	int b = 3;
//	scanf("%d", &k);
//	int ret = find_num(arr, &a, &b, k);
//	printf("%d %d\n", a,b);
//	return 0;
//}


//方法2.用结构体的方法返回坐标

//struct point
//{
//	int x;
//	int y;
//};
//
//struct point fine_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c-1;
//	struct point p = { -1, - 1 };
//	while (x < r && y >= 0)
//	{
//		if (k < arr[x][y])
//			y--;
//		else if (k > arr[x][y])
//			x++;
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//
//}
//int main()
//{
//	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	struct point ret = fine_num(arr, 3, 3, k);
//	printf("%d %d\n", ret.x, ret.y);
//
//	return 0;
//}


//题目名称:
//字符串旋转结果
//写一个函数, 判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如 : 给定s1 = AABCD和s2 = BCDAA, 返回1
//给定s1 = abcd和s2 = ACBD, 返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//int left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)//arr2是arr1翻转出来的前提得先一样长
//		return 0;
//	strncat(arr1, arr1, len1);//arr1 给自己追加自己后，所有的翻转情况都会穷举出来了。
//	char* str = strstr(arr1, arr2);
//	if (str == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[20] = "cdab";
//	int ret = left_move(arr1, arr2);
//	if (ret = 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//
//	return 0;
//}


//输入一个整数序列, 判断是否是有序序列, 有序, 指序列中的整数从小到大排序或
//者从大到小排序(相同元素也视为有序)。

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = {0};
	int i = 0;
	int flag1 = 0;
	int flag2 = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
				flag1 = 1;
			else if (arr[i] < arr[i - 1])
				flag2 = 1;
			else
				;
		}
	}
	if (flag1 + flag2 <= 1)
		printf("sorted\n");
	else
		printf("unsorted\n");

	return 0;
}