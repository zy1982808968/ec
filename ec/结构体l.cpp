#include<iostream>
#include<string>
using namespace std;

struct student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;//�ڽṹ�����һ������㴴��һ���ṹ�����

int main() 
{
	//�ڽṹ�嶨��ʱStructʱ����ʡ�Ե�
	 struct student s1;//��һ�ֶ��巽��
	 student s4;
	s1.name = "����" ;
	s1.age = 18;
	s1.score = 100;
	cout << "������ " << s1.name << " ���� ��  " << s1.age << "�ɼ���  " << s1.score << endl;
	struct  student s2 = { "����",15,80};//�ڶ��ֶ��巽��
	
	cout << "������ " << s2.name << " ���� ��  " << s2.age << "�ɼ���  " << s2.score << endl;
	s3.name = "����";
	s3.age = 21;
	s3.score = 150;
	cout << "������ " << s3.name << " ���� ��  " << s3.age << "�ɼ���  " << s3.score << endl;

	return 0;
}