#ifndef TEST_H
#define TEST_H

#include "Queue.h"

class Test{
    public:

    /**
     * @post Inititializes test suite
     */
    Test();

    ~Test();

    void run();
    
    std::string test1();
    std::string test2();
    std::string test3();

    private:

};

#endif

