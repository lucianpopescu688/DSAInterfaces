#include <iostream>
#include "DynamicArray.h"using namespace std;void createDynamicArray(DynamicArray& v) {	v.addToEnd(1);	v.addToEnd(2);	v.addToEnd(3);	v.addToEnd(4);	v.addToEnd(5);	v.addToEnd(6);	v.addToEnd(7);	v.addToEnd(8);	v.addToEnd(9);	v.addToEnd(10);}
//Printing the dynamic iterator's content using the iteratorvoid print1(DynamicArray& v) {
	Iterator i = v.iterator();	i.first();	while (i.valid()) {		cout << i.getCurrent() << ' ';		i.next();	}
}
//Printing the dynamic iterator's content using the "element" operationvoid print2(const DynamicArray& v) {
	cout << endl;	for (int i = 1; i <= v.size(); i++)		cout << v.element(i) << ' ';
}
int main(void) {	DynamicArray v(2);	createDynamicArray(v);	print1(v);	print2(v);	return 0;
}
