	#include <iostream>
	using namespace std;
	#include<string>
	#define max 100

	typedef struct
	{
		char data[max];
		int curlen;
	}SeqString;


	void Init_String(SeqString &s)//字符串的初始化
	{
		s.curlen = 0;
	}


	int intString(SeqString &s, string x)//创建字符串
	{
		int i;
		for (i = 0; x[i] != '\0'; i++) {
			s.data[i] = x[i];
			s.curlen = i;
		}
		return 1;
	}

	int length(SeqString &s) //求字符串的长度
	{
		int length;
		length = s.curlen + 1;
		return length;

	}
	int StrIndex_BF(SeqString &s, SeqString &t) //bf
	{
		int i,j;
		i = 0;
		j = 0;
		while (i <= s.curlen&&j <= t.curlen)

		{
			if (s.data[i] == t.data[j])
			{
				i++;
				j++;
			}
			else
			{
				i = i- j+1 ;
				j = 0;
			}

		}
		if (j > t.curlen)
		{
			return i-t.curlen;//匹配成功 返回首字符的位置
		}
		else {
			return 0;
		}
	
	}

	void GetNext(SeqString &t, int next[]) 
	{
		int i, j;
		i = 1;
		j = 0;
		next[1] = 0;
		while (i<=t.curlen)
	{
			if ( j==0 || t.data[i-1] == t.data[j-1])
			{
				i++;
				j++;
				next[i] = j;

			}
			else {
				j = next[j];
			
			}
		}
	
	
	}


	int StrIndex_kmp(SeqString &s, SeqString &t,int pos,int next[])
	{
		int i, j;
		i = pos;
		j = 0;
		while (i<=s.curlen && j<=t.curlen)
		
			if (j == 0 || s.data[i] == t.data[j])
			{
				i++;
				j++;
			}
			else
				j = next[j];
		
		if (j > t.curlen)

			return i - t.curlen;
		else
			return 0;

		
	}




	void print(SeqString &s) //遍历字符串
	{
		int i;
		for (i = 0; i < s.curlen+1; i++)
		{
			cout << s.data[i] << " ";
		}
	}


	int main()
	{
		SeqString s;
		Init_String(s);
		string x = "aabcbabcaabcaababc";
		intString(s, x);
		SeqString t;
		Init_String(t);
		string v = "abcaababc";
		intString(t, v);
		int next[100];
		GetNext(t, next);
		cout << StrIndex_kmp(s, t, 5, next);
		cout << endl;
		int i = 1;
		while (i<length(t)+1)
		{
			cout << next[i] << "  ";
			i++;
		}
		cout << endl;
		cout << StrIndex_kmp(s, t, 5, next);
		return 0;
	}
