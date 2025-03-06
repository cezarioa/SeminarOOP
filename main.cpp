//
// Created by ioaca on 3/6/2025.
//
#include <iostream>

class Dog {
    public:
    bool eat() {

        std::cout <<"I am Dog" << std::endl;
        return true;
    };
    int getAge() {
        return age;
    }
    int setAge(int age) {
        this->age = age;
        return age;
    }
    private:
    int age;
};

int main(){
    Dog dog=Dog();
    dog.eat();
    dog.setAge(7);
    std::cout << dog.getAge() << std::endl;

    return 0;
}