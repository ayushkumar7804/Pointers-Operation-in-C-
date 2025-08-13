/*Ayush Yadav
  24070123028*/

#include <iostream>
using std::cout;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 50, b = 40;
    swap(a, b);
    cout << "a="<< a << std::endl;
    cout <<"b="<< b << std::endl;
    return 0;
}

/*OUTPUT
 a= 40
 b= 50
 */
