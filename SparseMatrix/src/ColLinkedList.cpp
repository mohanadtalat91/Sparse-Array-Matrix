#include "ColLinkedList.h"
#include <iostream>

using namespace std ;

ColLinkedList::ColLinkedList(int ColLength_) {
	ColLength = ColLength_ ;
	Colhead = new ColNode(0,-1) ;
}

ColNode* ColLinkedList::get_node(int Col_, bool wantCreate){

	ColNode* prev = Colhead ;


	while(prev->next && prev->next->col < Col_){
          prev = prev->next ;
	}
	bool exist = prev->next && prev->next->data == Col_ ;

	if(exist)
          return prev->next ;
     if(!wantCreate)
          return 0 ;

     ColNode* item = new ColNode(Col_,0) ;
     item->next = prev->next ;
     prev->next = item ;

     return item ;
}

void ColLinkedList::set_Col(int Col_, int data_){

     get_node(Col_, true)->data = data_ ;
}



void ColLinkedList::ColprintNonZero(){

     ColNode* curr = Colhead->next ;
     while(curr){
          cout << curr->data << " " ;
          curr = curr->next ;
     }
     cout << endl ;
}

int ColLinkedList::get_Col(int Col_){
     ColNode* res = get_node(Col_,false) ;

     if(!res)
          return 0 ;
     return res->data ;
}


void ColLinkedList::ColprintAll(){

	ColNode* curr = Colhead->next ;

     for(int i=0; i<ColLength; i++){ // zero index
          if(curr && i == curr->col){
               cout << curr->data << " " ;
               curr = curr->next ;
          }
          else{
               cout << 0 << " " ;
          }
     }
     cout << endl ;

}


void ColLinkedList::Coladd(ColLinkedList &another){

     try{
          if(this->ColLength != another.ColLength){
               throw invalid_argument("The Length of 2-arrays not EQUAL!! ") ;
          }
     }catch(exception &e){
          cout << endl << e.what() ;
          throw e ;
     }

     ColNode* curr_another = another.Colhead->next ;
     ColNode* curr = Colhead->next ;

     for(int i=0; i<ColLength; i++){
          if(curr && curr->col == i){
               if(curr_another && curr_another->col == i){
                    cout << curr_another->data + curr->data << " " ;
                    curr_another = curr_another->next ;
               }
               else{
                    cout << curr->data << " " ;
               }
               curr = curr->next ;
          }
          else if(curr_another && curr_another->col == i){
               cout << curr_another->data << " " ;
               curr_another = curr_another->next ;
          }
          else{
               cout << 0 << " " ;
          }
     }

     cout << endl ;
}

