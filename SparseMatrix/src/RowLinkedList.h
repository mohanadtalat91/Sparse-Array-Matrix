#ifndef ROWLINKEDLIST_H_
#define ROWLINKEDLIST_H_
#include "ColLinkedList.h"
#include "RowNode.h"

class RowLinkedList {
private:
	RowNode* Rowhead ;
	int row ;
	int cols ;
	RowNode* get_row(int row_, bool wantCreate) ;
public:
	RowLinkedList(int row_, int col_);
	void setRow(int data_, int row_, int col_) ;
	void PrintRowNonZero() ;
	void PrintRowAll() ;
	//int get_row_col(int row_, int col_) ;
};

#endif /* ROWLINKEDLIST_H_ */
