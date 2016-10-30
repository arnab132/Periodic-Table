//CALENDER PROGRAM 



#include<iostream.h>

#include<conio.h>

int showmonth(int m,int y,int n);

int main()

{         char x;

          x='y';

          while(x=='y')

          {

          int n,y;

          cout<<"Enter any year :- ";

          cin>>y;

          cout<<"\n\n\n\t\tCALENDAR OF THE YEAR  ";

          cout<<y<<endl;

          n=(y-1)*(365+0.25-0.01+0.0025);

          n++;

          for(int k=1;k<=12;k++)

          {

          n=showmonth(k,y,n);

          }

          cout<<"If you want to continue press 'y'\n Enter here:-  ";

          cin>>x;

          }

          getch();

          return 0;

}

int showmonth(int m,int y,int n)

{

       int d=1,s=1,k=31,p;

       switch(m)

       {

 case 1 :cout<<"\nJANUARY\n";

        k=31;

        break;

 case 2 :cout<<"\nFEBRUARY\n";

        if(((y%4==0)&&(y%100!=0))||(y%400==0))

        k=29;

        else

        k=28;

        break;

 case 3: cout<<"\nMARCH\n";

        k=31;

        break;

 case 4: cout<<"\nAPRIL\n";

        k=30;

        break;

 case 5:cout<<"\nMAY\n";

        k=31;

        break;

 case 6:cout<<"\nJUNE\n";

        k=30;

        break;

 case 7:cout<<"\nJULY\n";

        k=31;

        break;

 case 8:cout<<"\nAUGUST\n";

        k=31;

        break;

 case 9:cout<<"\nSEPTEMBER\n";

        k=30;

        break;

 case 10:cout<<"\nOCTOBER\n";

        k=31;

        break;

 case 11:cout<<"\nNOVEMBER\n";

        k=30;

        break;

 case 12:cout<<"\nDECEMBER\n";

        k=31;

        break;     

} 

cout<<endl<<y<<endl;   



n=n%7; 

cout<<"\n-----------------------------------------------------\n";       

cout<<"SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\t\n";

cout<<"\n-----------------------------------------------------\n";

while(s<=n)

{

        cout<<"\t";

        s++;

}

while((n<7)&&(d<=k))

{

while((n<7)&&(d<=k))

{

cout<<d<<"\t";

n++;

d++;

}

cout<<"\n";

p=n;

n=0;

}

cout<<"\n-----------------------------------------------------\n";

return(p);

}  
