	#include <iostream>
	using namespace std;


	#define max 5

	 typedef struct  
	{
		 int  *data;
		int front, rear;

	}C_SeQueue;

	 void   Init_SeQueue(C_SeQueue &q)//循环队列的初始化
	 { 
		 q.data = new int[max];
		 if (!q.data)
			 return;
		 q.front = q.rear = 0;

	 }
	 int insequt(C_SeQueue &q, int & x)//入队
	 {
		 if ((q.rear + 1) % max == q.front)
			 return-1;
		 q.data[q.rear] = x;
		 q.rear = (q.rear + 1) % max;


		 return 1;
	 }
	 int outsequt(C_SeQueue &q,int *x)
	 {
		 if (q.rear == 0)
			 return 0;
		 else
		 {
			 q.front = (q.front + 1) % max;
			 *x = q.data[q.front];
			 return 1;
		 }


 
	 }

	 void print(C_SeQueue &q)
	 {
		 for (int i =q.front; i < q.rear; i = (i + 1) % max)
		 {
			 cout << q.data [i]<< "   ";
		 }

 
 
	 }




	int main() {
		C_SeQueue q;
		Init_SeQueue(q);
		int e;
		int n;
		cout << "请输入几个元素入队"<<endl;
		cin >> n;
		cout << "请输入要入队的元素值：" << endl;
		for (int i= 0; i < n; i++) {
			cin >> e;
			insequt(q, e);
		}

		cout << "遍历入队的元素";
		print(q);
		int *x;
		x = &e;
		int nu;
		cout << endl;
		cout << "请输入要出队几个元素" << endl;
		cin >> nu;
		for (int i = 0; i < nu; i++)
		{
			outsequt(q, x);
		}
		cout << "遍历出队后的元素";
	print(q);

		return 0;
	}