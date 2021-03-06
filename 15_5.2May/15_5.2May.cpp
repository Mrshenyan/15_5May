// 15_5.2May.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;

void file();
void file_copy();
int _testMain(int argc, _TCHAR* argv[]);
int main()
{
	file();
	char data[100];
	ofstream outfile;;
	outfile.open("test2x.txt");
	cout << "输入一些东西哦" << endl;
	cin.getline(data, 100);//获取到用户的输入
	outfile << data << endl;

	cout << "在输入一点东西" << endl;
	cin >> data;
	outfile << data << endl;//数据写入到文件
	outfile.close();

	ifstream infile;
	infile.open("test2x.txt");
	cout << "看看你输入的是什么" << endl;
	infile >> data;//有几行文字就需要读出几行，每一行都需要独立的输出出来。
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	infile.close();
	file_copy();
	system("pause");
	return 0;
}

void file() {
	char data[100];

	// 以写模式打开文件
	ofstream outfile;
	outfile.open("test1.txt");

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
	infile.open("test1.txt");

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

void file_copy() {
	char data[100];
	ifstream infile;
	ofstream outfile;
	infile.open("test1.txt");
	outfile.open("Ntest/testxxx.txt");//当然这样写也是可以的，不过应该是待写入的文件的绝对路径
	while (!infile.eof()) {
		infile >> data;
		cout << data << endl;
		outfile << data << endl;
	}
	infile.close();
	outfile.close();
}
int _testMain(int argc, _TCHAR* argv[]) {
	file_copy();
	return 0;
}