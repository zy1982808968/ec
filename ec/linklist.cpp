	#include<iostream>
	#define flag -1
	using namespace std;

	template<class DataType>
	struct LNode {
		DataType  data;
		LNode<DataType> *next= NULL;
	};

	template<class DataType>
	class LinkList {
	private:
		LNode<DataType> *L;
	public:
		LNode <DataType> *Creat_LinkList();//尾插法
		LNode <DataType>  *revrs();//逆操作
		int Length_linklist();//求单链表长度
		int insert_linklist(int i, DataType x);//插入元素
		LNode<DataType> *Get_linklist(int i) {//按序号查找元素并返回地址
			LNode<DataType> *p;
			int j;
			p = L ;
			j = 1;
			while (p!=NULL&&j<i)
			{
				p = p->next;
				++j;
			}
			return p;
		};
		void print();//遍历元素
	int Del_LinkList(int i);//删除元素
	};
	template<class DataType>
	void LinkList<DataType>::print() {
		LNode<DataType> *q;
		q = L;
		while (q!=NULL)
		{
			cout << q->data << "   ";
			q = q->next;
		}
	}
	template<class DataType>
	LNode<DataType> *LinkList<DataType>::revrs(){
	 //逆操作
		LNode<DataType> *p,*q;
		p = L->next;
		L->next = NULL;
		while (p!=NULL){
			q = p->next;
			p->next = L;
			L = p;
			p = q;

		}
		return L;
	}
	template<class DataType>
	LNode<DataType> *LinkList<DataType>::Creat_LinkList() {//尾插法
		LNode<DataType> *r;
		LNode<DataType> *s;
		L = r = NULL;
		 int x;
		cin >> x;
		while (x != flag)
		{
			s = new LNode<DataType>;
			s->data = x;
			if (L == NULL)
				L = s;
			else
				r->next = s;
	         		r = s;
				 cin >> x;

		}

		if (r != NULL) 
			r->next = NULL;
		return L;
	}
	template<class DataType>
	int  LinkList<DataType>::Length_linklist() {//求链表长度
		LNode<DataType> *m;
		int i;
		m = NULL;
		m = L;
		i = 0;
		while (m)
		{	
			i++;
			m = m->next;

		}
		return i;
	}

	template<class DataType>
	int LinkList<DataType>::insert_linklist(int i, DataType x) {
		LNode<DataType> *p, *s;
		p = Get_linklist(i-1);
		if (p == NULL)
			return 0;
		else
		{
			s = new LNode<DataType>;
			s->data = x;
			s->next = p->next;
			p->next = s;
			return 1;
		}


	}
	template<class DataType>
	int LinkList<DataType>::Del_LinkList(int i) {
		LNode<DataType> *p, *s;
		p = Get_linklist(i - 1);
		if (p == NULL)
			return -1;
		else
		{
			if (p->next == NULL)
				return 0;
			else
			{
				s = p->next;
				p->next = s->next;
				delete s;
				return 1;
			}
		}



	}



	int  main() {
		cout << "当输入-1的输出结束" << endl;
		LinkList<int> l;
		l.Creat_LinkList();//尾插法
		cout<<"单链表有："<<l.Length_linklist()<<"个元素"<<endl;
		cout <<"单链表第三个元素地址："<< l.Get_linklist(1)<<endl;
		cout << "在链表第二个位置插入66" << endl;
		l.insert_linklist(2, 66);
		cout << "插入后遍历结果" << endl;
		l.print();
		cout << "输入想删除第几个元素" << endl;
		int s;
		cin >> s;
		l.Del_LinkList(s);
		cout << "删除后元素遍历" << endl;
		l.print();
		l.revrs();
		cout << endl;
		cout << "遍历输出逆置的结果" << endl;
		l.print();
		return 0;
	}
