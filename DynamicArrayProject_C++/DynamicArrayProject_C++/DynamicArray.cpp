#include "DynamicArray.h"
	//We allocating a new array with double capacity somewhere in the computer's memory
	//We copy all the elements from the old array into the new one
	//We double the capacity
	//We release the memory occupied by the old array
	//We make the e field to refer the newly created array of elements (with double capacity)
}
DynamicArray::DynamicArray(int cp) {
	//We allocate space for cp TElems
	//We initialize the current number of elements (initially, the array is empty)
}
DynamicArray::~DynamicArray() {
}
int DynamicArray::size() const{
}
TElem DynamicArray::element(int i) const{
}
void DynamicArray::addToEnd(TElem e) {
}
Iterator DynamicArray::iterator() {
Iterator::Iterator(const DynamicArray& _v) : v(_v) {
	//Alternative:
}
void Iterator::first() {
	//Alternative:
}
bool Iterator::valid() const{
	//Alternative:
}
TElem Iterator::getCurrent() const{
	//Alternative:
}

void Iterator::next() {
}