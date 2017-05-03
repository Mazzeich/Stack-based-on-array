#ifndef STACKBASEDONARRAY_H
#define STACKBASEDONARRAY_H

#include <vector>

using namespace std;

class StackBasedOnArray
{
private:
    vector <int> basedStack;
public:
    void push(int i);
    void pop();
    bool isEmpty();
    void show();
};


#endif // STACKBASEDONARRAY_H
