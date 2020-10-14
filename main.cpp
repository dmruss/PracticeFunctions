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

void printPrimes(int count) {
	for (int i = 0; i < count; i++ ) {
		bool prime = (i%2 != 0) && (i%3 != 0) && (i%5 != 0) && (i%7 != 0) || (i == 2) || (i == 3) || (i == 5 )|| (i==7);
		if (prime) {
			cout << i << endl;
		}
	}
}

void fizzBuzz(int count) {
	for (int i = 0; i < count; i++) {
		if (i%15 == 0) {
			cout << "fizzbuzz"<<endl;
		}
		else if (i%3 == 0) {
			cout << "fizz"<<endl;
		}
		else if ( i%5 == 0) {
			cout << "buzz"<<endl;
		}
		else {
			cout << i << endl;
		}

	}
}

void fibonacci(int count ) {
	int temp1 = 0, temp2 = 1;
	cout << temp1 << endl;
	cout << temp2 << endl;
	for (int i = 0; i < count; i++) {
		temp1 = temp1 + temp2;
		cout << temp1 << endl;
		temp2 = temp1 + temp2;
		cout << temp2 << endl;
	}
}


int main() {
	LinkedList lL;
	for (int i = 0; i < 100; i+=10) {
		lL.push(i);
	}
	lL.print();
	lL.reverse();
	lL.print();

return 0;
}
