#include <stdio.h>


//创建了一个结构体类型struct Stu
struct Stu
{
	//成员变量
	//成员
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	//使用struct Stu这个结构体创建了s1这个学生对象并初始化
	struct Stu s1 = { "Ckuny", 19, "666666" };
	struct Stu* ps = &s1;
	printf("%s\n", ps->name);//更直观指针
	//结构体指针->指向对象（成员名）

	////printf("%s\n", (*ps).name);//利用指针打印

	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);
	//printf("%s\n", s1.name);
	//结构体变量.成员名
	return 0;
}