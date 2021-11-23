	#include<iostream>
	using namespace std;
    #include<string>
	struct student {
		string name;
		int age;
		int score;
	};

	void print(  const struct student *s) //
	{
		//s->age = 100;//由于const 修饰了 结构体 s就不能修改数据了
		cout << s->name << "    年龄 ：" << s->age << "   成绩：" << s->score << endl;
	
	}

	int main() {
		struct student s = { "张三",20,100 };
		print(&s);

		return 0;
	}