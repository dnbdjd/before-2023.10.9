#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<stdbool.h>
//int main()
//{
//	printf("hellow\n");
//	return 0;
//}

//数据类型

//int main()
//{
//	printf("%d\n", sizeof(char)); //字符数据类型，一字节
//	printf("%d\n", sizeof(short)); //短整型，两字节
//	printf("%d\n", sizeof(int)); //整形 四字节
//	printf("%d\n", sizeof(long)); //长整型 四字节
//	printf("%d\n", sizeof(long long)); //更长整型 八字节
//	printf("%d\n", sizeof(float));  //单精度浮点数  四字节
//	printf("%d\n", sizeof(double)); //双精度浮点数 八字节
//	return 0;
//}

//short num = 10;
// int main()
// {
//	short num = 0;
//		printf("%d\n", num);
//		return 0;
//  }

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int a = (num1 * num2);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	const int a = 1;
//	int arr[a] = {0};
//	return 0;
////}
//
//int main()
//{
//	char arr1[] = "wfghufjf"; //字符串末尾自带/0,表示字符串结束
//	char arr2[] = {'d', 'f', 'r','\0'};
//	printf("%s\n", arr1); //%s 打印字符串 %c打印字符 %d 打印整型 %f 打印float类型的数据 %lf 打印double类型的数据 
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1)); //求字符串长度，string lenth 头文件 string.h
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("%c\n",'\'');
//	printf("%c\n",'\\');
//	printf("%s\n","c:\\test\\test.c");
//	printf("\a\a");
//	return 0;
//}

//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	printf("账号:");
//	scanf("%d", &input1);
//	if (input1 == 11)
//	{
//		printf("密码:");
//	}
//	scanf("%d", &input2);
//	if (input2 == 123456)
//	    printf("登录成功");
//	if (input2 != 123456)
//	{
//		printf("登录失败");
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("要睡觉吗(0/1)?\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("晚安");
//	}
//	else
//	{
//		printf("睡个屁，起来嗨");
//	}
//	return 0;
//

//int main()
//{
//	int line = 0;
//	while (line < 10000)
//	{
//		printf("写代码%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//	{
//		printf("nb\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	int i = 0;
//	printf("请输入账户:");
//	scanf("%d", &input1);
//	while (input1 == 123)
//	{
//		printf("请输入密码:");
//		scanf("%d", &input2);
//		i++;
//		if (input2 == 12345)
//		{
//			printf("登录成功");
//		}
//		if (i >= 3)
//		{
//			printf("密码错误次数过多");
//			break;
//		}
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//    return 0;
//}

//int main()
//{
//	int arr [10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ",arr[i] );
//		i++;
//	}
//	return 0;
//}


//int max(int x, int y,int z)
//{
//	if (x > y > z)
//		return x;
//	else if(y > x > z) 
//	{
//		return y;
//	}
//	else if (z > x > y)
//	{
//		return z;
//	}
//		
//}
//
//int main()
//{
//	int c = 0;
//	int d = 0;
//	int e = 0;
//    scanf(" %d %d %d", &c, &d, &e);
//	int f = max(c, d,e);
//	printf("%d", f);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		printf("%d", b);
//	}
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d", y);
//	return 0;
//}

//int main()
//{
//	float b = 13 / 3.0;
//	printf("%.2f", b);
//	return 0;
//}

//int main()
//{
//	int a = 8  % 3;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag)
//	{
//		printf("dd");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d\n,%d\n", &a, &b);
//	if (a || b)   //与运算
//	//if (a && b)   //或运算
//		printf("%d", 111);
//	return 0;
//}

//int test()
//{
//	//static int a = 0;
//	int a = 0;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		test();
//	}
//	return 0;
//}

////#define add(x,y) ((x)+(y))
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a,b);
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d",a);
//	&a;
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age > 18 && age <= 28)
//		printf("青年\n");
//	else if (age > 28 && age <= 40)
//		printf("壮年\n");
//	else if (age > 40 && age <= 60)
//		printf("中年\n");
//	else if (age > 60 && age <= 100)
//		printf("老登，爆点金币\n");
//	else if (age > 100)
//		printf("老寿星\n");
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a < 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a++;
//		}
//}


//int main()
//{
//	int a = 1;
//	while (a < 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a+=2;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;	
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//	}
//
//}


//int main()
//{
//	int a = 0;
//	while (a < 11)
//	{
//		if (a == 5)
//			break;
//		printf("%d ",a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while (( ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("确认密码:>");
//	int a = getchar();
//	if (a == 'y')
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		printf("%c\n", ch);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	while (i <= 12)
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d %2d %2d", &year, &month, &date);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//}


//int main()
//{
//	int a = printf("hello world!");
//	printf("\n%d\n", a);
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int a = 2;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", sum(a));
//	}
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//		printf("%d", max);
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d", max);
//}

//int main ()
//{
//	int weight = 0;
//    float high = 0.0f;
//	scanf("%d", &weight);
//	scanf("%f", &high);
//	float bmi = weight / (high * high);
//	printf("%.2f", bmi);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//    }
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了,下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//}

//int main()
//{
//	int a = 0;
//	for (;;)
//	{
//		printf("%d ",a);
//		a++;
//	}
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr2 - 1);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//}

//int main()
//{
//	int i = 0;
//	char pass[10] ={0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", pass);
//		if (strcmp(pass, "123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//		printf("密码错误次数过多，退出程序");
//}

//void fun(int a[])
//{
//	printf("%zu", sizeof(a));
//}
//int main()
//{
//	int a[10] = { 0 };
//	printf("%zu\n", sizeof(a));
	//printf("%zu\n", sizeof(a[1]));
//	fun(a);
//	return 0;
//}
// 

//
void menu()
{
	printf("**************************\n");
	printf("********  1.play  ********\n");
	printf("********  0.exit  ********\n");
	printf("**************************\n");
}
//
//void game()
//{
//	/*srand();*/
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	for (; guess != ret; )
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//			printf("猜对了\n");
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//		    game();
//			break;
//		default:
//			printf("选择错误，重选\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	again:
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;
//		int j = 2;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2030; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//}

//int leap_year(int a)
//{
//	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2030; year++)
//	{
//		if (leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//}
//
//
//int binary_search(int arr[],int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//int add(int n)
//{
//	//return n+1;
//	return ++n;
//}
//
//
//
//int main()
//{
//	int n = 0;
//	n = add(n);
//	printf("%d ",n);
//	n = add(n);
//	printf("%d ", n);
//	n = add(n);
//	printf("%d ", n);
//	n = add(n);
//	printf("%d ", n);
//
//}

//void add(int* n)
//{
//	(*n)++;
//}
//
//int main()
//{
//	int n = 0;
//	add(&n);
//	printf("%d ",n);
//	add(&n);
//	printf("%d ", n);
//	add(&n);
//	printf("%d ", n);
//	add(&n);
//	printf("%d ", n);
//}

//void pri(unsigned int n)
//{
//	if (n > 9)
//	{
//		pri(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	pri(num);
//	return 0;
//}

//int lenth(char* len)
//{
//	int count = 0;
//	 while (*len != '\0')
//	{
//		len++;
//		count++;
//	}
//	return count;
//}

//int lenth(char* len)
//{
//	if (*len != '\0')
//		return 1 + lenth(len + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdfe";
//	int len = lenth(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//int main()
//{
// 
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	scanf("%d", &n);
//	while(n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d", c);
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	again:
//	if (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//		goto again;
//	}
//	return c;
//	if (n < 3)
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//void menu()
//{
//	printf("**************************\n");
//	printf("********  0.auto  ********\n");
//	printf("********  1.hand  ********\n");
//	printf("**************************\n");
//}
//
//int mode, type = 0;
//float money, size = 0.0;
//int scan()
//{
//	printf("请选择加油种类：\n");
//	scanf("%d", &type);
//	printf("请选择加油价格：\n");
//	scanf("%f", &money);
//}
//
//int main()
//{
//	do
//	{
//		menu();
//		printf("请选择加油方式：");
//		scanf("%d", &mode);
//		switch (mode)
//		{
//		case 0:
//			scan();
//			switch (type)
//			{
//			case 95:
//				size = money / 8.71;
//				break;
//			case 97:
//				size = money / 9.71;
//				break;
//			case 98:
//				size = money / 10.71;
//				break;
//			}
//			printf("手动加油%.2f元能加%.2f升%d号油\n", money,size,type);
//			break;
//		case 1:
//			scan();
//			switch (type)
//			{
//			case 95:
//				size = money / 8.91;
//				break;
//			case 97:
//				size = money / 9.91;
//				break;
//			case 98:
//				size = money / 10.91;
//				break;
//			}
//		printf("自动加油%.2f元能加%.2f升%d号油\n", money, size,type);
//		}
//		break;
//	} while (mode);
//	return 0;
//}

//int worktime = 0;
//float hourpay, weekpay = 0.0;
//int work()
//{
//	if (worktime <= 40)
//	{
//		weekpay = worktime * hourpay;
//		return weekpay;
//	}
//	else if (worktime > 40 && worktime <= 80)
//	{
//		weekpay = (worktime - 40) * 1.5 * hourpay + (40 * hourpay);
//		return weekpay;
//	}
//	else
//		return("注意身体\n");
//}
//int main()
//{	
//	scanf("%d %f", &worktime, &hourpay);
//	work();
//	printf("%.2f\n", weekpay);
//}

//int main()
//{
//	int a,b,c= 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a,b,m = 0;
//	scanf("%d %d", &a,&b);
//	int min = (a < b) ? a : b;
//    m = min;
//	for(;; m--)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//	}
//	printf("%d ", m);
//	return 0;
//}

//int main()
//{
//	int a,b,m = 0;
//	scanf("%d %d", &a,&b);
//	int max = (a < b) ? a : b;
//    m = max;
//	for(;; m++)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//	}
//	printf("%d ", m);
//	return 0;
//}

//int main()
//{
//	int i, flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//}

//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum - 1.0 / i;
//		}
//		else
//		{
//			sum = sum + 1.0 / i;
//		}
//	}
//	printf("%lf ", sum);
//}

//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 = sum1 + 1.0 / i;
//		}
//		else
//		{
//			sum2 = sum2 + 1.0 / i;
//		}
//		sum = sum2 - sum1;
//	}
//	printf("%lf ", sum);
//}
//
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t",j,i,i * j);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int i = arr[1];
//	int max = arr[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (i > max)
//			max = i;
//	}
//	printf("%d", i);
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	for ( b = sz - 1; b >= 0; b--)
//	{
//		printf("%d ", arr[b]);
//	}
//	for (c = 0; c < sz; c++)
//	{
//		printf("\n&arr[%d] = %p\n", c, &arr[c]);
//	}
//}

//int main()
//{
//	int arr1[3][3] = { 1,2,3,4,5,6,6,4,8 };
//	int arr1[2][3] = { {2,2},{3,4} };
//	return 0;
//}

//int main()
//{
//	float num1, num2, result = 0.0;
//	char op;
//	scanf("%f %c %f", &num1, &op, &num2);
//	switch (op)
//	{
//	case '+':
//		result = num1 + num2;
//		break;
//	case '-':
//		result = num1 - num2;
//		break;
//	case '*':
//		result = num1 * num2;
//		break;
//	case '/':
//		result = num1 / num2;
//		break;
//	}
//	printf("%.3f", result);
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,2,3,4 };
//	int i,j= 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d] = %p \n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int bubble_sort(int arr[], int sz)
//{
//	int i, j, temp = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,2,3,4,5,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//    float num = 0.0;
//    float sum = 0.0;
//    float avg = 0.0;
//    int count = 0;
//    scanf("%f", &num);
//    while (num != 0)
//    {
//        sum += num;
//        count++;
//        scanf("%f", &num);
//    }
//    avg = sum / count;
//    printf("avg = %.2f\n", avg);
//    return 0;
//}