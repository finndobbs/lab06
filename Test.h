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
    
    bool test1();

    private:

    Queue queue;
};

#endif

