//
//  main.cpp
//  数字旋转方阵
//
//  Created by 我希望 on 2017/2/22.
//  Copyright © 2017年 xiaocj. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

class Matrix{
	int _size;
	int _start;
	int *_data;
public:
	Matrix(int size, int start = 0): _size(size), _start(start){
		_data = new int[size * size];
	}
	~Matrix(){
		delete[] _data;
	}
	void fill();
	void putout();
	virtual int findposition() = 0;
};

void Matrix::fill(){
	for(int i = 0; i < _size * _size; i++){
		_data[i] = _start + findposition();
	}
}

void Matrix::putout(){
	for(int row = 0; row < _size; row++){
		for(int col = 0; col < _size; col++){
			printf("%d ",_data[row * _size + col]);
		}
		printf("\n");
	}
}

class clockwise:public Matrix{
	int findposition();
};

int main ()
{
	return 0;
}
