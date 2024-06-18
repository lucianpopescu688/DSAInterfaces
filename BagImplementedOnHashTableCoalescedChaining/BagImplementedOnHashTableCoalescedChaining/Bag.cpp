#include "Bag.h"
#include "BagIterator.h"
#include <iostream>
#include <exception>
#include <math.h>
using namespace std;

//function that gives the hashCode of an element
int hashCode(TElem e){
   return abs(e);
}

//the hash function
int Bag::h(TElem e) {
	//division method
	return hashCode(e) % m;
}


Bag::Bag() {
    m = MAX; //we initialize m with a high enough predefined value
	for (int i = 0; i < m; i++) {
		e[i] = -1;
		urm[i] = -1;
	}
	firstEmpty = 0;
}


void Bag::updateFirstEmpty()
{
	firstEmpty++;
	while (firstEmpty < m && e[firstEmpty] != -1)
		firstEmpty++;
}


//adding an element into the bag
void Bag::add(TElem elem) {
	//the hash
	int i=h(elem);
	if (e[i] == -1)	// the position is free
	{
		e[i] = elem;	// we add the element
		if (i == firstEmpty)
			updateFirstEmpty();	// we update first empty, if needed
		return;
	}

	int j = -1;	// j will be the previous of i
	while (i != -1)	// we are iterating to the end of the chaining
	{
		j = i;
		i = urm[i];
	}

	//We are assuming that m is high-enough


	e[firstEmpty] = elem;
	urm[j] = firstEmpty;
	updateFirstEmpty();

}

BagIterator Bag::iterator() const{
	return BagIterator(*this);
}

Bag::~Bag() {
}




