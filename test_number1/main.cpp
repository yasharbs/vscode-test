#include <iostream>
#include<Eigen/Dense>
#include"test.h"
int main(int, char**) {
    std::cout << "Hello, world!\n";
    test obj(3,4);
    std::cout<<obj.add()<<std::endl;
}
