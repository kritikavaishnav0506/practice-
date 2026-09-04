#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float L,P,T;
    int D;
    cout<<"Milk Delivery Bill"<<endl;
    cout<<"---------------------------------"<<endl;


    cout<<left<<setw(15)<<"Liters per day"<<" :";
    cin>>L;
    cout<<left<<setw(15)<<"Days"<<" :";
    cin>>D;
    cout<<left<<setw(15)<<"Price"<<" :";
    cin>>P;
    cout<<left<<setw(15)<<"Total bill"<<" :";
    cin>>T;
}
