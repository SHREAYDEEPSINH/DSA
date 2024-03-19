#include <iostream>
#include <string.h>
using namespace std;


class Student
{
    public:
       int grid;
       char name[50];
       int age;
       char course[50];
       float percentage;


       //setter
       void setData(int g,char n[],int a,char c[],float p){
        grid=g;
        strcpy(name,"n");
        age = a;
        strcpy(course,"c");
        percentage = p;
       }

       //gerrer
       void getData(){

        cout << "GRID: " <<grid 
             << "Name: " <<name 
             << "Age: " <<age
             << "course: " <<course 
             << " percentage: " <<percentage <<endl;
       }
};


int main(){
  Student student1;

  student1.setData(123,"umang",18,"DSA",78.23);

  student1.getData();

 return 0;
}