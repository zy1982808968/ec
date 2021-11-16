#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;//最后一个元素的下标

//如果first>=end 循环结束当first=end时表示到了同一 个元素
	while (start<end)
	{
		int temp= arr[start];
		 
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;


	}
		
	cout << end << endl;//循环结束后end的值变为2

		for (int i = 0; i <= 4; i++)
		{
			cout << arr[i] << "  ";
		}
	
	
	


	return 0;
}