/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	a += b;
	b = a - b;
	a -= b;
	printf("%d,%d", a, b);
	system("pause");
	return 0;		
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("1 play\n");
	printf("0 exit");
}
void game()
{
	int ret = 0;
	int a = 0;
	ret = rand() % 100 + 1;
	printf("%d\n", ret);
	while (1)
	{
		printf("输入你要猜数字");
		scanf("%d", &a);
		if (a > ret)
		{
			printf("猜大了\n");
		}
		else if (a < ret)
		{
			printf("猜小了");
		}
		else
		{
			printf("猜对");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
	system("pause");
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int right = 0;
	int k = 7;
	int sy = sizeof(a) / sizeof(a[0]);
	right = sy - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid]>k)
		{
			right = mid - 1;
		}
		else{
			printf("找到了:%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("找不到");

	system("pause");
	return 0;

	



}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 0;
	char a[10] = { 0 };
	for (i = 0; i <= 2; i++)
	{
		scanf("%s", a);
		if (strcmp(a, "1234") == 0)
		{
			printf("成功");
			break;
		}
		else{
			printf("错误");
		}
	}
	if (i ==3)
	{
		printf("三次错误，退出");
	}
	system("pause");
	return 0;*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define big(ch) (ch >= 'a'&&ch <= 'z')
int  small(char ch)
{
	return ch >= 'A'&&ch <= 'Z';		
}
int main()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (big(ch))
		{
			putchar(ch - 32);
		}
		else if (small(ch))
		{
			putchar(ch + 32);
		}
	}
	system("pause");
	return 0; 
	}*/#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, j;
	int count = 0;
	int sum =0;
	float tmp[10]={ 0 };
	for (i = 0; i < 999999; i++)
	{
		for (j = i; j; j /= 10)
		{
			tmp[count] = j % 10;
			count++;
		}
		for (j = 0; j < count; j++)
		{
			sum += pow(tmp[j], count);
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
		count = sum = 0;
	}
	system("pause");
	return 0; 
	}


