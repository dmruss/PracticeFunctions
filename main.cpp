#include <iostream>
#include <list>
#include <iterator>
#include "linkedlist.h"
using namespace std;


int findLargest(const list<int>& aList) {
	int temp = 0;
	for (list<int>::const_iterator it = aList.end(); it != aList.begin(); it--) {
		if (*it > temp){
			temp = *it;
		}
	}
	return temp;
}

bool findElement(const list<int>& aList, int element) {
	bool found = false;
	for (auto it = aList.begin(); it != aList.end(); it++) {
		if (*it == element) {
			found = true;
		}
	}
	return found;
}

void reverseList(list<int> aList) {
	int temp;


}

int main() {
	LinkedList lL;
	lL.push(10);
	lL.push(20);
	lL.print();


return 0;
}
