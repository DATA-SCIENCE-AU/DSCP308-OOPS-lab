#include <iostream.h>
#include <conio.h>

class Counter     // Creating a Class Counter 
{
private:
    unsigned int count;     

public:

// Creating Constructors
Counter():
count(0)                        // 1.Do nothing constructor
{ 

}
Counter(int c)                 // 2. Parameter constructor
{
count = c;
}
Counter (Counter &c)          // 3. Copy  Constructor
{
count = c.count;
}

void inc_count()              // creating the method inc_count in the classs
{
count++;
}

void dec()                    // creating the method dec
{
count--;
}

void show()                   // creating the method show
{
cout<<"Count is "<<count<<endl;
}
// Creating destructors
~Counter()
{
cout<<"Object destroyed\n";
}
};

int main()
{
Counter c1, c2(20),c3(c2);           // Initialise the Class Counter
clrscr();       
c1.inc_count();                    // call  the class method using . operator
c2.inc_count(); 
c3.dec();
c1.show();
c2.show();
c3.show();
getch();
return 0;
}
