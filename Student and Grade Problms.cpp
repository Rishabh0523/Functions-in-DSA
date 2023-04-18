#include<iostream>
using namespace std;


char getGrade(int marks) {
//     if(marks >=90)
//     return 'A' ;

//     else if(marks >=80)
//     return 'B' ;

//     else if(marks >=70)
//     return 'C' ;

//     else if(marks >=60)
//     return 'D' ;

//     else if(marks >=50)
//     return 'E' ;

//     else{
//          return 'Fail' ;

switch(marks/10){

case 10 : return 'A' ; break;
case 9 : return ' B' ; break;
case 8 : return 'C' ; break;
case 7 : return 'D' ; break;
case 6 : return 'E' ; break;

default: return 'Fail'; break;

}
    }




int main()
{

int marks;
cout<<"Enter the value of marks:"<<endl;
cin>>marks;

char finalGrade =getGrade(marks);
cout<<finalGrade;

return 0;
    
}