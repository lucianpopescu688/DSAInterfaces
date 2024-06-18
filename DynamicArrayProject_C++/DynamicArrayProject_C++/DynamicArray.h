//generic data type (currently int)
class Iterator;
public:
	//Returns the size of the dynamic vector, which is the number of elements it contains
	//Return the ith element (1 <= i <= number of elements)
	//Adding an element to the end of the dynamic array
	//Other specific operations:
	//copy constructor, assignment operator...
};
class Iterator {
private:
	//The iterator contains a reference to the iterated container in its representation
	//Alternative:
public:
	//constructor
	//Iterator specific operations:
	void next();
	TElem getCurrent() const;
	bool valid() const;
};
