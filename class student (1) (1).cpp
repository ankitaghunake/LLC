#include<iostream>
using namespace std;
class student
{  
  public : 
            char name[20];
            int rollno;
            float marks;
           void inputdetails()
         {   
             cout<<"Enter Student name: ";
             cin>>name;
             cout<<"Enter Rollno: ";
             cin>>rollno;
             cout<<"Enter Marks: ";
             cin>>marks;
             }
             void displaydetails()
             { 
                 cout<<"Student details";
                 cout<<"Student Name: "<<name<<endl;
                 cout<<"Student Rollno: "<<rollno<<endl;
                 cout<<"Marks: "<<marks<<endl;
                 }
                 };
                 int main()
                { student s1;
                s1.name;
                s1.rollno;
                s1.marks;
                s1.inputdetails ();
                s1.displaydetails ();
                 return 0;
                 }         
