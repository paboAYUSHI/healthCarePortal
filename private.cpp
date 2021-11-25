#include<iostream>
using namespace std;

 class Employee{
     int id;
    static int count; 
    public:
    void setData(void){
        cout<<"enter the id";
        cin>>id;
        count ++;
    }
    void getData(void){
        cout<<"the id of this employee is "<<id<<"and this is employee number"<<count;
        //cout<<id;
    }
 };

 int Employee :: count;
 int main(){
          Employee ayushi, juhi, hanaah;
          ayushi.setData();
          ayushi.getData();

          juhi.setData();
          juhi.getData();

          hanaah.setData();
          hanaah.getData();

        
   return 0;
}