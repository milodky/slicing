#include "base.h"
base::base()
{
	Num = 5;
	std::cout << "Base created: " << Num << std::endl;
}
void base::Output(void)
{
	std::cout << "I'm Output() in base." << std::endl;
}
