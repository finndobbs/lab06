#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Test.h"
#include "Queue.h"

Test::Test() {
}

Test::~Test(){

}
void Test::run(){
    std::ofstream outfile;
    outfile.open("test_log.out", std::ios::out | std::ios::app);

    outfile << "Tests:" << std::endl
            << "\t1: new Queue is empty" << std::endl
            << "\t2: Enqueuing makes Queue nonempty" << std::endl
            << "\t3: Enqueuing x on empty queue then peekFront returns x" << std::endl;

    outfile << Test::test1();
    outfile.close();
}

std::string Test::test1(){
    std::string result = "";
    result = "Test 1: Newly created Queue is empty: ";
    result += "PASS/FAIL";
    return result;
}
