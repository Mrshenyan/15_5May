// model.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


template <typename T>
inline T const& Max(T const& a, T const& b)
{
	return a < b ? b : a;
}
int main()
{

	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl;

	double f1 = 13.5;
	double f2 = 20.7;


	string s1 = "Hello";
	string s2 = "World";
	//printf_s("Max(s1,s2)", Max(s1, s2));
	cout << "Max(f1, f2): " << Max(f1, f2) << endl;
	//cout << "Max(s1, s2): " << Max(s1, s2) << endl;
	/*cout << "" << Max(s1, s2) << endl;*/
	system("pause");
	return 0;
}
