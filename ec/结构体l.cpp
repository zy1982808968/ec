#include<iostream>
#include<string>
using namespace std;

struct student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;//在结构后面加一个名随便创建一个结构体变量

int main() 
{
	//在结构体定义时Struct时可以省略的
	 struct student s1;//第一种定义方法
	 student s4;
	s1.name = "张三" ;
	s1.age = 18;
	s1.score = 100;
	cout << "姓名： " << s1.name << " 年龄 ：  " << s1.age << "成绩：  " << s1.score << endl;
	struct  student s2 = { "李四",15,80};//第二种定义方法
	
	cout << "姓名： " << s2.name << " 年龄 ：  " << s2.age << "成绩：  " << s2.score << endl;
	s3.name = "王五";
	s3.age = 21;
	s3.score = 150;
	cout << "姓名： " << s3.name << " 年龄 ：  " << s3.age << "成绩：  " << s3.score << endl;

	return 0;
}