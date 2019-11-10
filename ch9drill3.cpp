#include "std_lib_facilities.h"


class Date {
	int y, m, d;
public:
	Date(int y, int m, int d);
	void add_day(int n);
	int month() { return m; }
	int day() { return d; }
	int year() { return y; }
};

 Date::Date(int yy, int mm, int dd) // constructor
            :y{yy}, m{mm}, d{dd}
 {
	if (m < 1 || m > 12) {cout<<"nincs ilyen szamu honap!"<<endl;}
	if (d < 1 || d > 31) {cout<<"nincs ilyen szamu nap!"<<endl;}
}

void Date::add_day(int n) {
	d = d+n;
}

void f(){
        Date today( 1970,5,1);
        cout<<"Today:"<<today.year()<<","<<today.month()<<","<<today.day()<<endl;
        today.add_day(1);
        cout<<"Today:"<<today.year()<<","<<today.month()<<","<<today.day()<<endl;



}
int main()
{

    f();


}
