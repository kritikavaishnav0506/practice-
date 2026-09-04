#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int A,P,T;
    float AD,S;

    cout<<"Attendance Report"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<left<<setw(25)<<"Total Students"<<" :";
    cin>>T;
    cout<<left<<setw(25)<<"Present Today"<<" :";
    cin>>P;
    cout<<left<<setw(25)<<"Absent Today"<<" :";
    cin>>A;
    cout<<left<<setw(25)<<"Attendance%"<<" :";
    cin>>AD;
    cout<<left<<setw(25)<<"Status"<<" :";
    cin>>S;
}
