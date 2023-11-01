#include<iostream>
using namespace std;
int main()
{
    int x;
    char c;
    string s;

    cout << "How many characters : ";
    cin >>x;
    cout << "Must have character : ";
    cin>>c;
    cout<< "Write your answer   : ";
    cin >> s;

    for(int i=0;i<x ;i++)
    {
        if(s[i]==c)
        {
            cout << "Your given word "<<s<<" has "<<x<<" character and character "<<c<<endl;
            return 0;
        }


    }
     cout<<"not found"<<endl;

}

