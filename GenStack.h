#include <iostream>

using namespace std;

template <typename E> // template allows stack class to hold any type of data
class GenStack
{
    public:
        GenStack(); // constructor
        GenStack(int maxSize); // overloaded constructor
        ~GenStack(); // destructor

        void push(E& e);
        E& pop();
        E& peek(); // AKA top()

        bool isFull();
        bool isEmpty();

        int getSize();

    private:
        int size;
        int top;

        E *myArray; // declare pointer to char to initialize array later on
};

// default constructor
template <typename E>
GenStack<E>::GenStack() // default constructor
{
    // initialization of default values
    myArray = new E[128];
    size = 128;
    top = -1; // will eventually be preincremented to equal index value of 0
}

template <typename E>
GenStack<E>::GenStack(int maxSize) // overloaded constructor
{
    myArray = new E[maxSize];
    size = maxSize;
    top = -1;
}

template <typename E>
GenStack<E>::~GenStack()
{
    // lets build some character
    // your job to research this
    // (one line of code to delete array)
    delete[] myArray;
}

template <typename E>
void GenStack<E>::push(E& e)
{
    if(isFull()) // if the stack is full
    {
        cout << "Making a larger array." << endl;
        E* newArr = new E[2*size]; // stack size will double
        for(int i = 0; i < size; ++i)
        {
            newArr[i] = myArray[i];
        }
        size *= 2; // size variable adjusted
        delete myArray;
        myArray = newArr;
    }
    else
    {
        myArray[++top] = e;
    }
}

template <typename E>
E& GenStack<E>::pop()
{
    // error checking, make sure it's not isEmpty
    if(isEmpty())
    {
        cout << "Array is empty." << endl;
    }
    else
    {
        return myArray[top--];
    }
}

template <typename E>
E& GenStack<E>::peek()
{
    // check if it's empty
    if(isEmpty())
    {
        cout << "Array is empty." << endl;
    }
    else
    {
        return myArray[top];
    }
}

template <typename E>
bool GenStack<E>::isFull() // checks if the stack is full
{
    return (top == size - 1);
}

template <typename E>
bool GenStack<E>::isEmpty() // checks if the stack is empty
{
    return (top == -1);
}

template <typename E> // size accessor method
int GenStack<E>::getSize()
{
    return size;
}
