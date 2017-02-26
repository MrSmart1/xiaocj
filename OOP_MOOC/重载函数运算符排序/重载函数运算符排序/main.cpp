//
//  main.cpp
//  重载函数运算符排序
//
//  Created by 我希望 on 2017/2/9.
//  Copyright © 2017年 xiaocj. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

class seq
{
public:
	void operator() (int array[], int N);
};
bool cmp(int a, int b){
	return (a > b);
}
void seq::operator() (int array[], int N){
	sort(array, array + N, cmp);
}
int main ()
{
	int a[5] = {1, 2, 2, 3, 3};
	seq x;
	x(a, 5);
	for(int i = 0; i < 5; i ++){
		printf("%d ", a[i]);
	}
	return 0;
}
