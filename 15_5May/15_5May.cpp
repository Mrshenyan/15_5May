// 15_5May.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;
#define N 3;
#define Y(n) ((N+1)*n);

void testshuzu();
void testswitch();
void testdouble();
unsigned long FUNC_B(unsigned long ulCount);
class chongzai {
public:
	int operator+(int a) {
		cout << a << endl;
		return a;
	}
};

class xx :public chongzai {
public:
};
int main()
{
	//char data[100];
	//ofstream outfile;
	//outfile.open("test.txt");
	//
	//cout << "writing to the file" << endl;
	//cout << "enter some word" << endl;
	//cin.getline(data, 100);

	//outfile << data << endl;
	//cout << "input some string agin" << endl;
	//cin >> data;
	////cin.ignore();
	//cin.getline(data, 100);
	//outfile << data << endl;//像文件写入读取到的数据

	//outfile.close();//关闭文件

	//ifstream infile;
	//infile.open("test.txt");//读方式打开文件
	//cout << "你写的是个啥" << endl;
	//infile >> data;
	//cout << data << endl;

	//infile >> data;
	//cout << data << endl;

	//infile.close();
	//testshuzu();
	/*int z = 0;
	
	z = N ;
	int x = 0;*/
	//x = Y(6);
	//testswitch();

	//int aa = 0;
	//xx xxxxxx;
	////xxxxxx.operator+
	//xxxxxx.operator+(aa);
	//unsigned long FUNC_B(unsigned long ulCount);
	/*unsigned long ss = 0;
	ss = FUNC_B(-1);*/
	testdouble();
	system("pause");
    return 0;
}


void testshuzu() {
	char acX[] = { "abcdefg" };
	char acY[] = {'a','b','c','d','e','f','g'};
	int xx = 0;
	
	
}

void testswitch() {
	int i = 10;
	switch (i)
	{
	case 9:i+=1;
	case 10:i += 1;
	case 11:i += 1;
	case 12:i += 1;
	default:
		break;
	}
	cout << i << endl;
}


unsigned long FUNC_B(unsigned long ulCount)
{
	unsigned long ulSum = 0;

	while (0 <= ulCount)
	{
		ulSum += ulCount;
		ulCount--;
		cout << ulSum << endl;
	}

	return ulSum;
}

void testdouble() {
	float vals[] = { 10,12.6,33.1,24.1,50.0 };
	vals[1] = 5;
	vals[3] = 6;
	cout << vals[0] << endl;
	cout << vals[3] << endl;
}



