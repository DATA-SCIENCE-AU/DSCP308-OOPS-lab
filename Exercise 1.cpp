#include <iostream.h>
#include <conio.h>

class Distance
{
private:
  int feet;
  float inches;


public:
  void setdist(int ft, float in)
  {
    feet = ft; inches = in;
  }

  void getdist()
  {
    cout << "\nEnter feet: "; cin >> feet;
    cout << "Enter inches: "; cin >> inches;
  }

  void showdist()
  {
    cout << feet << "\'-" << inches << "\" ";
  }
};

int main()
{
  Distance dist1, dist2; 
  clrscr();
  dist1.setdist(11, 6.25);
  dist2.getdist(); 
  clrscr();
  cout << "\ndist1 = ";
  dist1.showdist(); 
  cout << "\ndist2 = "; 
  dist2.showdist(); 
  getch();
  return 0;
}
