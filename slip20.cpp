#include<iostream.h>
#include<conio.h>

class A
{
 int x;
public:
 void get(){cin>>x;}
 void show(){cout<<x;}
 friend void swap(A&,A&);
};

void swap(A &a,A &b)
{
 int t=a.x;
 a.x=b.x;
 b.x=t;
}

void main()
{
 A a,b;
 clrscr();

 a.get(); b.get();
 swap(a,b);

 a.show(); b.show();

 getch();
}