#include<iostream>

using namespace std;

template<class type>
class List {
private:
    struct Node; // forward declaration
    Node* head;
    Node* tail;
	class ListIterator;
public:
    List() { head = tail = 0; }
 	
	typedef ListIterator Iterator;
	
	void insert(Iterator it, const T & val)
	{
		Node * tmp = ite.iptr;
		
		if (head != NULL && tmp != NULL)
		{// not empty
			if (head == tail)
			{// only one element in current list
				
				if (head == tmp)
					head->next = tail = new Node(val);
		
			}
			else 
			{
				Node * nptr = new Node(val, tmp->next);
				tmp->next = nptr;
			
				if (tmp == tail)//last element
					tail = nptr;
			}
	
		}
	}
	
	Iterator begin() 
	{ 
		return head;
	}
	
	Iterator end()
	{
	 	return tail; 
	}
	
    void InsertData()
    {
        int c = 0;
        type r = NULL;

        cout << "How many no. you want to enter: ";
        cin >> c;

        for (int i = 0; i < c; i++)
        {
            cout << "Enter Data: ";
            cin >> r;

            AddtoEnd(r);
        }
    }
    void AddToStart(type val)
    {
        if (head == NULL)
        {
            head = tail = new Node(val, head);
        }
        else
        {
            head = new Node(val, head);
        }
    }
    void AddtoEnd(type val)
    {
        Node* NewVal = new Node(val, NULL);
            if (head == NULL)
            {
                head = tail = NewVal;
            }
            else
            {
                Node* temp = head;
                while (temp->next != NULL)
                    temp = temp->next;

                temp->next = NewVal;
            }
    }
    bool Searching(type r)
    {
        Node* temp = head;
        while (temp != NULL)
        {
            if (r == temp->data)
            {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }
    bool isEmpty()
    {
        if (head == tail == NULL)
        {
            return true;
        }
        return false;
    }
    void InsertBefore(type const v1, type const v2)
    {
        Node* NewVal = new Node(v1, NULL);
        if (Searching(v2))
        {
            int count1 = 0;
            bool b;
            Node* temp1 = head;
            while (temp1 != NULL)
            {
                count1++;
                if (v2 == temp1->data)
                {
                    b = true;
                    break;
                }
                temp1 = temp1->next;
            }
            int count2 = 0;
            Node* temp2 = head;
            Node* temp3 = head;
            while (count2 != count1)
            {
                if (count2 == (count1 - 2))
                {
                    temp2->next = NewVal;
                }
                else
                {
                    temp2 = temp2->next;
                }
                if (count2 == (count1 - 1))
                {
                    temp3 = temp3->next;
                    NewVal = temp3;
                    break;
                }
                else
                {
                    temp3 = temp3->next;
                }
                
            }

        }
    }
    void Print()
    {
        Node* tmp;
        for (tmp = head; tmp != 0; tmp = tmp->next)
            cout << tmp->data << " ";
        cout << endl;
    }
    void printRev()
    {
        Node* temp = head;
        printReverse(temp);
    }
    void printReverse(Node* head)
    {
        if (head == NULL)
            return;

        printReverse(head->next);

        cout << head->data << " ";
    }
    ~List()
    {
        Node* tmp;
        for (tmp = head; tmp != 0 ; tmp = head)
        {
            head = head->next;
            delete tmp;
        }
        cout << "List Deleted!" << endl;
    }
};

template<class type>
struct List<type>::Node {
public:
    type data;
    Node* next;

    Node() { next = NULL; }
    Node(type val, Node* nptr = 0) {
        data = val;
        next = nptr;
    }
};

template<class T>
class List<T>::ListIterator {

private:
	Node * iptr;

public:
	ListIterator(Node* t = NULL) 
	{ 
		iptr = t; 
	}
	ListIterator & operator++() 
	{//prefix ++
		if (iptr) iptr = iptr->next;
		return (*this);
	}
	ListIterator & operator++(int)
	{
	//dummy int param give info that it is postfix ++
		ListIterator old = *this;
		++(*this);
		return old;
	
	}
	
	T & operator*()
	{

		return iptr->data;
	
	}

	bool operator==(const ListIterator & l) const
	{
	
		return iptr == l.iptr;
	
	}

	bool operator!=(const ListIterator & l) const 
	{
		return !(iptr == l.iptr);
	
	}

};
int main()
{
    List <int> obj1;
    obj1.InsertData();
    obj1.Print();
    obj1.AddToStart(4);
    obj1.AddToStart(7);
    obj1.AddToStart(9);
    obj1.AddtoEnd(2);
    obj1.AddToStart(3);
    obj1.AddToStart(7);
    obj1.AddToStart(1);
    obj1.Print();
    cout << endl << obj1.Searching(2) << endl << obj1.Searching(9) << endl << obj1.Searching(7) << endl;
    obj1.printRev();
    return 0;
}
