//Deepti Emmi
//23070123049
#include<iostream>
using namespace std;

int main(){
    int myIntVar ;
    float myFloatVar;
    char myCharVar;
    double myDoubleVar;
    string myStringVar;
    bool myBoolVar;
    cout<<"Enter an integer:";
    cin>>myIntVar;
    cout<<"Enter an float: ";
    cin>>myFloatVar;
    cout<<"Enter an char: ";
    cin>>myCharVar;
    cout<<"Enter an double: ";
    cin>>myDoubleVar;
    cout<<"Enter an string: ";
    cin>>myStringVar;
    cout<<"Enter an bool: ";
    cin>>myBoolVar;
    cout<<"int is :"<<myIntVar<<endl<<"size of integer is "<<sizeof(myIntVar)<<endl;
    cout<<"float is :"<<myFloatVar<<endl<<"size of float is "<<sizeof(myFloatVar)<<endl;
    cout<<"char is :"<<myCharVar<<endl<<"size of character is "<<sizeof(myCharVar)<<endl;
    cout<<"double is :"<<myDoubleVar<<endl<<"size of double is "<<sizeof(myDoubleVar)<<endl;
    cout<<"string is :"<<myStringVar<<endl<<"size of string is "<<sizeof(myStringVar)<<endl;
    cout<<"bool is :"<<myBoolVar<<endl<<"size of bool is "<<sizeof(myBoolVar)<<endl;
    
}

/*
Enter integer:3
Size is 4
Enter float:4.5
Size is 4
Enter char :p
Size is 1
Enter string :hello
Size is 32
Enter a double :5.66666666666666
Size is 8
Enter a boolean: 1
Size is 1
*/
