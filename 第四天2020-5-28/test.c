#include<stdio.h>
#include<windows.h>
#define num 10
#pragma warning(disable:4996)
//题目名称：
//调整奇数偶数顺序
//题目内容：
//调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void change(int *p, int n)
{
	int i = 0;
	int j = 0;
	int w = n-1;
	int a[10] = {0};
	for (; i < n; i++){
		if (*(p + i) % 2 == 1){
			a[j]=*(p+i);
			j++;
		}
		else{
			a[w]= *(p + i);
			w--;
		}
	}
	for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
int main()
{
	int i = 0;
	int a[num] = { 0 };
	for (; i < 10; i++){
		scanf("%d", &a[i]);
	}
	change(a, num);
	system("pause");
	return 0;
}