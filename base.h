#ifndef BASE_H_
#define BASE_H_
#include <iostream>
class base {
public:
	base(void);

	virtual void Output(void);
	virtual ~base(void){}
	int Num;
};

#endif
