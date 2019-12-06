
/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Red Hat, Inc. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a,b,c,ch;
    bool exit=false;
    while(!exit)
    {
        cout<<"Press 1:To Add "<<endl<<" Press 2: To Sub "<<endl<<"Press 3: To Mul "<<endl<<" Press 4: To Divide"<<endl<<"Press 5: To Exit"<<endl<<" Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter two numbers"<<endl;
                   cin>>a>>b;
                    c=a+b;
                   cout<<"Addition of numbers is "<<c<<endl;
                break;
            case 2: cout<<"Enter two numbers"<<endl;
                   cin>>a>>b;
                    c=a-b;
                   cout<<"Subtraction of numbers is "<<c<<endl;
                break;
            case 3: cout<<"Enter two numbers"<<endl;
                   cin>>a>>b;
                    c=a*b;
                   cout<<"Multiplication of numbers is "<<c<<endl;
                break;
            case 4: cout<<"Enter two numbers"<<endl;
                   cin>>a>>b;
                    c=a/b;
                   cout<<"Division of numbers is "<<c<<endl;
                break;
            case 5: exit=true;
                    break;
        }
    }

    return 0;
}
