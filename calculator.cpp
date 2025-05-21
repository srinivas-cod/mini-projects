#include<iostream>
using namespace std;
class Calculator{
    private:
    int n1,n2;
    int ch;
    public:
    void menu();
};
void Calculator::menu()
{
    cout<<"_________MENU___________"<<endl;
    cout<<"Addition"<<endl;
    cout<<"Subtraction"<<endl;
    cout<<"Multiplication"<<endl;
    cout<<"Division"<<endl;

    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            cout<<"Enter the first number";
            cin>>n1;
            cout<<"Enter the second number";
            cin>>n2;
            cout<<"Result="<<n1+n2;
            break;
            }
            case 2:
            {
                cout<<"Enter the first number";
            cin>>n1;
            cout<<"Enter the second number";
            cin>>n2;
            cout<<"Result="<<n1-n2;
            break;
            }
            case 3:
            {
                cout<<"Enter the first number";
            cin>>n1;
            cout<<"Enter the second number";
            cin>>n2;
            cout<<"Result="<<n1*n2;
            break;
            }
            case 4:
            {
                cout<<"Enter the first number";
            cin>>n1;
            cout<<"Enter the second number";
            cin>>n2;
            cout<<"Result="<<n1/n2;
            break;
            }

    }
    }
int main()
{
    Calculator a;
    a.menu();
    return 0;
}

- over
:x

