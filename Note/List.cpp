#include "List.h"

template <typename t>
void List<t>::push_back(t data) {
	if (count == 0) {
		firstPtr = new Node(data);
		lastPtr = firstPtr;
	}
	else {
		lastPtr->nextPtr = new Node(data);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}

template<typename t>
void List<t>::push_front(t data)
{
	if (count == 0) {
		firstPtr = new Node(data);
		lastPtr = firstPtr;
	}
	else {
		Node *element = new Node(data);
		element->nextPtr = firstPtr;
		firstPtr = element;
	}
	count++;
}

template<typename t>
void List<t>::pop_back()
{
	if (size() == 1)
	{
		delete firstPtr;
		firstPtr = nullptr;
		lastPtr = nullptr;
	}
	else {
		Node *curPtr = firstPtr;
		while (curPtr->nextPtr != lastPtr)
		{
			curPtr = curPtr->nextPtr;
		}
		delete lastPtr;
		lastPtr = curPtr;
		curPtr->nextPtr = nullptr;
	}
	count--;
}

template<typename t>
void List<t>::pop_front()
{
	Node *curPtr = firstPtr->nextPtr;
	delete firstPtr;
	firstPtr = curPtr;
	count--;
}

template<typename t>
void List<t>::print()
{
	Node *curPtr = firstPtr;
	cout << curPtr->date << endl;
	while (curPtr != lastPtr) {
		curPtr = curPtr->nextPtr;
		cout << curPtr->date << endl;
	}
}

template<typename t>
List<t>::~List()
{
	Node *curPtr;
	while (firstPtr != nullptr) {
		curPtr = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = curPtr;
	}
	delete firstPtr;
}

