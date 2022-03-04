#include <iostream>
#include "RowNode.h"

using namespace std ;

RowNode::RowNode(int row_, int col_) {
	next = 0 ;
	col = new ColLinkedList(col_) ;
	row = row_ ;
}

