// 15_5.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace  std;

int main()
{
	string str1 =  "_name1age1_name2age0_name3age2_name4age0" ;
	string substr;
	string sub;
	vector<string> str;
	int count = 0;
	for (int i = 0; i < str1.size(); i++) {
		char x = str1[i];
		substr = x;
		if (substr._Equal("_")) {
			count++;
		}
		else
		{
			str.push_back(substr);
		}
	}
	for (int s = 0; s < str.size(); s++) {
		cout << str[s];
		/*if (s == 8) {
			cout << str[s];
		}*/
		switch (s)
		{case 8:
			cout << "\n";
			break;
		case 17:
			cout << "\n";
			break;
		case 26:
			cout << "\n";
			break;
		default:
			break;
		}
	}
	system("pause");
    return 0;
}

