#include <iostream>
#include <list>
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
	for (list<int>::const_iterator it = aList.begin(); it != aList.end(); it++) {
		if (*it == element) {
			found = true;
		}
	}
	return found;
}

int main() {
	list<int> aList;
	for (int i = 0; i < 100; i++) {
		aList.push_back(i);
	}

	cout << findElement(aList, 19) << endl;

return 0;
}
