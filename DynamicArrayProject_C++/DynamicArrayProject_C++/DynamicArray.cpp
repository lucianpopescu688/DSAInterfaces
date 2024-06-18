#include "DynamicArray.h"void DynamicArray::resize() {
	//We allocating a new array with double capacity somewhere in the computer's memory	TElem *eNew = new int[2 * cp];
	//We copy all the elements from the old array into the new one	for (int i = 0; i < n; i++)		eNew[i] = e[i];
	//We double the capacity	cp = 2 * cp;
	//We release the memory occupied by the old array	delete[] e;
	//We make the e field to refer the newly created array of elements (with double capacity)	e = eNew;
}
DynamicArray::DynamicArray(int cp) {	//We initialize the capacity	this->cp = cp;
	//We allocate space for cp TElems	e = new TElem[cp];
	//We initialize the current number of elements (initially, the array is empty)	this->n = 0;
}
DynamicArray::~DynamicArray() {	//We free the memory space occupied by the elements	delete[] e;
}
int DynamicArray::size() const{	return n;
}
TElem DynamicArray::element(int i) const{	return e[i - 1];
}
void DynamicArray::addToEnd(TElem e) {	//If we reached the maximum capacity, then we should resize the array	if (n == cp)		resize();	//We add the element at the end of the array	this->e[n++] = e;
}
Iterator DynamicArray::iterator() {	//We return a new iterator over the current dynamic araray	return Iterator(*this);}
Iterator::Iterator(const DynamicArray& _v) : v(_v) {	//We initialize the cursor of the iterator (current index) to indicate to the first element of the dynamic array	current = 0;
	//Alternative:	//current = v.e; //- pointer to the first element of the dynamic array
}
void Iterator::first() {	//Set the cursor of the iterator (current index) to indicate to the first element of the dynamic array	current = 0;
	//Alternative:	//current=v.e; //- pointer to the first element of the dynamic array
}
bool Iterator::valid() const{	//Check if the iterator is still valid, i.e. its cursor points to an element of the dynamic array	return current < v.size();
	//Alternative:	//return current-v.e<v.dim();
}
TElem Iterator::getCurrent() const{	//the current element in the dynamic array	return v.e[current];
	//Alternative:	//return *current;
}

void Iterator::next() {	current++;
}
