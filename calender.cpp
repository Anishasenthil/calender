#include<iostream>
#include<iomanip>
using namespace std ;

int leap(int yr)
{
    if(((yr % 4 == 0) && (yr % 100 != 0)) || ((yr % 400 == 0)))
        return 29 ;
    else
        return 28 ;
}
int calculatedays(int month,int year)
{
    int d2 = 0 ;
    if(month == 2)
    {
       d2 = leap(year) ;
        return d2 ;
    }

    else if ((month == 1) || (month == 3) || (month ==5) || (month == 7) || (month == 8) || (month == 10) || (month ==12))
    {
        return 31 ;
    }

    else
    {
       return 30 ;
    }


}


void display (int month ,int year)
{
    int totalday = 0 , count  = 0, i = 0,j = 0,date = 0 , ans1 = 0, q = 0 , ans2 = 0 , ans3 = 0,ans4 = 0,space = 0;


 totalday = calculatedays(month , year)  ;
 cout << endl << endl ;
 //// find day
 date = 1;
    q = year /4;
    ans1=q+year+date;
    if(month == 1){
        ans2=7;
    }
    else if(month == 2){
        ans2=3;
    }
    else if(month == 3){
        ans2=3;
    }
    else if(month == 4){
        ans2=6;
    }
    else if(month == 5){
        ans2=1;
    }
    else if(month == 6){
        ans2=4;
    }
    else if(month == 7){
        ans2=6;
    }
    else if(month == 8){
        ans2=2;
    }
    else if(month == 9){
        ans2=5;
    }
    else if(month == 10){
        ans2=7;
    }
    else if(month == 11){
        ans2=3;
    }
    else if(month == 12){
        ans2=5;
    }
    else{
        cout << "undefined month ";
    }
    ans3=ans1+ans2;
    ans4=ans3%7;

    if(ans4 == 0){
        space = 5;
    }
    if(ans4 == 1){
        space = 6;
    }
    if(ans4 == 2){
        space = 0;
    }
    if(ans4 == 3){
         space = 1;
    }
    if(ans4 == 4){
         space = 2;
    }
    if(ans4 == 5){
         space = 3;
    }
    if(ans4 == 6){
         space = 4;
    }


 cout<<"               "<<month<<" / "<< year <<  endl<<endl ;



 cout << "   sun  mon  tue  wed  thu  fri  sat "<<endl<<endl;
 cout<<"  __________________________________"<<endl;
cout<<endl;

for( i = 0; i <space ; ++i)
{
    cout<<"     ";
    count++;
}

for( j = 1; j<=totalday ; ++j)
{
    cout<<setw(5)<<j;
    count++;
    if(count >6)
    {
        cout<<endl;
        count = 0;
    }

}
 cout<<endl;
 cout<<"  __________________________________"<<endl;

}



int main()
{

    int month = 0, year = 0;
    cout <<  "   Enter the  Month =   ";
    cin >> month ;
    cout << "   Enter the Year =   ";
    cin >> year ;

    display(month,year) ;

    return(0);
}



