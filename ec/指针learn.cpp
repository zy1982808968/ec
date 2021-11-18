#include<iostream>
using namespace std;
void swap(int a, int  b)//值传递方式
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap1(int *a, int *b)
{
	int temp;
	temp=*a ;
	*a = *b;
	*b = temp;


}


int main()
{
	//int a = 100;
	//int *p;
	//p = &a;//&是取地址符号把a的地址赋给p
	//*p = 1000;//通过*操作指针变量指向的内存
	//cout << *p;//用解引用的方式访问内存
	//cout << endl << a;
	//cout << endl << p;
	//cout << endl << *p;


	//int *c;
	//c = new int();//创建一个空间
	//*c = 100;
	//cout << *c;
	//int *n = (int *)0x1100;//野指针随便给他一个指针不是自己访问时的会报错
	//cout << *n;

	//int *o = NULL;//16进制0~255是系统指针不能进行访问
	/*int a = 10;
	int b = 20;*/
	//const int *p = &a;//常量指针
	//*p = 20;//错误  *p是解引用p指向的是数据域
	//p = &b;//正确
//	int * const p = &a;//指针常量 指针不可以改变 但值可以改变
	//*p = 30;//正确
	//p = &b;//错误
	//const int * p = &a;//const及修饰指针又修饰常量
	//*p = 20;//错误
	//p=&b;//错误
	//用指针访问数组
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *p;
	//p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *p << "  ";//*p表示解引用的输出数组的值
	//	p++;//因为是intx型的指针（占四个字节）所以指针每次加的是4


	//}
	int a = 10;
	int b = 20;
	swap(a, b);//按值传递并不改变实参
	cout << "a=" << a<<endl;
	cout << "b=" << b<<endl;

	swap1(&a, &b);//安地址传递会修饰实参

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	return 0;
}