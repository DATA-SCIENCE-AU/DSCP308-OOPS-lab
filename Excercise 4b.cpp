// Binary operator overloading
#include <iostream.h> #include <conio.h> 
 
class Distance 
{ 
private: 
    int feet; 
    float inches; 
public: 
Distance(): feet(0), inches(0.0) 
{

} 
Distance(int ft, float in): 
feet(ft), inches(in) 
{ 

} 
void getdist() 
{ 
    cout << "\nEnter feet: "; 
    cin >> feet; cout << "Enter inches: "; 
    cin >> inches; 
} 
void showdist() 
const 
{ 
    cout << feet << "\'-" << inches << "\""; 
} 
Distance operator + ( Distance ) const; 
}; 
 
Distance Distance::operator + (Distance d2) const 
{ 
    int f = feet + d2.feet; 
    float i = inches + d2.inches; 
    if(i >= 12.0) 
    { 
        i -= 12.0; 
        f++; 
    } 
    return Distance(f,i); 
} 
 
int main() 
{ 
    Distance dist1, dist3, dist4; 
    clrscr(); 
    dist1.getdist(); 
    Distance dist2(11, 6.25); 
    dist3 = dist1 + dist2; 
    dist4 = dist1 + dist2 + dist3; 
    cout << "\n dist1 = "; 
    dist1.showdist(); 
    cout << "\n dist2 = "; 
    dist2.showdist(); 
    cout << "\n dist3 = "; 
    dist3.showdist(); 
    cout << "\n dist4 = "; 
    dist4.showdist(); 
    getch(); 
    return 0; 
} 