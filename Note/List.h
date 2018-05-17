#pragma once
#include "Libery.h"

template <typename t>
class List {
private:
	class Node {
	public:
		t date;
		Node* nextPtr;
		Node(t date) {
			this->date = date;
			nextPtr = nullptr;
		}
	}*firstPtr,*lastPtr;
	size_t count;
public:
	List() {
		firstPtr = nullptr;
		lastPtr = nullptr;
		count = 0;
	}
	void push_back(t data);
	void push_front(t data);
	void pop_back();
	void pop_front();
	void print();
	size_t size() { return count; };
	~List();
};