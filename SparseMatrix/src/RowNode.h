#ifndef ROWNODE_H_
#define ROWNODE_H_
#include "ColLinkedList.h"
class RowNode {

public:
	ColLinkedList* col ;
	RowNode* next ;
	int row ;
	RowNode(int row_, int col_) ;
};

#endif /* ROWNODE_H_ */
