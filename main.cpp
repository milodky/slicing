#include "derived.h"
#include "base.h"
#include <iostream>
using namespace std;

int main()
{
//	derived *pderived = new derived;
//	pderived->Experiment();
//	cout << "*********************" << endl;
//	base *pbase = dynamic_cast<derived*>(pderived);
//	pbase->Output();
//	// pbase->Experiment() won't work
//	delete pbase;

	base *pbase = new derived;
	pbase->Output();
	cout << "********************" << endl;

	derived *pderived = dynamic_cast<derived*>(pbase);
	pderived->Experiment();

	delete pbase;

	return 0;
}

