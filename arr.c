#include <stdio.h>

//void swg(int a, int b)  //why˳��δ�䣿��������Ԫ�ش��Σ�
//{
//	int m;
//	m = a;
//	a = b;
//	b = m;
//	return a, b;
//}

void bubble_sort(int arr[],int sz)
{
	//int sz = sizeof(arr)/sizeof(arr[0]);  //�������鴫�δ��ݵ�����Ԫ�ص�ַ���������޷������С
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
	int sz = sizeof(arr) / sizeof(arr[0]);  //����Ԫ�ظ��������峤��/����Ԫ�ش�С
	//��arr������������
	bubble_sort(arr, sz);  //ð��������
	printf("���������飺");
	for (int i = 0; i <= sz ; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}