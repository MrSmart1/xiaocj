//
//  interator.h
//  迭代器
//
//  Created by 我希望 on 2017/2/26.
//  Copyright © 2017年 xiaocj. All rights reserved.
//

#ifndef interator_h
#define interator_h
#include <cstdio>
#include <cstring>
using namespace std;

class Interator{
public:
	virtual ~Interator(){}
	virtual bool operator!= (const Interator &other) = 0;
	virtual Interator& operator++() = 0;
	virtual Interator& operator++(int) = 0;
	virtual double operator*() = 0;
};

class Arrayinterator: public Interator{
	
};

class collection{
public:
	virtual Interator begin() = 0;
	virtual Interator end() = 0;
};
class Arraycollection: public collection{
	double *score;
	int index;
};
void analyse(Interator* begin, Interator* end);
#endif /* interator_h */
/* analyze(Interator begin, Interator end){
	int passed = 0;
	for(Interator p = begin; Interator p != end; p++){
		if(*p > 60)
			passed++;
	}
 
 }
*/
