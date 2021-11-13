#include<iostream>
#define flag 20
using namespace std;

	template<class DataType>
	struct LNode{
		DataType data;
		LNode<DataType> *next;
	};
	template<class DataType>
	class LinkList{
	private:
		LNode<DataType> *L;
	public:
		LinkList();
		~LinkList();
		LNode *Creat_LinkList();
		int Length_LinkList();
		LNode *Get_LinkList(int i);
		LNode *Locate_LinkList(DataType);
	};
	template<class DataType>
	LNode<DataType>  *LinkList<DataType>::Creat_LinkList() {
		LNode<DataType> *L;
		LNode <DataType>*s, *r;
		int x;
		L = r = NULL;
		cin >> x;
		r = L;
		while (x!=flag)
		{
			s = new LNode;
			s->data = x;
			s - next = NULL;
			r->next = s;
			r = s;
			cin >> x;
		}
		if (r != NULL) {
			r->next = NULL;
		}
		return L;
	
	}



	int main() {
	
		return 0;
	}