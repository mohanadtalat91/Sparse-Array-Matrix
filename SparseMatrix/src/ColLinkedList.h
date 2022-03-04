#ifndef COLLINKEDLIST_H_
#define COLLINKEDLIST_H_
#include "ColNode.h"

class ColLinkedList {
private:
	ColNode* Colhead ;
	int ColLength ;
	ColNode* get_node(int Col_, bool wantCreat) ;
public:
	ColLinkedList(int ColLength);
	void set_Col(int col_, int data_) ;
	void ColprintNonZero() ;
	int get_Col(int col) ;
	void ColprintAll() ;
	void Coladd(ColLinkedList &Colanother) ;

};

#endif /* COLLINKEDLIST_H_ */
