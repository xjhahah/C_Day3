#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//求1-100出现9的个数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++)
	{
		if (9 == i % 10)
		{
			count++;
		}
		if (9 == i / 10)
		{
			count++;	
		}
		if (9 == i % 10 || 9 == i / 10)
		{
			printf("%d ", i);
		}
	}
	printf("\ncount= %d \n", count);
	getchar();
	return 0;
}

#if 0
//第二题
int main()
{
//	//采用非数学方法解决
//	int m = 1;
//	double sum = 0.0;
//	for (; m < 101; m++)
//	{
//		if (0 == m % 2)
//		{
//			sum -= 1.0 / m;
//		}
//		else if (1 == m % 2)
//		{
//			sum += 1.0 / m;
//		}
//	}
//	printf("Sum = %lf\n", sum);
//	getchar();
//	return 0;
	//采用数学方法解决	
	double sum = 0.0;
	for (int i = 1; i < 101; i++)
	{
		sum += pow(-1, i + 1)/i;
	}
	printf("Sum = %lf\n", sum);
	getchar();
	return 0;
}

//第一题
int swap(int* left, int* right)
{
	int temp;
	temp = *left;
	*left = *right;
	*right = temp;
	return temp;
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,0 };
	int len1 = sizeof(arr1)/sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	printf("arr1=");
	for (int i = 0; i < len1; ++i)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2=");
	for (int j = 0; j < len2; ++j)
	{
		printf("%d ", arr2[j]);
	}
	printf("\n\n");
	for (int i = 0; i < len1; ++i)
	{
		for (int j = 0; j < len2; ++j)
		{
			if (i == j)
			{
				swap(&arr1[i], &arr2[j]);
			}
		}
	}
	printf("arr1=");
	for (int i = 0; i < len1; ++i)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2=");
	for (int j = 0; j < len2; ++j)
	{
		printf("%d ", arr2[j]);
	}
	printf("\n");
	getchar();
	return 0;
}
#endif 0