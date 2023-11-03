#include<iostream>
using namespace std;

int main ()

{
    
    
    string type;
    
    
    cout<<"Enter a datatyep to check it's size: ";
    cin>>type;
    
    if( type == "Integer" )
    cout<<"The size of data is :"<<sizeof(int)<<endl;
    
    else if( type == "Float" )
    cout<<"The size of data is :"<<sizeof(float)<<endl;

    
    else if( type == "Dobule" )
    cout<<"The size of data is :"<<sizeof(double)<<endl;
    
    
    else if( type == "Long" )
    cout<<"The size of data is :"<<sizeof(long)<<endl;
    
    
    else if( type == "Character" )
    cout<<"The size of "<<type<<"data is :"<<sizeof(char)<<endl;
    
    else
    cout<<"Kindly chose one of the following"<<endl;
    cout<<"Integer, Long, Character, Float, Dobule"<<endl;
    
    cin>>type;
    if( type == "Integer" )
    cout<<"The size of data is :"<<sizeof(int)<<endl;
    
    else if( type == "Float" )
    cout<<"The size of data is :"<<sizeof(float)<<endl;

    
    else if( type == "Dobule" )
    cout<<"The size of data is :"<<sizeof(double)<<endl;
    
    
    else if( type == "Long" )
    cout<<"The size of data is :"<<sizeof(long)<<endl;
    
    
    else if( type == "Character" )
    cout<<"The size of "<<type<<" datatype is :"<<sizeof(char)<<endl;
    
    
    return 0;
}