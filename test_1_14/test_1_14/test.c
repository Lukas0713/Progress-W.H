#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

////����������
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
//		if (a % 2 == 1)//a������
//		{
//			a = 1;
//		}
//		else//a��ż��
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


////��ӡ���ո�ֱ��������
////�ı�һ���ո�ĸ����Ϳ��Ա任�ɵȱ�������
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


////�����ۿۼ���
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



//��Ŀ����:������
//��Ŀ���� :5λ�˶�Ա�μ���10��̨��ˮ����, ����������Ԥ�������� :
//Aѡ��˵ : B�ڶ�, �ҵ���;
//Bѡ��˵:�ҵڶ�, E����;
//Cѡ��˵:�ҵ�һ, D�ڶ�;
//Dѡ��˵:C���, �ҵ���;
//Eѡ��˵:�ҵ���, A��һ;
//����������, ÿλѡ�ֶ�˵����һ��, ����ȷ�����������Ρ�
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//abcdeÿ�������ö�ٳ���
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


//������
//��Ŀ���� :�ձ�ĳ�ط�����һ��ıɱ��, ����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//�����������Щ��Ϣ, дһ��������ȷ������˭�����֡�
//A˵ : �����ҡ�
//B˵ : ��C��
//C˵ : ��D��
//D˵ : C�ں�˵
//��֪3����˵���滰, 1����˵���Ǽٻ���
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


//�������
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
//			printf("%4d", arr[i][j]);// "%4d" ��β������4���ո񣬼����ַ�β��������һ���ַ�β��Ϊ4���ַ���
//		}							//  "    %d" ��ͷ����4���ַ������ַ���ͷ��������һ���ַ�β����4���ַ���
//		printf("\n");
//	}
//	return 0;
//}


//ʵ��һ�����������������ַ����е�k���ַ���
#include <string.h>
//��1
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;//��k�����ַ����ĳ���ʱ��ȥ���ַ����ı�����
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

//��2
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
//	reverse(arr, arr + k - 1);       //��ת��ߵ��ַ���
//	reverse(arr + k, arr + len - 1); //��ת�ұߵ��ַ���
//	reverse(arr, arr + k - 1);       //��ת�����ַ���
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




//���Ͼ���
//��һ�����־���, �����ÿ�д������ǵ�����, ������ϵ����ǵ�����,
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ�� : ʱ�临�Ӷ�С��0(N);

////��1���õ�ַ�ķ���
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


//����2.�ýṹ��ķ�����������

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


//��Ŀ����:
//�ַ�����ת���
//дһ������, �ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���� : ����s1 = AABCD��s2 = BCDAA, ����1
//����s1 = abcd��s2 = ACBD, ����0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//int left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)//arr2��arr1��ת������ǰ�����һ����
//		return 0;
//	strncat(arr1, arr1, len1);//arr1 ���Լ�׷���Լ������еķ�ת���������ٳ����ˡ�
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


//����һ����������, �ж��Ƿ�����������, ����, ָ�����е�������С���������
//�ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��

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