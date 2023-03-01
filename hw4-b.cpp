//ECGR 3180 - Homework 4B
//Jacob Barker
//jbarke33@uncc.edu
#include <iostream>
#include "list-b.h"
#include "locnode-b.h"
#include "sortedlist.h"

using namespace std;

int main() {
	SortedList lst;
	cin >> lst;	//input List of LocNodes
//	lst.insert(); //calls insertion sort function
	cout << lst; //outputs sorted list
	return 0;
}
