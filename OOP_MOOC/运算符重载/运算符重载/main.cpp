//
//  main.cpp
//  运算符重载
//
//  Created by 我希望 on 2017/1/19.
//  Copyright © 2017年 xiaocj. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

class node
{
	int id;
public:
	int a;
	int b;
	node& operator= (const node& right)
	{
		if(this != &right)
		{
			this -> id = right.id;
			this -> a = right.a;
			this -> b = right.b;
		}
		return *this;
	}
	node(int ii): id(ii){}
	bool operator() (int);
	friend istream& operator>> (istream& in, node& dst);
	friend ostream& operator<< (ostream& out, node& src);
};

											/*函数运算符的重载*/

bool node::operator() (int value)
{
	if(value == id)
		return true;
	return false;
}
											/*流运算符的重载*/

istream& operator>>(istream& in, node& dst)
{
	in >> dst.id >> dst.a >> dst.b;
	return in;
}
ostream& operator<< (ostream& out, node& src)
{
	out << src.id << src.a << src.b << endl;
	return out;
}

int main ()
{
	
	return 0;
}
