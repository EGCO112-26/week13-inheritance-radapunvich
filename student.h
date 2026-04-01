#ifndef student_h
#define student_h
#include "MU_Person.h"

class student : public MU_person {
private:
    double gpa; 
public:
    student(long id = 111, double g = 2.5, string n = "Nattawut", long nid = 0) 
        : MU_person(id, n, nid) {
        gpa = g;
        cout << "MU student constructor  " << gpa << endl;
    }
    
    ~student() {
      
        // Simple destructor for student specific cleanup if needed
    }

    void show_node() override { 
    cout << " Node data:" << id << endl; 
}
    
    void display() {
        display_person(); 
        cout << "Gpa: " << gpa << endl;
    }
};
#endif