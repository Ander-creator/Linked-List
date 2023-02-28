
#ifndef NODE_
#define NODE_

#include<iostream>

class Node{
public:
	Node():mData(1000),counter(0), pNext(NULL){ }
	virtual ~Node(){ delete this; }
	
	void insertNewFrontNode();
	void insertNewBackNode();
	void insertNodeAt(int position);
	
	void deletFrontNode();
	void deletBackNode();
	void deletNodeAt(int position);
	
	void showList();

private:	
	int  mData;
	int counter;
	Node *pNext;
};



#endif /*NODE_*/