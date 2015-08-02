#include "Singleton.h"

// Constructors/Destructors
//  

Singleton::Singleton () {
    data = 10;
//initAttributes();
}

Singleton::~Singleton () { }

//  
// Methods
//  
void Singleton::display() {
    std::cout << data << std::endl;
}

std::weak_ptr<Singleton> Singleton::__instance = std::weak_ptr<Singleton>();

// Accessor methods
//  

// Other methods
//  

//void Singleton::initAttributes () {
//}

