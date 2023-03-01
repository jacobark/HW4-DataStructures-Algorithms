//ECGR 3180 - Homework 4A
//Jacob Barker
//jbarke33@uncc.edu
#ifndef list_h
#define list_h
#include <iostream>

class Node {	//Node Class defined from class notes
	public:
		std::string     id ;
		Node            *next ;
		Node ( std::string id , Node *next=nullptr ) {
			this->id = id ;			
			this->next = next ;
		}
		virtual std::string to_string() { //virtual to string function
			return "id:" + id ;
		}
} ;


class List {
	public:
		Node    *head ;
		List() { head = nullptr ; }
		Node    *first() { return head ; }
		friend std::istream& operator>> ( std::istream& sin, List &lst );	//>> overload function
		friend std::ostream& operator<< (std::ostream& os, List &lst);		//<< overload function
		void prepend(Node* node);	//prepend function 
		void append(Node* node);	//append function
} ;
#endif
