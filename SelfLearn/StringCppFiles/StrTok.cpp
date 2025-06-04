#include<iostream>
#include<cstring>
using namespace std;

char s1[20]="x=10;z=20;y=30;";
char *token=strtok(s1, "=;");

while(token!=NULL) {
    cout<<token<<endl;
    token=strtok(NULL,  "=;");
}
