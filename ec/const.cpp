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
		//s->age = 100;//����const ������ �ṹ�� s�Ͳ����޸�������
		cout << s->name << "    ���� ��" << s->age << "   �ɼ���" << s->score << endl;
	
	}

	int main() {
		struct student s = { "����",20,100 };
		print(&s);

		return 0;
	}