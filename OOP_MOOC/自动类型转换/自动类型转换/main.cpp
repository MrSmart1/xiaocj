//
//  main.cpp
//  自动类型转换
//
//  Created by 我希望 on 2017/2/18.
//  Copyright © 2017年 xiaocj. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

class B{
public:
	int data1;
	double data2;
	B(int x1, double x2): data1(x1), data2(x2){}
};
class D{
public:
	int data1;
	int data2;
	D(int x1, int x2): data1(x1), data2(x2){}
	operator B() const{
		return B(this -> data1, this -> data2);
	}
};
class C{
public:
	double data1, data2;
	C(const B& src){
		data1 = (double)src.data1;
		data2 = src.data2;
	}
};
int main ()
{
	D d(1, 2);
	B b = d;
	C c = b;
	printf("%.0lf %.0lf\n", c.data1, c.data2);
	return 0;
}
