#include<stdio.h>
#include<windows.h>
#define num 10
#pragma warning(disable:4996)
//��Ŀ���ƣ�
//��������ż��˳��
//��Ŀ���ݣ�
//��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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