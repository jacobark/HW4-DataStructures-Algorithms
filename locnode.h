//ECGR 3180 - Homework 4A
//Jacob Barker
//jbarke33@uncc.edu
#ifndef LOCNODE_H
#define LOCNODE_H

#include "list-a.h"
#include <sstream>
#include <cmath>

class LocNode : public Node {
	public:
		double x, y; // x and y location data members

		//construcctor for locNode
		LocNode (std::string id, double x, double y, Node* next = nullptr) : Node(id) {
			this->x = x;	
			this->y = y;
		}

		virtual std::string to_string(){ //Virtual to string function for LocNode
			std::stringstream ss;
			ss << ", x:" << x << ", y:" << y;
			return "<" + Node::to_string() + ss.str() + ">";
		}
		virtual bool lt(LocNode *rhs) {

			return distance() < rhs->distance(); //compares lhs and rhs distance
		}
		double distance() {
			return sqrt(x*x+y*y); //calculates distance from origin of LocNoe
		}
};

#endif
