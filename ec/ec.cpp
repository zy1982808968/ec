#include <iostream>
using namespace std;
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




void print(SeqString &s) //遍历字符串
{
	int i;
	for (i = 0; i < s.curlen; i++)
	{
		cout << s.data[i] << " ";
	}
}


int main()
{
	SeqString s;
	Init_String(s);
	string x = { 'a','b','c','d','e','f','g','h','i','j', };
	intString(s, x);
	print(s);
	cout << endl;
	cout << "字符串的长度为：" << length(s);
	cout << endl;


}
