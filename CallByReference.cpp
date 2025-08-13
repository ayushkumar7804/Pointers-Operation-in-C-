/*Ayush Yadav
  24070123028
  */
#include <iostream>
using std::cout;

void swap(int *x, int *y) { 
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 40, b = 50;
    swap(&a, &b);
    std::cout << a << std::endl;
    std::cout << b << std::endl; 
    return 0;
}

/*OUTPUT 
  50
  40
*/
