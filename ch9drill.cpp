#include<std_lib_facilities.h>
using namespace std;

struct Date {
          int y;       // year
          int m;     // month in year
          int d;      // day of month
};

void init_day(Date& dd, int y, int m, int d)
{
    if(m<1 || m>12) {cerr<<"nincs ilyen szamu honap"<<endl;}
    if(d<1 || d>31) {cerr<<"nincs ilyen szamu nap"<<endl;}

    dd.y=y;
    dd.m=m;
    dd.d=d;
}
void add_day(Date& dd, int n)
{
    dd.d=dd.d+n;
}

void azendatumom()
{

    Date today;
    init_day(today, 2014, 13, 17);
    cout<<"A datum:"<<today.y<<","<<today.m<<","<<today.d<<endl;
}
void holnap()
{
    Date tomorow;
    add_day(tomorow, 1);
    cout<<"Masnap:"<<tomorow.y<<","<<tomorow.m<<","<<tomorow.d<<endl;

}








int main()
{
    Date maidatum;

    azendatumom();
    holnap();
}
