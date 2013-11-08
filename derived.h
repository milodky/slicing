#ifndef DERIVED_H_
#define DERIVED_H_
#include <iostream>
#include "base.h"
class derived : public base
{
public:
	derived(void);
	void Output(void);
	void Experiment(void);
	int W33;
};


#endif
