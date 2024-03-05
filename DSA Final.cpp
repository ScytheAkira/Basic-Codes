#include <iostream>
#include <string>
using namespace std;

template <class T>
class SList
{
private:
	class sNode
	{
	public:
		T data;
		sNode* next;
	};
	sNode* head;
	sNode* tail;
public:
	SList()
	{
		head = tail = nullptr;
	}
	void insertAtStart(T d)
	{
		sNode* temp = new sNode;
		temp->data = d;
		temp->next = head;

		if (head==nullptr)
			head = tail = temp;
		else
			head = temp;
	}
	void insertAtEnd(T d)
	{
		if (head != nullptr)
		{
			sNode* temp = new sNode;
			temp->data = d;
			temp->next = nullptr;
			tail->next = temp;
			tail = temp;
		}
		else
			insertAtStart(d);
	}
	void deleteAtStart()
	{
		if (head != nullptr)
		{
			sNode* temp = head;
			head = head->next;
			delete temp;
			if (head == nullptr)
				tail = nullptr;
		}
	}
	void deleteAtEnd()
	{
		if (head != nullptr)
		{
			if (head == tail)
			{
				delete head;
				head = tail = nullptr;
			}
			else
			{
				sNode* curr = head;
				while (curr->next != tail)
					curr = curr->next;
				delete tail;
				tail = curr;
				tail->next = nullptr;
			}
		}
	}
	void printSList(sNode* c)
	{
		if (c != nullptr)
		{
			cout << c->data << " ";
			printSList(c->next);
		}
		else
			cout << endl;
	}
	void printSList()
	{
		printSList(head);
	}
	bool Search(T d)
	{
		return Search(head, d);
	}
	bool Search(sNode* c, T d)
	{
		if (c != nullptr)
		{
			if (c->data == d)
				return true;
			return Search(c->next, d);
		}
		return false;
	}
	~SList()
	{
		deleteAtStart();
	}
};
template <class T>
class DList
{
private:
	class dNode
	{
	public:
		T data;
		dNode* next;
		dNode* prev;
	};
	dNode* head;
	dNode* tail;
public:
	class Iterator
	{
		friend class DList<T>;
	private:
		dNode* curr;
	public:
		Iterator()
		{
			curr = nullptr;
		}
		T& operator *()
		{
			return curr->data;
		}
		Iterator& operator ++()
		{
			curr = curr->next;
			return *this;
		}
		Iterator& operator++(int)
		{
			Iterator old = *this;
			curr = curr->next;
			return old;
		}
		bool operator!=(Iterator it)
		{
			if (curr != it.curr)
				return true;
			return false;
		}
	};
	DList()
	{
		head = new dNode;
		tail = new dNode;
		head->next = tail;
		head->prev = nullptr;
		tail->prev = head;
		tail->next = nullptr;
	}
	Iterator Begin()
	{
		Iterator it;
		it.curr = head->next;
		return it;
	}
	Iterator End()
	{
		Iterator it;
		it.curr = tail;
		return it;
	}
	void insertAtStart(T d)
	{
		dNode* temp = new dNode;
		temp->data = d;
		temp->next = head->next;
		temp->prev = head;
		head->next->prev = temp;
		head->next = temp;
	}
	void insertAtEnd(T d)
	{
		dNode* temp = new dNode;
		temp->data = d;
		temp->next = tail;
		temp->prev = tail->prev;
		tail->prev->next = temp;
		tail->prev = temp;
	}
	void deleteAtEnd()
	{
		if (head->next != tail)
		{
			dNode* temp = tail->prev;
			temp->prev->next = tail;
			tail->prev = temp->prev;
			delete temp;
		}
	}
	void deleteAtStart()
	{
		if (head->next != tail)
		{
			dNode* temp = head->next;
			temp->next->prev = head;
			head->next = temp->next;
			delete temp;
		}
	}
	void insertBefore(Iterator it, T d)
	{
		dNode* t = it.curr;
		dNode* temp = new dNode;
		temp->data = d;
		temp->next = t;
		temp->prev = t->prev;
		t->prev->next = temp;
		t->prev = temp;
	}
	void insertAfter(Iterator it, T d)
	{
		dNode* t = it.curr;
		dNode* temp = new dNode;
		temp->data = d;
		temp->prev = t;
		t->next->prev = temp;
		temp->next = t->next;
		t->next = temp;
	}
	Iterator Remove(Iterator it)
	{
		dNode* t = it.curr;
		t->prev->next = t->next;
		t->next->prev = t->prev;
		it++;
		delete t;
		return it;
	}
	void print(dNode* c)
	{
		if (c != tail)
		{
			cout << c->data << " ";
			print(c->next);
		}
		else
			cout << endl;
	}
	void print()
	{
		print(head->next);
	}
	~DList()
	{
		for (Iterator it = Begin(); it != End(); it++)
			it = Remove(it);
		delete head;
		delete tail;
	}
};
template<class T>
class Queue
{
private:
	T* arr;
	int maxSize, size, front, rear;
public:
	Queue()
	{
		arr = new T[10];
		maxSize = 10;
		size = 0;
		front = -1;
		rear = 0;
	}
	Queue(int s)
	{
		arr = new T[s];
		maxSize = s;
		size = 0;
		front = -1;
		rear = 0;
	}
	bool isEmpty()
	{
		if (size == 0)
			return true;
		return false;
	}
	bool isFull()
	{
		if (size == maxSize)
			return true;
		return false;
	}
	bool Enqueue(T d)
	{
		if (!isFull())
		{
			arr[rear%maxSize] = d;
			rear++;
			size++;
			return true;
		}
		return false;
	}
	bool Dequeue(T& d)
	{
		if (!isEmpty())
		{
			front++;
			d = arr[front%maxSize];
			size--;
			return true;
		}
		return false;
	}
};
template <class T>
class Stack
{
private:
	T* arr;
	int maxSize;
	int stkptr;
public:
	Stack()
	{
		arr = new T[10];
		maxSize = 10;
		stkptr = 0;
	}
	Stack(int s)
	{
		arr = new T[s];
		maxSize = s;
		stkptr = 0;
	}
	bool isEmpty()
	{
		if (stkptr == 0)
			return true;
		return false;
	}
	bool isFull()
	{
		if (stkptr == maxSize)
			return true;
		return false;
	}
	bool Push(T d)
	{
		if (!isFull())
		{
			arr[stkptr] = d;
			stkptr++;
			return true;
		}
		return false;
	}
	bool Pop(T& d)
	{
		if (!isEmpty())
		{
			d = arr[--stkptr];
			return true;
		}
		return false;
	}
	bool Top(T& d)
	{
		if (!isEmpty())
		{
			d = arr[stkptr - 1];
			return true;
		}
		return false;
	}
};
template <class T>
class BTree
{
private:
	class bNode
	{
	public:
		T data;
		bNode* left;
		bNode* right;
	};
	bNode* root;
public:
	BTree()
	{
		root = nullptr;
	}
	void insert(bNode*& r, T d)
	{
		if (r == nullptr)
		{
			r = new bNode;
			r->data = d;
			r->left = r->right = nullptr;
		}
		else
		{
			if (d < r->data)
				insert(r->left, d);
			else
				insert(r->right, d);
		}
	}
	void insert(T d)
	{
		insert(root, d);
	}
	void printSorted(bNode*& r)
	{
		if (r != nullptr)
		{
			printSorted(r->left);
			cout << r->data << endl;
			printSorted(r->right);
		}
	}
	void printSorted()
	{
		printSorted(root);
	}
	void destroy(bNode*& r)
	{
		if (r != nullptr)
		{
			destroy(r->left);
			destroy(r->right);
			delete r;
		}
	}
	T findMax(bNode*& r)
	{
		while (r->right != nullptr)
			r = r->right;
		return r->data;
	}
	bool Remove(bNode*& r, T d)
	{
		if (r != nullptr)
		{
			if (d < r->data)
				Remove(r->left);
			else if (d > r->data)
				Remove(r->right);
			else
			{
				if (r->left == nullptr && r->right == nullptr)
				{
					delete r;
					r = nullptr;
					return true;
				}	
				else if (r->left != nullptr && r->right == nullptr)
				{
					bNode* temp = r;
					r = r->left;
					delete temp;
					return true;
				}
				else if (r->left == nullptr && r->right != nullptr)
				{
					bNode* temp = r;
					r = r->right;
					delete temp;
					return true;
				}
				else
				{
					r->data = findMax(r->left);
					Remove(r->left, r->data);
					return true;
				}
			}
		}
		return false;
	}
	bool Remove(T d)
	{
		return Remove(root, d);
	}
	int countLeaves(bNode*& r)
	{
		if (r == nullptr)
			return 0;
		else if (r->left == nullptr && r->right == nullptr)
			return 1;
		else
			return countLeaves(r->left) + countLeaves(r->right);
	}
	int countLeaves()
	{
		countLeaves(root);
	}
	~BTree()
	{
		destroy(root);
	}
};
template<class T>
class AVL
{
private:
	class aNode
	{
	public:
		T data;
		aNode* left;
		aNode* right;
		int height;
		aNode(T d, aNode* l, aNode* r, int h)
		{
			data = d;
			left = l;
			right = r;
			height = h;
		}
	};
	aNode* root;
public:
	AVL()
	{
		root = nullptr;
	}
	int geth(aNode*& r)
	{
		if (r == nullptr)
			return -1;
		return r->height;
	}
	int max(int n1, int n2)
	{
		if (n1 > n2)
			return n1;
		return n2;
	}
	void rotateRight(aNode*& X)
	{
		aNode* Y = X->left;
		X->left = Y->right;
		Y->right = X;
		X->height = 1 + max(geth(X->left), geth(X->right));
		Y->height = 1 + max(geth(X->left), geth(Y->right));
		X = Y;
	}
	void rotateLeft(aNode*& X)
	{
		aNode* Y = X->right;
		X->right = Y->left;
		Y->left = X;
		X->height = 1 + max(geth(X->left), geth(X->right));
		Y->height = 1 + max(geth(X->left), geth(Y->right));
		X = Y;
	}
	void doubleRotateRight(aNode*& X)
	{
		rotateLeft(X->left);
		rotateRight(X);
	}
	void doubleRotateLeft(aNode*& X)
	{
		rotateRight(X->right);
		rotateLeft(X);
	}
	int balanceFactor(aNode*& r)
	{
		return geth(r->left)-geth(r->right);
	}
	void Insert(aNode*& r, T d)
	{
		if (r == nullptr)
			r = new aNode(d, nullptr, nullptr, 0);	
		else
		{
			if (d < r->data)
			{
				Insert(r->left, d);
				if (balanceFactor(r) == 2)
				{
					if (d < r->left->data)
						rotateRight(r);
					else
						doubleRotateRight(r);
				}
			}
			else
			{
				Insert(r->right, d);
				if (balanceFactor(r) == -2)
				{
					if (d > r->right->data)
						rotateLeft(r);
					else
						doubleRotateLeft(r);
				}
			}
			r->height = 1 + max(geth(r->left), geth(r->right));
		}
	}
	void Insert(T d)
	{
		Insert(root, d);
	}
	T findMin(aNode*& r)
	{
		while (r->left != nullptr)
			r = r->left;
		return r->data;
	}
	void removeNode(aNode*& r)
	{
		if (r->left == r->right == nullptr)
		{
			delete r;
			r = nullptr;
		}
		else if (r->left != nullptr && r->right == nullptr)
		{
			aNode* temp = r;
			r = r->left;
			delete temp;
		}
		else if (r->left == nullptr && r->right != nullptr)
		{
			aNode* temp = r;
			r = r->right;
			delete temp;
		}
		else
		{
			r->data = findMin(r->right);
			Delete(r->right, r->data);
		}
	}
	void Delete(aNode*& r, T d)
	{
		if (r->data == d)
			removeNode(r);
		else if (d < r->left)
			Delete(r->left, d);
		else
			Delete(r->right, d);

		r->height = 1 + max(geth(r->left), geth(r->right));
		int firstBf = balanceFactor(r);

		if (firstBf < -1)
		{
			int secondBf = balanceFactor(r->right);
			if (secondBf <= -1)
				rotateLeft(r);
			else
				doubleRotateLeft(r);
		}
		else if (firstBf > 1)
		{
			int secondBf = balanceFactor(r->left);
			if (secondBf >= 11)
				rotateRight(r);
			else
				doubleRotateRight(r);
		}
	}
	void Delete(T d)
	{
		Delete(root, d);
	}
	void print(aNode*& r)
	{
		if (r != nullptr)
		{
			print(r->left);
			cout << r->data << endl;
			print(r->right);
		}
	}
	void print()
	{
		print(root);
	}
	bool Search(aNode*& r, T d)
	{
		if (r->data == d)
			return true;
		else
		{
			if (d < r->data)
				return Search(r->left, d);
			else
				return Search(r->right, d);
		}
	}
	bool Search(T d)
	{
		return Search(root, d);
	}
};
template<class T>
class MaxHeap
{
private:
	T* arr;
	int heapSize, int size;
public:
	MaxHeap()
	{
		arr = new T[10];
		heapSize = 10;
		size = 1;
	}
	MaxHeap(int s)
	{
		arr = new T[s];
		heapSize = s;
		size = 1;
	}
	void Swap(T& d1, T& d2)
	{
		T temp = d1;
		d1 = d2;
		d2 = temp;
	}
	void Insert(T d)
	{
		if (size >= heapSize-1)
		{
			T* newArr = new T[heapSize * 2];
			for (int i = 1; i < heapSize; i++)
				newArr[i] = arr[i];
			heapSize *= 2;
			delete[] arr;
			arr = newArr;
			newArr = nullptr;
		}
		arr[size] = d;
		int i = size;
		size++;
		while (i > 1)
		{
			if (arr[i] > arr[i / 2])
				Swap(arr[i], arr[i / 2]);
			i /= 2;
		}
	}
	void heapify(int i)
	{
		int largest = i;
		if (2 * i < size && arr[2 * i] > arr[largest])
			largest = 2*i;
		if ((2 * i) + 1 < size && arr[(2 * i) + 1] > arr[largest])
			largest = (2 * i) + 1;
		if (i != largest)
		{
			Swap(arr[i], arr[largest]);
			heapify(largest);
		}
	}
	void heapify(T* Arr, int _size, int i)
	{
		int largest = i;
		if (2 * i < _size && Arr[2 * i] > Arr[largest])
			largest = 2 * i;
		if ((2 * i) + 1 < _size && Arr[(2 * i) + 1] > Arr[largest])
			largest = (2 * i) + 1;
		if (i != largest)
		{
			Swap(Arr[i], Arr[largest]);
			heapify(largest);
		}
	}
	T ExtractMax()
	{
		if (size - 1 != 0)
		{
			T temp = arr[1];
			arr[1] = arr[size];
			size--;
			heapify(1);
			return temp;
		}
		else
			cout << "Empty Heap!" << endl;		
	}
	T DeleteKey(int index)
	{
		if (index<1 || index>size)
			cout << "Invalid index!" << endl;
		else
		{
			arr[index] = arr[1] + 1;
			int i = index;
			while (i > 1)
			{
				if (arr[i] > arr[i / 2])
					Swap(arr[i], arr[i / 2]);
				i /= 2;
			}
			return ExtractMax();
		}
	}
	void BuildHeap(T* Arr, int _size)
	{
		for (i = _size / 2; i >= 1; i--)
			heapify(Arr, _size, i);
	}
	void HeapSort(T* Arr, int _size)  //ascending order
	{
		BuildHeap(Arr, _size);
		_size -= 1;
		while (_size >= 1)
		{
			Swap(Arr[1], Arr[_size]);
			size--;
			heapify(Arr, _size, 1);
		}
	}
};
template<class T>
class hashItem
{
public:
	int key;
	T value;
	short status;
	hashItem()
	{
		key = -1;
		status = 0;
	}
};
template <class T>
class hashMap
{
protected:
	hashItem<T>* hashArray;
	int currentElements;
	int capacity;
	virtual int getNextCandidateIndex(int _key, int i)
	{
		return ((_key + 1) % capacity);
	}
	void doubleCapacity()
	{
		int prevSize = capacity;
		capacity *= 2;
		hashItem<T>* newArr = new hashItem<T>[capacity];
		currentElements = 0;

		for (int counter = 0; counter < prevSize; counter++)
		{
			int index2 = hashArray[counter].key % capacity;
			if (hashArray[index2].status == 2)
			{
				if (newArr[index2].status == 2)
				{
					int counter2 = 1;
					while (newArr[index2].status == 2)
						index2 = getNextCandidateIndex(hashArray[counter].key, counter2++);
				}
				newArr[index2].key = hashArray[counter].key;
				newArr[index2].status = 2;
				newArr[index2].value = hashArray[counter].value;
				currentElements++;
			}
		}
		delete[] hashArray;
		hashArray = newArr;
		newArr = nullptr;
	}
public:
	hashMap()
	{
		capacity = 10;
		hashArray = new hashItem<T>[capacity];
		currentElements = 0;
	}
	hashMap(int const _capacity)
	{
		if (_capacity < 1)
			cout << "Capacity provided is invalid";
		else
		{
			capacity = _capacity;
			currentElements = 0;
			hashArray = new hashItem[capacity];
		}
	}
	void displayMap()
	{
		for (int counter = 0; counter < capacity; counter++)
		{
			if (hashArray[counter].status == 2)
			{
				cout << "Index: " << counter << endl;
				cout << "Key " << hashArray[counter].key << " Value " << hashArray[counter].value << endl;
			}
		}
	}
	void insert(int const _key, T const _value)
	{
		int index = _key % capacity;

		if (hashArray[index].status == 2)
		{
			int counter = 1;
			while (hashArray[index].status == 2)
				index = getNextCandidateIndex(_key, counter++);
		}
		hashArray[index].key = _key;
		hashArray[index].status = 2;
		hashArray[index].value = _value;
		currentElements++;

		float temp = currentElements / capacity;
		if (temp >= 0.75)
			doubleCapacity();
	}
	bool deleteKey(int const _key)
	{
		int index = _key % capacity;

		int counter = 1;
		while (hashArray[index].status != 0)
		{
			if (hashArray[index].key == _key)
			{
				hashArray[index].status = 1;
				return true;
			}
			index = getNextCandidateIndex(_key, counter++);
		}
		return false;
	}
	T* get(int const _key)
	{
		int index = _key % capacity;
		int counter = 1;

		while (hashArray[index].status != 0)
		{
			if (hashArray[index].key == _key)
				return &hashArray[index].value;
			index = getNextCandidateIndex(_key, counter++);
		}
		return nullptr;
	}
	~hashMap()
	{
		delete[] hashArray;
	}
};
template <class T>
class QHashMap : public hashMap<T>
{
	virtual int getNextCandidateIndex(int _key, int i)
	{
		int c = hashMap<T>::capacity;
		return ((_key + (i * i)) % c);
	}
};
template<class T>
class DHashMap :public hashMap<T>
{
	virtual int getNextCandidateIndex(int _key, int i)
	{
		int c = hashMap<T>::capacity;

		int firstVal = _key % c;
		int secondVal = 7 - (_key % 3);

		return ((firstVal + (i * secondVal)) % c);
	}
};
template<class T>
void populateHash(string filename, hashMap<T> hash)
{
	int students = 0;
	cout << "Enter number of students: ";
	cin >> students;
	int stID;
	string stName;
	while (students < 0)
	{
		cout << "Invalid number of students. Please try again: ";
		cin >> students;
	}
	for (int counter = 0; counter < students; counter++)
	{
		cout << "Enter student ID: ";
		cin >> stID;
		cin.ignore();
		cout << "Enter name of the student: ";
		getline(cin, stName);
		(hash).insert(stID, stName);
	}
	(hash).displayMap();
}

int main()
{	
	/*SList<int> test;
	test.insertAtEnd(1);
	test.insertAtEnd(2);
	test.insertAtEnd(3);
	test.insertAtEnd(4);
	test.insertAtEnd(5);
	test.printSList();
	test.deleteAtEnd();
	test.printSList();
	test.deleteAtStart();
	test.printSList();
	cout << test.Search(4);

	DList<int> test2;
	test2.insertAtEnd(1);
	test2.insertAtEnd(2);
	test2.insertAtEnd(3);
	test2.insertAtEnd(4);
	test2.insertAtEnd(5);

	DList<int>::Iterator it = test2.Begin();
	for (it; it != test2.End(); it++)
	{
		if ((*it) == 4)
			break;
	}
	test2.Remove(it);
	test2.print();

	Queue<int> test3;
	test3.Enqueue(3);
	test3.Enqueue(4);
	test3.Enqueue(5);
	test3.Enqueue(6);
	test3.Enqueue(7);

	Stack<int> test4;
	test4.Push(10);
	test4.Push(15);
	test4.Push(16);
	test4.Push(17);
	int temp;
	test4.Pop(temp);
	cout << temp << endl;

	BTree<int> test5;
	test5.insert(18);
	test5.insert(10);
	test5.insert(11);
	test5.insert(25);
	test5.insert(20);
	test5.insert(4);
	test5.insert(1);
	test5.printSorted();*/

	AVL<int> test6;
	test6.Insert(10);
	test6.Insert(1);
	test6.Insert(15);
	test6.Insert(17);
	test6.Insert(18);
	test6.print();

	return 0;
}