
#include"Node.hpp"

int main(){
	Node* head = new Node();
	
	head->insertNewFrontNode();
	head->insertNewFrontNode();
	head->insertNewFrontNode();
	
	head->insertNewBackNode();
	head->insertNewBackNode();
	head->insertNewBackNode();
	
	head->insertNodeAt(3);
	head->insertNodeAt(3);
		
	head->showList();
	
	head->deletFrontNode();
	head->deletBackNode();
	head->deletNodeAt(3);
	
	head->showList();
	
	return 0;
}