
#include"Node.hpp"

void Node::insertNewFrontNode(){ 
	Node* newNode  = new Node();
	newNode->mData = counter;
	counter++;
	
	newNode->pNext = this->pNext;
	this->pNext    = newNode;	
}

void Node::insertNewBackNode(){
	Node* newNode  = new Node();
	newNode->mData = counter;
	counter++;
	
	Node* lastNode = this;
	while(lastNode->pNext != NULL){
		lastNode   = lastNode->pNext;
	}
	lastNode->pNext= newNode;
	
}
void Node::insertNodeAt(int position){
	Node* newNode  = new Node();
	newNode->mData = 0-counter;
	counter++;
	
	Node* nodePosition = this;
	int   idx = 1;
	while( (idx < position) && (nodePosition->pNext != NULL) ){
		nodePosition = nodePosition->pNext;
		idx++;
	}
	newNode->pNext      = nodePosition->pNext;
	nodePosition->pNext = newNode;
}

void Node::deletFrontNode(){
	Node* delNode = this->pNext;
	this->pNext = delNode->pNext;
	//delete delNode;
}
void Node::deletBackNode(){
	Node* lastNode = this;
	Node* auxNode  = this;
	
	while(lastNode->pNext!= NULL){
		auxNode	   = lastNode;
		lastNode   = lastNode->pNext;
	}
	auxNode->pNext = NULL;
	//delete lastNode;
}
void Node::deletNodeAt(int position){
		
	Node* nodePosition = this;
	Node* nodeAux      = this;
	int   idx = 1;
	
	while( (idx < position) && (nodePosition->pNext != NULL) ){
		nodeAux      = nodePosition;
		nodePosition = nodePosition->pNext;
		idx++;
	}
	nodeAux->pNext   = nodePosition->pNext;
	//delete nodePosition;
}

void Node::showList(){
	Node* head = this;
	while(head != NULL){
		std::cout << head->mData << " ";
		head = head->pNext;
	}
	std::cout << std::endl;
}