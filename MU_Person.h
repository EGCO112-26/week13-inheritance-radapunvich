#ifndef MU_PERSON_H
#define MU_PERSON_H
#include "Thai_person.h"
#include "NODE.h"
#include <string>

class MU_person : public Thai_person, public NODE {
protected:
    long id;
    string name;
public:
    // Pass nid to Thai_person and mid to NODE data
    MU_person(long mid = 112, string n = "Prapaporn", long nid = 0) 
        : Thai_person(nid), NODE(mid) { 
        id = mid;
        name = n;
        cout << "MU person constructor " << id << endl;
    }
    
    virtual ~MU_person() {
        cout << "Node " << id << " is being deleted" << endl;
    }

    
    void display_person() {
        display_thai(); 
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};
#endif