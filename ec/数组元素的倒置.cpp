#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;//���һ��Ԫ�ص��±�

//���first>=end ѭ��������first=endʱ��ʾ����ͬһ ��Ԫ��
	while (start<end)
	{
		int temp= arr[start];
		 
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;


	}
		
	cout << end << endl;//ѭ��������end��ֵ��Ϊ2

		for (int i = 0; i <= 4; i++)
		{
			cout << arr[i] << "  ";
		}
	
	
	


	return 0;
}