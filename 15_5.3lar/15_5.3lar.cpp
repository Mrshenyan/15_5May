// 15_5.3lar.cpp: 定义控制台应用程序的入口点。
//
#define _CRT_SECURE_NO_WARNINGS 
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
using std::setw;
void pass(string pdword);
void Login(string name, string upassword);
int main()
{//初始化，登陆/注册界面
	char uName[] = {""};
	char uPass[] = {""};
	string uname;
	string upass;
	ofstream outfile;
	ifstream infile;

	

	outfile.open("infoUser.txt");
	infile.open("infoUser.txt");
	cout << "***************************************" << endl;
	cout << setw(30) << "欢迎进入天朝图书管理系统" << setw(8) << endl;
	cout << "请输入用户名：" ;
	cin >> uName;
	//cout << "请输入密码：";
	//pass(uPass);
	//printf_s("请输入密码：");
	//scanf_s("%s", &uPass);
	//char pd;
	//for (int i = 0; i < strlen(uPass); i++) {
	//	pd = _getch();
	//	putchar('*');
	//}
	cout << "请输入密码：";
	cin >> uPass;
	for (int i = 0; i < strlen(uName); i++) {
		uname += uName[i];
	}
	for (int i = 0; i < strlen(uPass); i++) {
		upass += uPass[i];
	}
	Login(uname, upass);
	system("pause");
	return 0;
}

void Login(string name, string upassword) {
	//获取到用户输入的登陆信息，匹配后台。
	ofstream outfile;
	ifstream infile;
	FILE *fileadd;
	string *Name = NULL;
	char info_name = NULL;
	Name = &name;
	outfile.open("infoUser.txt");
	infile.open("infoUser.txt");


	outfile << name;
	outfile << upassword << endl;
	outfile.close();

	fileadd = fopen("infoUser.txt", "r+");

	string info;
	//for (int i=0;i<)
	int b = name.length();
	int v[100] = {};
	int i = 0 ;
	
	while (fscanf_s(fileadd,"%d",&v[i])!=EOF)
	{
		i++;
	}
	fclose(fileadd);
	for (int j = 0; j < b; j++) {
		info = v[j];
		cout << v[j] << endl;
		cout << info << endl;
	}
	info.substr(0, b);

	/*while (!feof(fileadd))
	{
		if (fgetc(fileadd) != '\0') {
			while ((info_name = fgetc(fileadd)) != '\0') {
				putchar(info_name);
			}
		}
	}*/


}


//void pass(string pdword) {
//	scanf_s("%s", &pdword);
//	char pd;
//	for (int i = 0; i < pdword.length(); i++) {
//		pd = _getch();
//		putchar('*');
//	}
//}

