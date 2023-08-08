#pragma once
#include "Node.h"
#include <iostream>

using namespace std;

template <typename T>
class DoubleList {

public:

	Node <T>* head = nullptr;
	Node <T>* tail = nullptr;
    
	DoubleList() {

	}

	void Pushfront(T value) {
		
		Node <T>* newnode = new Node <T>(value);

		if (this->head == nullptr) {
			head = newnode;
			tail = newnode;			
		}
		else {

			newnode->next = head;
			head->previous = newnode;
			head = newnode;
		}

	}

	void print() {
		
		Node <T>* iterador = head;
		cout << "null ";

		while (iterador != nullptr) {
			cout << iterador->value << " < = > ";

			iterador = iterador->next;
		}

		cout << " null " << endl;

	}

	void deletebyNode(Node<T>* nodetoDelete) {

		

		if (nodetoDelete != nullptr) {

			if (nodetoDelete->previous == nullptr && nodetoDelete->next == nullptr) {

				delete nodetoDelete;
				this->head = nullptr;
				this->tail = nullptr;


			}
			else if (nodetoDelete == this->head) {

				nodetoDelete->next->previous = nullptr;
				this->head = nodetoDelete->next;

				delete nodetoDelete;

			}
			else if (nodetoDelete == this->tail) {
				nodetoDelete->previous->next = nullptr;
				this->tail = nodetoDelete->previous;

				delete nodetoDelete;


			}
			else {

				nodetoDelete->previous->next = nodetoDelete->next;
				nodetoDelete->next->previous = nodetoDelete->previous;

				delete nodetoDelete;
			}



			
		}

	}

};
