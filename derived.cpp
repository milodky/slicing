#include "derived.h"
derived::derived(void)
{
	W33 = 520;
	std::cout << "derived created: " << W33 << std::endl; 
}

void derived::Output(void)
{
	std::cout << "I'm Output() in derived." << std::endl;
}

void derived::Experiment(void)
{
	std::cout << "I'm gonna marry you W33 somemday." << std::endl;
}
