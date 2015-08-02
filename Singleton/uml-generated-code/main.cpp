#include "Singleton.h"
#include <memory>

using std::shared_ptr;

int main() {
    shared_ptr<Singleton> u_singleton = Singleton::getInstance();
    u_singleton->display();

    return 0;
}

