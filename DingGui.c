#include<stdio.h>
//一、输出每位数
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
//	printf("请输入：");
//	scanf("%d",&num);  //1234
//	print(num);
//	return 0 ;
//}
//二、求字符串长度
//int w_len(char* str) //指针变量
//{
//	if(*str != '\0')  //判断是否为空
//	{
//		return 1+w_len(str+1); //1+1+1
//	}
//	else 
//		return 0;  //end
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = w_len(arr); //传入的是数组指针，指向第一个元素，数组以\0结尾
//	printf("长度为：%d\n",len);
//	return 0;
//
////
//}

//三、求n的阶乘——迭代和递归

//四、求斐波那契数列：1 1 2 3 5 8 13 21 34 55（前两个数相加和）
//描述第n个斐波那契数
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
	//TDD-测试驱动开发
	ret = Fib(n);
	printf("ret = %d\n",ret);
	return 0;
}