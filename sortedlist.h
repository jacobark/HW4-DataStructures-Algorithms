//ECGR 3180 - Homework 4B
//Jacob Barker
//jbarke33@uncc.edu
#ifndef sortedlist_h
#define sortedlist_h
#include "list-b.h"
#include "locnode-b.h"
#include <iostream>
using namespace std;

class SortedList : public List {
	public:
		
		void insert(Node* x) {
			//inserts Nodes in sorted order within list
			//could not get working
			//
		}
		friend std::istream& operator>> ( std::istream& sin, SortedList &lst ) { //overloads >>
			Node            *tmp ;
		        std::string     id ;
		        double x, y;
		        sin >> id ;
			sin >> x;
			sin >> y;
			while( !sin.eof() ) {   //inserts new node, taken from standard input into list
				tmp = new LocNode(id, x, y, lst.head) ;
				tmp->next = lst.head; //<-remove these two lines if insertion wworking
				lst.head = tmp;      //<-
				//insert(tmp); //calls insertion funstion to insert input Node
				sin >> id ;
				sin >> x;
				sin >> y;
			}
			return sin;
		}
		friend std::ostream& operator<< (std::ostream& os, SortedList &lst) {  //overloads <<
			Node *temp = lst.head;
			cout<<"[";
			if(temp != NULL) {      //if head of list does not equal NULL output head is
				cout << temp->to_string();
				temp = temp->next;      //sets list head to next
			}
			while(temp != NULL) {   //Outputs List of LocNodes
				cout<< ", " << temp->to_string();
				temp = temp->next;
			}
			cout<<"]"<<endl;
			return os;
		}

};
#endif
