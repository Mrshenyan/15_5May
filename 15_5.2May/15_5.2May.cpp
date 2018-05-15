// 15_5.2May.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;

void file();
int main()
{

	char data[100];
	ofstream outfile;;
	outfile.open("test2.txt");
	cout << "输入一些东西哦" << endl;
	cin.getline(data, 100);//获取到用户的输入
	outfile << data << endl;

	cout << "在输入一点东西" << endl;
	cin >> data;
	outfile << data << endl;//数据写入到文件
	outfile.close();

	ifstream infile;
	infile.open("test2.txt");
	cout << "看看你输入的是什么" << endl;
	infile >> data;//有几行文字就需要读出几行，每一行都需要独立的输出出来。
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	infile.close();

	system("pause");
	return 0;
}

void file() {
	char data[100];

	// 以写模式打开文件
	ofstream outfile;
	outfile.open("afile.dat");

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);

	// 向文件写入用户输入的数据
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();

	// 再次向文件写入用户输入的数据
	outfile << data << endl;

	// 关闭打开的文件
	outfile.close();

	// 以读模式打开文件
	ifstream infile;
	infile.open("afile.dat");

	cout << "Reading from the file" << endl;
	infile >> data;

	// 在屏幕上写入数据
	cout << data << endl;

	// 再次从文件读取数据，并显示它
	infile >> data;
	cout << data << endl;

	// 关闭打开的文件
	infile.close();
}