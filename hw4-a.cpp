//ECGR 3180 - Homework 4A
//Jacob Barker
//jbarke33@uncc.edu
#include <iostream>
#include "list-a.h"
#include "locnode.h"

using namespace std;

int main() {
	//tests to_string function for Node and LocNode
	Node *t1 = new Node ("a");
	Node *t2 = new LocNode("b", 2.0, 3.0);

	cout << "Node to_string is " << t1->to_string() << endl;
	cout << "LocNode to_string is " << t2->to_string() << endl << endl;
	
	//Test lt() function of LocNode, for three test cases
	LocNode ln1("ln1", 2, 2) , ln2("ln2", 2, 0), ln3("ln3", 2, 2);
	cout << "#ln1 " << ln1.to_string() << ", ln2 " << ln2.to_string() << ", ln3 " <<
	       	ln3.to_string() << endl << endl;

	cout << "#ln2 < ln1" << endl;
	cout << "rhs<lhs: " << boolalpha << (ln2.lt(&ln1)) << endl << endl;
	cout << "#ln1=ln3" << endl;
	cout << "rhs=lhs: " << boolalpha << (ln1.lt(&ln3)) << endl << endl;
	cout << "#ln1 > ln2" << endl;
       	cout << "rhs>lhs: " << boolalpha << (ln1.lt(&ln2)) << endl;	
	return 0;
}
