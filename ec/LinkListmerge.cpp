	#include<iostream>
	using namespace std;
	struct ListNode
	{
		int val;
		ListNode *next;

		ListNode() :next(NULL) {};//把val初始化为0next域设为空
	};

	ListNode * creat_Linklist(ListNode *head )
	{
	
		ListNode *r;
		r = head;
		int x;
		cin >> x;
		while (x != -1)
		{
			ListNode *s = new ListNode();
			s->val = x;
			r->next = s;
			r = s;
			cin >> x;
		}
		if (r != NULL)
			r->next = NULL;
		return head;

	};
	ListNode *merge(ListNode *l1, ListNode*l2) {
		ListNode *swapl = new ListNode();
	


		return swapl;
	}



	void print(ListNode *head) 
	{
		ListNode *p;
		p = head;
		p = p->next;
		while (p)
		{
			cout << p->val << "  ";
			p = p->next;
		}
	}


	int main()
	{

		stack<int> s;

		//ListNode *kj=new ListNode();
		//ListNode *r;
		//r= kj;
		//int x;
		//cin >> x;
		//while (x!=-1)
		//{
		//	ListNode *s = new ListNode();
		//	s->val = x;
		//	r->next = s;
		//	 r = s;
		//	 cin >> x;
		//}
		ListNode *head =new ListNode();
		ListNode * l1 = new ListNode();
		creat_Linklist( head);
		creat_Linklist(l1);
		print(head);
		cout << endl;
		print(l1);


		return 0;
	}