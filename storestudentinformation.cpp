#include<iostream>
using namespace std;
#define n 10
class student
{
    private:
    char name;
    int sum, b, roll, marks[10];
    float avg;
    public:
    void input()
    {
        cout<<"name: ";
        cin>>name;
        cout<<"roll: ";
        cin>>roll;
        for(b=0;b<5;b++)
        {
            cout<<"enter marks: ";
            cin>>marks[b];
        }
        for(b=0;b<5;b++)
        {
            sum+=marks[b];
        }
    }
    void output()
    {
        cout<<"Student details are: "<<endl;
        cout<<name<<endl<<roll<<endl;
        for(b=0;b<5;b++)
        {
            cout<<"Marks for sub "<<b+1<<" is: ";
            cout<<marks[b]<<endl;
        }
        cout<<"Hence total marks is: "<<sum<<endl;
    }
};
int main()
{
    student num[n];
    int a, i;
    cout<<"Enter the number of students: ";
    cin>>a;
    for(i=0;i<a;i++)
    {
        cout<<"Enter the student "<<i+1<<" detail: "<<endl;
        num[i].input();
    }
    for(i=0;i<a;i++)
    {
        cout<<"student "<<i+1<<" detail: "<<endl;
        num[i].output();
    }
    return 0;
}