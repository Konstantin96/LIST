#include "List.h" 
#include "List.cpp" 

int main() {
	List<int> L;
	L.push_back(5);
	L.push_back(13);
	L.push_back(12);
	L.push_back(154);
	L.pop_back();
	L.pop_front();
	cout << L[0] << endl;
	L.print();
	L.~List();
	system("pause");
	return 0;
}