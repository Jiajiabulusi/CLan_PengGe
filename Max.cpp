#include<stdio.h>
//---------------------------------
//int max(int x, int y)
//{
//	int Max = 0;
//	if (x >= y)
//	{
//		Max = x;
//	}
//	else 
//	{
//		Max = y;
//	}
//	return Max;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf_s("%d %d",&x,&y);
//
//	int maxm = max(x, y);
//	printf("Max is %d",maxm);
//
//	return  0;
//}
//----------------------------------

//---------------------------------
//int main()
//{
//	//input
//	int x = 0;
//	int y = 0;
//	scanf_s("%d", &x);
//	// caculate
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else 
//		y = -1;
//
//   //output
//	printf("y = %d", y);
//	return 0;
//}
//--------------------------

//----------������---------
int main()
{
	// /���ŵ����˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ���
	int a = 7 / 2;
	float c = 7 / 2.0;
	int b = 7 % 2;//����

	printf("%d\n", a);
	printf("%.2f\n", c);
	printf("%d\n", b);


	return 0;
}