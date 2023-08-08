#pragma once

template <typename T>

class Node {
public:

	Node <T>* next = nullptr;
	Node <T>* previous = nullptr;
	T value;

	Node(T value) {
		this->value = value;
	}

};