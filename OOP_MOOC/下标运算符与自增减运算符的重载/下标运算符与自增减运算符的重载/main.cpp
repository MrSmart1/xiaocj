//
//  main.cpp
//  下标运算符与自增减运算符的重载
//
//  Created by 我希望 on 2017/2/6.
//  Copyright © 2017年 xiaocj. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

class number{
public:
	int arr[10];
	int x;
	int& operator[](const int m){
		int b = m % 10;
		if(b < 0) b += 10;
		return arr[b];
	}
	int operator++(){
		x++;
		return x;
	}
	int operator--(){
		x--;
		return x;
	}
	int operator++(int){
		x++;
		return x - 1;
	}
	int operator--(int){
		x--;
		return x + 1;
	}
};

class matrix{
public:
	int** mar;
	int m, n;
	matrix(int dm = 3, int dn = 3): m(dm), n(dn){
		mar = new int*[dm];
		for(int i = 0; i < dm; i++){
			mar[i] = new int[dn];
		}
	}
	~matrix(){
		for(int i = 0; i < m; i++){
			delete[] mar[i];
		}
		delete[] mar;
	}
	
	matrix operator* (const matrix& right){
		matrix temp(this -> m, right.n);
		for(int i = 0; i < this -> m; i++){
			for(int j = 0; j < right.n; j++){
				temp.mar[i][j] = 0;
				for(int k = 0; k < right.m; k++){
					temp.mar[i][j] += this -> mar[i][k] * right.mar[k][j];
				}
			}
		}
		return temp;
	}
	
	friend ostream& operator<< (ostream& out, matrix& src);
	friend istream& operator>> (istream& in, matrix& dst);
	
};

ostream& operator<< (ostream& out, matrix& src){
	for(int i = 0; i < src.m; i ++){
		for(int j = 0; j < src.n; j ++){
			//printf("%d ", src.mar[i][j]);
			out << src.mar[i][j] << " ";
		}
		out << endl;
		//printf("\n");
	}
	return out;
}

istream& operator>> (istream& in, matrix& dst){
	for(int i = 0; i < dst.m; i ++){
		for(int j = 0 ; j < dst.n; j ++){
			//scanf("%d", &dst.mar[i][j]);
			in >> dst.mar[i][j];
		}
	}
	return in;
}


int main ()
{
	/*number x;
	for(int i = -10; i < 0; i++){
		x[i] = i;
	}
	for(int i =0 ; i < 10; i++){
		printf("%d ", x.arr[i]);
	}
	printf("\n");
	x.x = 10;
	int b = x++;
	int c = ++x;
	int d = x--;
	int e = --x;
	printf("%d %d %d %d\n", b, c, d, e);
	printf("%d", x[55]);
	return 0;
	*/
	
	matrix a(2, 2), b(2, 2);
	cin >> a >> b;
	matrix c = a * b;
	cout << c;
	return 0;
}
