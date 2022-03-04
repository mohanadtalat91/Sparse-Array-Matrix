#ifndef COLNODE_H_
#define COLNODE_H_

class ColNode {
public:
	int col ;
	int data ;
	ColNode* next ;
	ColNode(int col_, int data_);
};

#endif /* COLNODE_H_ */
