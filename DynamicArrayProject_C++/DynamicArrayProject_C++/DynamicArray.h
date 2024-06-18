//generic data type (currently int)typedef int TElem;
class Iterator;class DynamicArray {private:	//capacity	int cp;	//size (actual number of elements)	int n;	//elements	TElem *e;	//the resizing operation	void resize();
public:	//In order for the Iterator to be able to access the representation of the dynamic vector:	friend class Iterator;	//Constructor	DynamicArray(int);	//Destructor	~DynamicArray();
	//Returns the size of the dynamic vector, which is the number of elements it contains	int size() const;
	//Return the ith element (1 <= i <= number of elements)	TElem element(int) const;
	//Adding an element to the end of the dynamic array	void addToEnd(TElem);	//Returns an iterator over the dynamic array	Iterator iterator();
	//Other specific operations:
	//copy constructor, assignment operator...
};
class Iterator {
private:
	//The iterator contains a reference to the iterated container in its representation	const DynamicArray& v;	//The current index	int current;
	//Alternative:	//TElem *current; //pointer to an element in the dynamic array
public:
	//constructor	Iterator(const DynamicArray&);
	//Iterator specific operations:	void first();
	void next();
	TElem getCurrent() const;
	bool valid() const;
};

