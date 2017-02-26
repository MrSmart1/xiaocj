//
//  interator.cpp
//  迭代器
//
//  Created by 我希望 on 2017/2/26.
//  Copyright © 2017年 xiaocj. All rights reserved.
//

#include <stdio.h>
#include "interator.h"


void analyse(Interator* begin, Interator* end){
	int passed = 0;
	int count = 0;
	for(Interator* p = begin; *p != *end; (*p)++){
		if(**p >= 60)
			passed++;
		count++;
	}
}
