#include "alg.h"
#include <iostream>

int main(){

    int ia[] = {1, 2, 3, 8 ,10, 6, 20};
    int * p = Median(begin(ia), end(ia), 3);
    // int *p = Transpose(begin(ia), end(ia));
    // int * p = Transformations(begin(ia), end(ia),
    // [](const int x, const int y){return x * y;});
   cout << "*p : " << *p<< endl;
    for (size_t i = 7; i > 0; i--)
    {
        cout << *p--<< endl;
    }

}