#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
     NODE* t=hol;
    while(hol != NULL){
        t = hol;        
        hol = hol->move_next(); 
        delete t;        
    }
    
}
//friend void highestGPA(NODE*);
void LL::top(){
     if(hol==NULL){
          cout<<"List is empty"<<endl;
     }
     NODE* t=hol; //ใช้วน
     NODE* max=hol;//เก็บตน.สูงสุด

     while(t != NULL){
          if (t->get_gpa() > max->get_gpa()) {
            max= t; // เปลี่ยนไปจำโหนดใหม่ที่คะแนนสูงกว่า
        }
        t = t->move_next();
     }
     cout << "The highest GPA student is" << endl;
     max->show_node();

}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
          t->show_node();
          t=t->move_next();

     }
}
void LL::add_node(NODE *&A){
     if(hol==NULL){
          hol=A;
     }else{
          A->insert(hol);
          hol = A;
     }
       size++;

 }
