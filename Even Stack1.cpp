//Stacks
//author: dharma
//20/09/2022

#include "EvenStack.h"
#include <iostream>
#include <stack>

using namespace std;

EvenStack::EvenStack()
{
    m_even_number = 0;
}

EvenStack::EvenStack (int EvenNumber)
{
    m_even_number = EvenNumber;
}


EvenStack::~EvenStack()
{
    //dtor
}

int EvenStack::GetEvenNumbers() // The GetEvenNumbers function receives a stack of integers and pushes all even numbers from input stack onto EvenStack object.
 {
     return m_even_number;
 }

 void EvenStack::SetEvenNumbers(int EvenNumber)
 {
     m_even_number = EvenNumber;
 }

 void EvenStack::push(int value)
{
    if (value%2 == 0)
        m_even.push(value);
    else
        cout << endl << "Error - can only push even numbers" << endl;
}

int EvenStack::top()
{
    return m_even.top();
}

void EvenStack::pop()
{
    m_even.pop();
}

int EvenStack::size()
{
    return m_even.size();
}

 int EvenStack::emptyStack()
 {
     stack <EvenStack> myStack;
     while(!myStack.empty())
     {
         cout << myStack.top().GetEvenNumbers() << " "
         << endl;
         myStack.pop();
     }
 }
