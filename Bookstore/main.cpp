#include <vector>
#include <iostream>

int main(){
    int x= 5;
    int y = 6;
    int & z = x;
    std::vector<int* > test= {&x, &y};
    std::cout << test[0] << "\n" << &x << "\n" << &test[0] << std::endl;
    std::cout << &z;

    return 0;
}
