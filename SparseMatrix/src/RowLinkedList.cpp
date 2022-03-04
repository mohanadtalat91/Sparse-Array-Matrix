#include <iostream>
#include "RowLinkedList.h"
#include "RowNode.h"

using namespace std ;

RowLinkedList::RowLinkedList(int row_,int col_) {
	row = row_ ;
	cols = col_ ;
	Rowhead = new RowNode(-1, cols) ;
}

RowNode* RowLinkedList::get_row(int row_, bool wantCreate){

	RowNode* prev = Rowhead ;

	while(prev->next && prev->next->row < row_){
		prev = prev->next ;
	}

	bool exist = prev->next && prev->next->row == row_ ;

	if(exist)
		return prev->next ;
	if(!wantCreate)
		return 0 ;

	RowNode* item = new RowNode(row_,cols) ;
	item->next = prev->next ;
	prev->next = item ;

	return item ;

}

void RowLinkedList::setRow(int data_, int row_, int col_){

	RowNode* rowItem = get_row(row_,true) ;

	rowItem->col->set_Col(col_, data_) ;
}

void RowLinkedList::PrintRowNonZero(){

	RowNode* currRow = Rowhead->next ;
	cout << "The Sparse Matrix" << endl ;
	cout << row << " x " << cols << endl ;

	while(currRow){
		currRow->col->ColprintNonZero() ;
		currRow = currRow->next ;
	}

}

void RowLinkedList::PrintRowAll(){
	RowNode* curr = Rowhead->next ;

	for(int i=0; i<row; i++){
		if(curr && i == curr->row){
			curr->col->ColprintAll() ;
			curr = curr->next ;
		}
		else{
			for(int j=0; j<cols; j++){
				cout << 0 << " " ;
			}
			cout << endl ;
		}
	}
}

//int RowLinkedList::get_row_col(int row_, int col_){
//	RowNode* item = get_row(row_, false) ;
//	if(!item)
//		return 0 ;
//
//	return item->col->get_Col(col_) ;
//}
