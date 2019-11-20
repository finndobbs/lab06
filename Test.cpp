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
    std::cout << "Test log written to ./test_log.out\n";
    std::ofstream outfile;
    outfile.open("test_log.out", std::ios::out | std::ios::app);

    outfile << Test::test1();
    outfile << Test::test2();
    outfile << Test::test3();
    outfile << Test::test4();
    outfile << std::endl;
    outfile.close();
}

std::string Test::test1(){
    std::string result = "";

    result = "\nTest 1: Constructor: ";
    result += "\n\tTest 1.1: Newly created Queue is empty: ";

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
    std::string result = "\nTest 2: enqueue(): ";
    result += "\n\tTest 2.1: Enqueing a value makes Queue nonempty: ";

    Queue tq;
    tq.enqueue(1);
    if (tq.isEmpty()){
        result += "FAIL";
    } else{
        result += "PASS";
    }
    tq.~Queue();
    result += "\n\tTest 2.2: Enqueing two values makes Queue nonempty: ";

    Queue tq1;
    tq1.enqueue(1);
    tq1.enqueue(2);
    if (tq1.isEmpty()){
        result += "FAIL";
    } else{
        result += "PASS";
    }
    tq1.~Queue();
    return result;
}

std::string Test::test3(){
    std::string result = "\nTest 3: peekFront():";
    result += "\n\tTest 3.1: Enqueing 3 on empty queue then peekFront returns 3: ";

    Queue tq;
    tq.enqueue(3);

    if (tq.peekFront() == 3){
        result += "PASS";
    } else{
        result += "FAIL";
    }
    tq.~Queue();
    result += "\n\tTest 3.2: Enqueing 3 then 9 on empty queue then peekFront returns 3: ";

    Queue tq1;
    tq1.enqueue(3);

    if (tq1.peekFront() == 3){
        result += "PASS";
    } else{
        result += "FAIL";
    }
    tq1.~Queue();

    result += "\n\tTest 3.3: peekfFront() on empty queue should throw runtime_error: ";

    bool epf = false;
    Queue tq2;
    try{
        tq2.peekFront();
    }
    catch(std::runtime_error){
        result += "PASS";
        epf = true;
    }
    if(!epf){
        result += "FAIL";
    }
    tq2.~Queue();

    return result;
}

std::string Test::test4(){
    std::string result = "\nTest 4: dequeue():";
    result += "\n\tTest 4.1: enqueuing on empty queue and dequeuing should leave queue empty: ";

    Queue tq;
    tq.enqueue(3);
    tq.dequeue();

    if (tq.isEmpty()){
        result += "PASS";
    } else{
        result += "FAIL";
    }
    tq.~Queue();

    result += "\n\tTest 4.2: dequeuing on empty queue should throw runtime_error: ";

    bool edq = false;
    Queue tq1;
    try{
        tq1.dequeue();
    }
    catch(std::runtime_error){
        result += "PASS";
        edq = true;
    }
    if(!edq){
        result += "FAIL";
    }
    tq1.~Queue();

    result += "\n\tTest 4.3: enqueueing 1, dequeue should return int: ";

    Queue tq2;
    tq2.enqueue(1);
    if (typeid(tq2.dequeue()) == typeid(int)){
        result += "PASS";
    } else{
        result += "FAIL";
    }
    tq2.~Queue();
    return result;
}
