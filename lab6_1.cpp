#include<iostream>
using namespace std;

int main()
{
    int i[100],j=0;
    do
    {
        cout << "Enter an integer: ";
        cin>>i[j];
        j++;
    }
    while(i[j-1]!=0);
    int x=0,y=0;
    for(int k=0; k<j-1; k++)
    {
        if(i[k]%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
       
    }
    cout << "#Even numbers = "<<x<<endl;
    cout << "#Odd numbers = "<<y;
    return 0;
}
