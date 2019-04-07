// 3_6w.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
int count(char*str) {//指针类型，数据类型*标识符，存放char类型的数据
	int i;
	string lsc;
	cout << "请输入要判断的字符串" << endl;
	cin >> lsc;
	int uppper = 0;
	int lower = 0;
	for (i = 0; i <= lsc.size(); i++)
	{
		if ((int)lsc[i] <= 65 && (int)lsc[i] >= 90)
			uppper++;//小写字母
		else if ((int)lsc[i] >= 97 && (int)lsc[i] <= 122)
			lower++;//大学字母
	}
	int result = uppper + lower;
	return result;
}
int main() {
	char str[100];
	char cha[26];
	cout << "输入一条英文句子：" << endl;
	cout << "str" << endl;
	cout << "这个句子里有" << count(str) << "个字母" << endl;

}


