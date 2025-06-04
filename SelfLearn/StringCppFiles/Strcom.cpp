#include<iostream>
#include<cstring>
using namespace std;
/*
 Three Possibilities
 S1 = S2  Prints =0;
 S1 > S2 Prints  +ve
 S1 < S2 Prints  -ve
 */
int main() {
    char s1[20]="minor";
    char s2[20]="elder";
    cout<<strcmp(s1,s2)<<endl;
    // cout<<strcmp(s3,s4)<<endl;
    // cout<<strcmp(s5,s6)<<endl;
}