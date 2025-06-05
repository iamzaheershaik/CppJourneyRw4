#include<iostream>
using namespace std;
void Grade(int Total_marks) {
    if (Total_marks>=90 && Total_marks<=101) {
        cout<<"You Got A+ Grade Congrats"<<endl;
    }else if (Total_marks>=80 && Total_marks<=89){
        cout<<"You Got A Grade Do Work More  To A+"<<endl;
    }else if (Total_marks>=70 && Total_marks<=79){
        cout<<"You Got B+ Work Atleast You Need 80 Marks To get Placed"<<endl;
    }else {
        cout<<"You Will Get Fail With Marks You Got B Grade"<<endl;
    }
}
int main() {
    int num;
    cout<<"Enter the Total Marks"<<endl;
    cin>>num;
    Grade(num);
    return 0;
}
