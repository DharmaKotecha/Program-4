// Stacks
//author: dharma
//20/09/2022

#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <stack>
#include <string>
#include <iostream>

using namespace std;


class EvenStack

{
    public:
        EvenStack();
        EvenStack(int EvenNumber);
        ~EvenStack();

        void push(int value);
        int top();
        void pop();
        int size();

    int emptyStack(); // declare empty stack

      int size();
      stack <int> aStack;
      int push();

    int GetEvenNumbers();
    void SetEvenNumbers(int EvenNumber);

    protected:

    private:
        int m_even_number;
};

#endif // EVENSTACK_H
