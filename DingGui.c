#include<stdio.h>
//һ�����ÿλ��
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d",n);
//	printf("%d\n",n%10);
//}
//int main()
//{
//	unsigned num = 0 ;
//	printf("�����룺");
//	scanf("%d",&num);  //1234
//	print(num);
//	return 0 ;
//}
//�������ַ�������
//int w_len(char* str) //ָ�����
//{
//	if(*str != '\0')  //�ж��Ƿ�Ϊ��
//	{
//		return 1+w_len(str+1); //1+1+1
//	}
//	else 
//		return 0;  //end
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = w_len(arr); //�����������ָ�룬ָ���һ��Ԫ�أ�������\0��β
//	printf("����Ϊ��%d\n",len);
//	return 0;
//
////
//}

//������n�Ľ׳ˡ��������͵ݹ�

//�ġ���쳲��������У�1 1 2 3 5 8 13 21 34 55��ǰ��������Ӻͣ�
//������n��쳲�������
int Fib(int n)
{
	if (n<=2)
		return 1;
	else
		return Fib(n-1)+Fib(n-2);
	
}
//int Fib(int n)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//}


int main()
{
	int n = 0 ;
	int ret = 0 ;
	scanf("%d",&n) ;
	//TDD-������������
	ret = Fib(n);
	printf("ret = %d\n",ret);
	return 0;
}