#include<std_lib_facilities.h>
using namespace std;

struct Date {
          int y, m, d;                            // year, month, day
          Date(int yy, int mm, int dd);      // check for valid date and initialize
          void add_day(int n);
          void f();         // increase the Date by n days
          void tomorow();
};

 Date::Date(int yy, int mm, int dd)         // constructor
          :y{yy}, m{mm}, d{dd}
 {
	if (m < 1 || m > 12) {cout<<"nincs ilyen szamu honap!"<<endl;}
	if (d < 1 || d > 31) {cout<<"nincs ilyen szamu nap!"<<endl;}
}
void Date::add_day(int n) {
	d = d+n;
}
void f()
{
          Date today(2008,3,30);
          // . . .
          cout<<today.y<<"."<<today.m<<"."<<today.d<<endl;               // use today
          // . . .
          //init_day(today);
          // . . .
          Date tomorrow(2008,3,30);
          tomorrow.y = today.y;
          tomorrow.m = today.m;
          tomorrow.d = today.d+1;        // add 1 to today
          cout<<tomorrow.y<<"."<<tomorrow.m<<"."<<tomorrow.d;       // use tomorrow
}


int main()
{
    f();

}
