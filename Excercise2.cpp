#include <iostream.h>
#include <conio.h>

class Counter
{
private:
unsigned int count; public:
Counter() : count(0)
{ }

Counter(int c)
{
count = c;
}

Counter (Counter &c)
{
count = c.count;
}

void inc_count()
{


count++;
}

void dec()
{
count--;
}

void show()
{
cout<<"Count is "<<count<<endl;
}

~Counter()
{
cout<<"Object destroyed\n";
}
};

int main()
{
Counter c1, c2(20),c3(c2); clrscr();
c1.inc_count(); c2.inc_count(); c3.dec();
c1.show();
c2.show();
c3.show();
getch(); return 0;
}
