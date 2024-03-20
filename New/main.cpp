//
//  main.cpp
//  Lab7 I want to do some change to it in local, see it will change in the remote
//
//  Created by Jasmine Zhang on 9/30/22.
//
#include"RectangleType.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x0,y0,x1,y1;
    cout<<"Rectangle APP!"<<endl;
    cout<<"Please enter x0 and y0"<<endl;
    cin>>x0;
    cin>>y0;
    cout<<"Please enter x1 and y1"<<endl;
    cin>>x1;
    cin>>y1;
    
    RectangleType myrectangle(x0,y0,x1,y1);
    
    cout<<" Rectangle information:"<<endl;
    cout<<"Width: "<<myrectangle.getWidth()<<endl;
    cout<<"Length: "<<myrectangle.getLength()<<endl;
    cout<<" Perimeter:" <<myrectangle.getPerimeter()<<endl;
    cout<<"Area: "<<myrectangle.getArea()<<endl;
    
    return 0;
}
