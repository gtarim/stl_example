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
    std::shared_ptr <classA> ptr (new classA);
    
    ptr->show(); // can work with class
    ptr.get(); // get the class ptr

    std::shared_ptr<classA> ptr2 = ptr; // can copy unique_ptr

    ptr2->show();

    return 0;
}


