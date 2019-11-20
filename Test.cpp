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

    outfile << Test::test1();
    outfile << Test::test2();
    outfile << Test::test3();
    outfile.close();
}

std::string Test::test1(){
    std::string result = "";
    result = "\nTest 1: Newly created Queue is empty: ";

    Queue tq;
    if (tq.isEmpty()){
        result += "PASS";
    } else{
        result += "FAIL";
    }

    tq.~Queue();
    return result;
}
std::string Test::test2(){
    std::string result = "";
    result = "\nTest 2: Enqueing a value makes Queue nonempty: ";

    Queue tq;
    tq.enqueue(1);
    if (tq.isEmpty()){
        result += "FAIL";
    } else{
        result += "PASS";
    }
    tq.~Queue();
    return result;
}

std::string Test::test3(){
    std::string result = "";
    result = "\nTest 3: Enqueing 3 on empty queue then peekFront return 3: ";

    Queue tq;
    tq.enqueue(3);

    if (tq.peekFront() == 3){
        result += "PASS";
    } else{
        result += "FAIL";
    }
    tq.~Queue();
    return result;
}
