#ifndef THAI_PERSON_H
#define THAI_PERSON_H
#include <iostream>
using namespace std;

class Thai_person {
private:
    long nat_id;
public:
    Thai_person(long nid = 0) {
        nat_id = nid;
        // cout << "Thai Person constructor: " << nat_id << endl;
    }
    // Step 3: Destructor
    ~Thai_person() {}

    // Step 4: display_thai
    void display_thai() {
        cout << "National ID: " << nat_id << endl;
    }
};
#endif

