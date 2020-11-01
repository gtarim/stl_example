#include <iostream>
#include <memory>

class classA { 
public: 
    void show() 
    { 
        std::cout << "classA::show()" << std::endl; 
    } 
}; 


int main(int argc, char const *argv[])
{
    std::unique_ptr <classA> ptr (new classA);
    
    // std::unique_ptr<classA> ptr2 = ptr; // cant copy unique_ptr

    ptr->show(); // can work with class

    ptr.get(); // get the class ptr

    std::unique_ptr<classA> ptr3 = std::move(ptr); // move the unique_ptr object
    ptr->show();

    return 0;
}


