#ifndef NODE_H
#define NODE_H
#include <iostream>

class NODE {
protected:
    int data;
    NODE* next;
public:
    NODE(int d) { 
        data = d; 
        next = nullptr; 
    }
    virtual void show_node() { 
        std::cout << " Node data:" << data << std::endl; 
    }
    void insert(NODE*& hol) { next = hol; }
    NODE* move_next() { return next; }
    virtual double get_gpa() { return 0.0; } 
    virtual ~NODE() { }
};
#endif