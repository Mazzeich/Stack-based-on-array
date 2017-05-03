#include <iostream>
#include <cstdlib>
#include "stackbasedonarray.h"

using namespace std;


int main()
{
    StackBasedOnArray testStack;


    testStack.isEmpty();
    testStack.push(1);
    testStack.isEmpty();
    testStack.show();
    testStack.push(2);
    testStack.push(1);
    testStack.show();
    testStack.pop();
    testStack.pop();
    testStack.pop();
    testStack.show();
    testStack.isEmpty();
    testStack.push(3);
    testStack.push(-1);
    testStack.push(1);
    testStack.push(4);
    testStack.push(2);
    testStack.push(3);
    testStack.isEmpty();
    testStack.show();
}
