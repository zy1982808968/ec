		#include<iostream>
		using namespace std;

		template<class DataType>
		struct StackNode
		{
			DataType data;
			StackNode <DataType> *next;

		};
		template<class DataType>
		class LinkStack {
		private:
			StackNode<DataType> *top;
		public:
			LinkStack() {
				top = NULL;//栈的初始化
			
			};

			int EmptyLinkStack();
			void pushLinkStack(DataType x);
			int  popLinkStack(DataType *x);
			void print() {
				StackNode<DataType> *p;
				p = top;
				while (p)
				{
				
					cout << p->data << "  ";
					p = p->next;
				}
				cout << endl;
			
			}
		};

		template<class DataType>
		int  LinkStack<DataType>::EmptyLinkStack() {//判断是不栈为空
			if (top == NULL)
				return 1;
			else
				return 0;	
		}
		template<class DataType>
		void LinkStack<DataType>::pushLinkStack(DataType x) {//入栈
			StackNode<DataType> *s;
			s = new StackNode<DataType>;
			s->data = x;
			s->next = top;
			top = s;
		
		}

		template<class DataType>
		int  LinkStack<DataType>::popLinkStack(DataType *x) {//出栈
			StackNode<DataType> *p;
			if (top == NULL)
				return NULL;
			else
			{
				*x = top->data;
				p = top;
				top = top->next;
				delete p;
				return 1;
			}
		}


		int main() {
			LinkStack<int> l;
			int x;
			cout << "当输入-1的结束入栈操作" << endl;
			cin >> x;
			while (x != -1)
			{
				l.pushLinkStack(x);
				cin >> x;

			}
			cout << "入栈后元素遍历:";
			l.print();
			int n;
			cout << "请输入要出栈几个元素" << endl;
			cin >> n;
			for (int i=0;i<n;i++) 
			{
			l.popLinkStack(&x);
		}
			cout << "出栈后元素遍历" << endl;
			l.print();
			return 0;
		}