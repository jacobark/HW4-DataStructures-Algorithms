//ECGR 3180 - Homework 4A
//Jacob Barker
//jbarke33@uncc.edu
#include "list-a.h"
#include <iostream>
using namespace std;

istream& operator>> ( istream& sin, List &lst ) { //overloads >> operator to take list from standard input
	Node            *tmp ;
	std::string     id ;

	sin >> id ;
	while( !sin.eof() ) {	//inserts new node, taken from standard input into list
		tmp = new Node(id,lst.head) ;
		lst.head = tmp ;
		sin >> id ;
	}					    
	return sin;
}

ostream& operator<< (ostream& os, List &lst) {	//overloads << operator to output list to the standard out
	cout<<"[";
	if(lst.head != NULL) {	//if head of list does not equal NULL output head id
		cout << lst.head->id;
		lst.head = lst.head->next;	//sets list head to next
	}
	while(lst.head != NULL) {	//while  head does not equal NULL loop through list outputing List ID's
		cout<< ", " << lst.head->id;
		lst.head = lst.head->next;
	}
	cout<<"]"<<endl;
	return os;	
}

void List::prepend(Node *newNode) {	//prepends given Node into beginning of list	
	newNode->next = head;	
	head = newNode;	//sets head as newNode
}

void List::append(Node *newNode) {	//appends given Node onto end of list
	Node *temp = head;
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) {	//loops untill end of list
		temp=temp->next;
	}
	temp->next = newNode;	//inserts new Node onto end
}
