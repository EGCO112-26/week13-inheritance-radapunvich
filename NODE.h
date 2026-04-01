#ifndef NODE_H
#define NODE_H
#include <iostream>

class NODE {
    int data; 
    NODE* next;
public:
    // 1. The Constructor (Ends with a closing brace)
    NODE(int d) { 
        data = d; 
        next = nullptr; 
    }

    // 2. The virtual function (Must be outside the constructor)
    virtual double get_gpa() { return 0.0; }

    virtual void show_node() { std::cout << "Node data: " << data << std::endl; }
    void insert(NODE*& hol) { next = hol; }
    NODE* move_next() { return next; }
    virtual ~NODE() { }
};
#endif