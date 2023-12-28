#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	scanf("hello J");
//	printf("hello J\n");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 12; i++)
//	{
//		a[i] = i;
//		printf("hello\n");
//	}
//	return 0;
//}


//输入一个整数数组, 实现一个函数,
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分,
//所有偶数位于数组的后半部分。

//void move_arr(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left < right)
//	{
//		//从左往右找到一个偶数，停下
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		//if (left < right && arr[left] % 2 != 0)
//		//	left++;
//		//用IF语句是错误的，只会循环一次。
//		//从右往左找到一个奇数，停下
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//if (left < right && arr[right] % 2 == 0)
//		//	right--;
//		
//		//交换
//		if (left < right)
//		{
//			int temp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = temp;
//			left++;
//			right--;
//		}
//	}
//
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//调整arr[]
//	move_arr(arr, sz);
//	//打印arr[]
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//
//	return 0;
//}


//有序序列合并

//sort_arr1(arr1);

//void Adj_arr1(int arr1[10], int arr2[10], int arr3[10], int n, int m)
//{
//	int i = 0;
//	int k = 0;
//	int left = 0;
//	int right = n + m - 1;
//	//将arr2与arr3存储进arr1
//	for (i = 0; i < n; i++)
//	{
//		arr1[k] = arr2[i];
//		k++;
//	}
//	for (i = 0; i < m; i++)
//	{
//		arr1[k] = arr3[i];
//		k++;
//	}
//	//排序算法
//	for (i = 0; i < n + m; i++)
//	{
//		for (k = i + 1; k < n + m; k++)
//		{
//			if (arr1[i] > arr1[k])
//			{
//				int temp = arr1[k];
//				arr1[k] = arr1[i];
//				arr1[i] = temp;
//			}
//
//		}
//
//	}
//
//
//	//这是左右顺序交换算法，不是排序算法
//	//while (left < right)
//	//{
//	//	if (arr1[left] > arr1[right])
//	//	{
//	//		int temp = arr1[right];
//	//		arr1[right] = arr1[left];
//	//		arr1[left] = temp;
//	//	}
//	//	left++;
//	//	right--;
//	//}
//}
//int main()
//{
//	int n = 2;
//	int m = 5;
//	int i = 0;
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int arr3[10] = { 0 };
//
//	printf("输入N个整数\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	printf("输入M个整数\n");
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr3[i]);
//	}
//	Adj_arr1(arr1, arr2, arr3, n, m);
//
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

//有序序列合并方法2（要求存入的数据是要从小到大排好序的数组）

int main()
{
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int arr3[100] = { 0 };
	int i = 0;
	int n = 0;
	int m = 0;
	//输入n，m
	printf("输入n,m的个数：\n");
	scanf("%d %d", &n, &m);

	printf("输入%d个整数:\n",n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	printf("输入%d个整数:\n", m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr3[i]);
	}
	//排序
	i = 0;
	int j = 0;
	int k = 0;
	while (j < n && k < m)
	{
		if (arr2[j] < arr3[k])
		{
			arr1[i++] = arr2[j];
			j++;
		}
		else
		{
			arr1[i++] = arr3[k];
			k++;
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			arr1[i++] = arr2[j];
		}

	}
	if (k < m)
	{
		for (; k < m; k++)
		{
			arr1[i++] = arr3[k];
		}

	}
	for (i = 0; i < n + m; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}