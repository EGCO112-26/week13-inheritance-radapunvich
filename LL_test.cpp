#include <iostream>
#include <cstdlib>
#include "NODE.h"
#include "LL.h"
#include "student.h"
using namespace std;

int main(int argc, char *argv[]) {
    LL A;
    // argc-1 because we check i+2 inside. 
    // Loop increments by 3 because each student has: ID, GPA, Name
    for(int i = 1; i + 2 < argc; i += 3) {
        long id = atol(argv[i]);
        double gpa = atof(argv[i+1]);
        string name = argv[i+2];

        cout << "adding " << id << endl;
        // Create student and upcast to NODE pointer
        NODE *t = new student(id, gpa, name);
        A.add_node(t);
    }
    
    cout << endl;
    A.show_all();
    cout << endl;

    return 0; // LL destructor triggers here, deleting nodes
}