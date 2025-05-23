#include <iostream>
using namespace std;

/*
size of Array :10
Enter array elements :1
2
3
4
5
-5
-6
-7
-8
10
the array elements are :-5 -6 -7 -8
Process finished with exit code 0
 */
int main() {
    int n, sum;
    cout<<"size of Array :";
    cin>>n;
    int a[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"the array elements are :";
    for(int i=0;i<n;i++) {
        if (a[i]<0) {
            cout<<a[i]<<" ";
        }else {

        }
    }
}