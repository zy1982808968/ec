#include<iostream>
using namespace std;
void swap(int a, int  b)//ֵ���ݷ�ʽ
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
	//p = &a;//&��ȡ��ַ���Ű�a�ĵ�ַ����p
	//*p = 1000;//ͨ��*����ָ�����ָ����ڴ�
	//cout << *p;//�ý����õķ�ʽ�����ڴ�
	//cout << endl << a;
	//cout << endl << p;
	//cout << endl << *p;


	//int *c;
	//c = new int();//����һ���ռ�
	//*c = 100;
	//cout << *c;
	//int *n = (int *)0x1100;//Ұָ��������һ��ָ�벻���Լ�����ʱ�Ļᱨ��
	//cout << *n;

	//int *o = NULL;//16����0~255��ϵͳָ�벻�ܽ��з���
	/*int a = 10;
	int b = 20;*/
	//const int *p = &a;//����ָ��
	//*p = 20;//����  *p�ǽ�����pָ�����������
	//p = &b;//��ȷ
//	int * const p = &a;//ָ�볣�� ָ�벻���Ըı� ��ֵ���Ըı�
	//*p = 30;//��ȷ
	//p = &b;//����
	//const int * p = &a;//const������ָ�������γ���
	//*p = 20;//����
	//p=&b;//����
	//��ָ���������
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *p;
	//p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *p << "  ";//*p��ʾ�����õ���������ֵ
	//	p++;//��Ϊ��intx�͵�ָ�루ռ�ĸ��ֽڣ�����ָ��ÿ�μӵ���4


	//}
	int a = 10;
	int b = 20;
	swap(a, b);//��ֵ���ݲ����ı�ʵ��
	cout << "a=" << a<<endl;
	cout << "b=" << b<<endl;

	swap1(&a, &b);//����ַ���ݻ�����ʵ��

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	return 0;
}