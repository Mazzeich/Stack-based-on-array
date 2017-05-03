#include "stackbasedonarray.h"
#include <iostream>

using namespace std;


bool StackBasedOnArray::isEmpty()
{
    return basedStack.empty();
}


void StackBasedOnArray::push(int i)
{
    basedStack.push_back(i);
}


void StackBasedOnArray::pop()
{
    if(!isEmpty()) basedStack.pop_back();
    else cout << "Stack is empty." << endl;

}


void StackBasedOnArray::show()
{
    for (int i = 0; i < basedStack.size(); i++)
        cout << basedStack[i] << " ";
    cout << "\n";
}
