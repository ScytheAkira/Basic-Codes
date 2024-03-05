#include <iostream>
using namespace std;

template <class T>
class maxHeap
{
private:
	T* arr;
	int capacity;
	int size;
public:
	maxHeap()
	{
		arr = nullptr;
	}
	maxHeap(int _capacity)
	{
		arr = new T[_capacity];
		capacity = _capacity;
		size = 1;
	}
	void insert(T d)
	{
		if (size >= capacity - 1)
		{
			int pre = capacity;
			capacity *= 2;
			T* newArr = new T[capacity];
			for (int i = 0;i < pre;i++)
				newArr[i] = arr[i];
			delete[] arr;
			arr = newArr;
		}
		arr[size] = d;
		int i = size;
		size++;
		while (i > 1)
		{
			if (arr[i] > arr[i / 2])
				swap(arr[i], arr[i / 2]);
			else
				break;
			i /= 2;
		}
	}
	T extractMax()
	{
		if (size - 1 != 0)
		{
			T temp = arr[1];
			arr[1] = arr[size - 1];
			size--;
			Heapify(1);
			return temp;
		}
		else
			cout << "Heap empty" << endl;
	}
	void Heapify(int i)
	{
		int largest = i;
		if (2 * i < size && arr[largest] < arr[2 * i])
			largest = 2 * i;
		if ((2 * i) + 1 < size && arr[largest] < arr[(2 * i) + 1])
			largest = (2 * i) + 1;
		if (i != largest)
		{
			swap(arr[largest], arr[i]);
			Heapify(largest);
		}
	}
	void Heapify(T* Arr, int n, int i)
	{
		int largest = i;
		if (2 * i < n && Arr[largest] < Arr[2 * i])
			largest = 2 * i;
		if ((2 * i) + 1 < n && Arr[largest] < Arr[(2 * i) + 1])
			largest = (2 * i) + 1;
		if (i != largest)
		{
			swap(Arr[largest], Arr[i]);
			Heapify(Arr, n, largest);
		}
	}
	void swap(T& d1, T& d2)
	{
		T d3 = d1;
		d1 = d2;
		d2 = d3;
	}
	void Print()
	{
		for (int i = 1; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	void Print(T* Arr, int n)
	{
		for (int i = 1;i < n;i++)
			cout << Arr[i] << " ";
		cout << endl;
	}
	void buildHeap(T* Arr, int n)
	{
		for (int i = n / 2;i >= 1;i--)
			Heapify(Arr, n, i);
	}
	void sortHeap(T* Arr, int n)
	{
		buildHeap(Arr, n);
		int Size = n-1;
		while (Size > 1)
		{
			swap(Arr[1], Arr[Size]);
			Size--;
			Heapify(Arr, Size,1);
		}
	}
	bool checkMaxHeap(T* arr1,int i ,int arrSize)
	{
		bool left, right;
		left = right = false;
		if (2 * i < arrSize)
		{
			if (arr1[i] > arr1[2 * i])
				left = checkMaxHeap(arr1, 2 * i, arrSize);
			else
				return false;
		}
		else
			return true;
		if (2 * i + 1 < arrSize)
		{
			if (arr1[i] > arr1[2 * i + 1])
				right = checkMaxHeap(arr1, 2 * i + 1, arrSize);
			else
				return false;
		}
		else
			return true;
		if (left && right)
			return true;
		else
			return false;
	}
	T extractKthMax(int k)
	{
		T temp;
		if (k < size)
		{
			for (int i = 1;i <= k;i++)
				temp = extractMax();
			return temp;
		}
		else
			cout << "Value to be extracted does not exist" << endl;
	}
	T* mergeHeap(T* Arr, T* arr2, int arrSize1, int arrSize2)
	{
		T* newArr = new T[arrSize1 + arrSize2];
		for (int i = 1;i < arrSize1;i++)
			newArr[i] = Arr[i];
		int temp1 = arrSize1;
		for (int i = 1;i < arrSize2;i++)
			newArr[temp1++] = arr2[i];
		buildHeap(newArr, arrSize1 + arrSize2);
		Print(newArr, arrSize1 + arrSize2);
		return newArr;
	}
	~maxHeap()
	{
		delete[] arr;
	}
};
int main()
{
	maxHeap<int> h(15);
	h.insert(14);
	h.insert(19);
	h.insert(42);
	h.insert(33);
	h.insert(26);
	h.insert(31);
	h.insert(27);
	h.insert(44);
	h.insert(35);
	h.insert(10);
	cout << "Heap\n";
	h.Print();

	int arr[10];
	int arr2[15];
	for (int i = 1;i < 10;i++)
		arr[i] = i * 4;
	for (int i = 1;i < 15;i++)
		arr2[i] = i * 16;

	cout << "arr:\n";
	h.buildHeap(arr, 10);
	h.buildHeap(arr2, 15);
	h.Print(arr, 10);
	cout << "Arr2:\n";
	h.Print(arr2, 15);
	
	cout << "Merge Heap of arr and arr2\n";
	int* newArr = h.mergeHeap(arr, arr2, 10, 15);
	h.sortHeap(arr, 10);
	cout << "Sorting Arr" << endl;
	h.Print(arr,10);

	cout << "Checking if arr2 is max heap or not:\n";
	cout << h.checkMaxHeap(arr2, 1, 15) << endl;
	cout << "Extracting 3rd value from heap\n";
	cout << h.extractKthMax(3) << endl;

	return 0;
}