/*
 Write a program to swap the two numbers using friend function 
without using third variable
*/

#include <iostream>

class Numbers {
private:
    int num1;
    int num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}

    friend void swap(Numbers &nums);
};

void swap(Numbers &nums) {
    nums.num1 = nums.num1 + nums.num2;
    nums.num2 = nums.num1 - nums.num2;
    nums.num1 = nums.num1 - nums.num2;
}

int main() {
    Numbers nums(5, 10);
    
    std::cout << "Before swapping: " << nums.num1 << " " << nums.num2 << std::endl;

    swap(nums);

    std::cout << "After swapping: " << nums.num1 << " " << nums.num2 << std::endl;

    return 0;
}