#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Test.h"
#include "Queue.h"

Test::Test() {
    std::ofstream outfile;
    outfile.open("test_log.out", std::ios::out | std::ios::app);

    outfile << "Tests:" << newl
            << "\t1: new Queue is empty" << newl
            << "\t2: Enqueuing makes Queue nonempty" << newl
            << "\t3: Enqueuing x on empty queue then peekFront returns x" << newl;


    outfile.close();

    Queue queue;
}

Test::~Test(){

}

bool Test::test1(){

}
