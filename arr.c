#include <stdio.h>

//void swg(int a, int b)  //why顺序未变？——单个元素传参？
//{
//	int m;
//	m = a;
//	a = b;
//	b = m;
//	return a, b;
//}

void bubble_sort(int arr[],int sz)
{
	//int sz = sizeof(arr)/sizeof(arr[0]);  //由于数组传参传递的是首元素地址，即这里无法计算大小
	for (int i=0;i<=sz-1;i++)
	{
		int flag = 1 ;
		for (int j = 0; j <= sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arr[j];
				flag = 0;

			}
		
		}

		if (flag = 1) 
		{
			break;
		}
	}
}

int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);  //数组元素个数：整体长度/单个元素大小
	//对arr进行排序，升序
	bubble_sort(arr, sz);  //冒泡排序函数
	printf("排序后的数组：");
	for (int i = 0; i <= sz ; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}