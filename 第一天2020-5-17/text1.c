#include <stdio.h>
#include<windows.h>
//void show(int *p, int n)
//{
//	for (int i=0; i < n; i++){
//		printf("%d", *(p + i));
//	}
//
//}
int main()
{
	int arr[] = {3,6,3,1,4,8};
	int num = sizeof(arr) / sizeof(arr[0]);
	int *p =&arr[0];
	for (int i = 0; i < num; i++){
		printf("%d ", *(p + i));
	}
	system("pause");
	return 0;
}