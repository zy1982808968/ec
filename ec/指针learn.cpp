#include<iostream>
using namespace std;
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
	int a = 10;
	int b = 20;
	//const int *p = &a;//常量指针
	//*p = 20;//错误
	//p = &b;//正确
//	int * const p = &a;//指针常量 指针不可以改变 但值可以改变
	//*p = 30;//正确
	//p = &b;//错误
	//const int * p = &a;//const及修饰指针又修饰常量
	//*p = 20;//错误
	//p=&b;//错误
	return 0;
}