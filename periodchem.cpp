#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<ctype.h>
#include<process.h>
#include<string.h>
#include<dos.h>
#include<fstream.h>

void element(int,int);



int i,j,g;

void frame()
    {    clrscr();
    gotoxy(15,7);
    cout<<"É";
    for(i=16;i<=65;i++)
     {
     gotoxy(i,7);
     cout<<"Í";
     }
    cout<<"»";
    gotoxy(15,17);
    cout<<"È";
    for(i=16;i<=65;i++)
     {
     gotoxy(i,17);
     cout<<"Í";
     }
    cout<<"¼";
    for(i=8;i<=16;i++)
     {
     gotoxy(15,i);
     cout<<"º";
     }
    for(i=8;i<=16;i++)
     {
     gotoxy(66,i);
     cout<<"º";
     }
    gotoxy(5,24);
    cout<<"Press Esc to Exit";
    }

void display()
{      clrscr();
 gotoxy(33,2);
 cout<<"PERIODIC TABLE"; Cout<<" PREPARED BY ARNAB DEY ";
 gotoxy(1,1);
Cou
 cout<<"É";
 for(i=2;i<=79;i++)
  {
  gotoxy(i,1);
  cout<<"Í";
  }
 cout<<"»";
 for(i=2;i<=23;i++)
  {
  gotoxy(80,i);
  cout<<"º";
  }
 gotoxy(80,24);
 cout<<"¼";
 for(i=2;i<=11;i++)
  {
  gotoxy(i,24);
  cout<<"Í";
  }
 gotoxy(1,24);
 cout<<"È";
 for(i=2;i<=23;i++)
  {
  gotoxy(1,i);
  cout<<"º";
  }
 gotoxy(12,4);
 cout<<"Ú"<<"Ä"<<"Ä"<<"¿";
 gotoxy(63,4);
 cout<<"Ú"<<"Ä"<<"Ä"<<"¿";
 gotoxy(12,5);cout<<"³";
 gotoxy(15,5);cout<<"³";
 gotoxy(63,5);cout<<"³";
 gotoxy(66,5);cout<<"³";
 gotoxy(12,6);cout<<"Ã"<<"Ä"<<"Ä"<<"´";
 gotoxy(48,6);cout<<"Ú";
 for(i=51;i<=60;i++)
  if(i%3==0)
   {
   gotoxy(i,6);
   cout<<char(194);
   }
 for(i=48;i<=66;i++)
  if(i%3!=0)
   {
   gotoxy(i,6);
   cout<<"Ä";
   }
 gotoxy(63,6);
 cout<<"Å";
 for(i=48;i<=66;i++)
  if(i%3==0)
   {
   gotoxy(i,7);
   cout<<"³";
   }
 gotoxy(12,7);cout<<"³";
 gotoxy(12,8);cout<<"Ã"<<"Ä"<<"Ä"<<"´";
 gotoxy(12,9);cout<<"³";
 gotoxy(15,9);cout<<"³";
 gotoxy(15,6);cout<<"Å"<<"Ä"<<"Ä"<<"¿";
 gotoxy(15,8);cout<<"Å"<<"Ä"<<"Ä"<<"´";
 gotoxy(18,7);cout<<"³";
 gotoxy(18,9);cout<<"³";
 gotoxy(48,8);cout<<"Ã";
 for(i=51;i<=63;i++)
  if(i%3==0)
   {
   gotoxy(i,8);
   cout<<"Å";
   }
 for(i=48;i<=66;i++)
  if(i%3!=0)
   {
   gotoxy(i,8);
   cout<<"Ä";
   }
 for(i=48;i<=66;i++)
  if(i%3==0)
   {
   gotoxy(i,9);
   cout<<"³";
   }
 gotoxy(12,10);
 cout<<"Ã";gotoxy(15,10);
 cout<<"Å";
 for(i=13;i<=66;i++)
  if(i%3!=0)
     {  gotoxy(i,10);
 cout<<"Ä";
      }for(i=18;i<=45;i++)
  if(i%3==0)
     {  gotoxy(i,10);
 cout<<char(194);
      }for(i=46;i<=63;i++)
  if(i%3==0)
     {  gotoxy(i,10);
 cout<<"Å";
      }gotoxy(18,10);
cout<<"Å";
for(i=12;i<=66;i++)
 if(i%3==0)
  for(j=10;j<=16;j++)
   if(j%2!=0)
    {  gotoxy(i,j);
      cout<<"³";
     }for(i=15;i<=63;i++)
 if(i%3==0)
  for(j=12;j<=14;j++)
   if(j%2==0)
    { gotoxy(i,j);
      cout<<"Å";
     }for(i=15;i<=63;i++)
 if(i%3==0)
  for(j=12;j<=14;j++)
   if(j%2==0)
    { gotoxy(i,j);
      cout<<"Å";
     }for(i=12;i<=66;i++)
 if(i%3==0)
  for(j=12;j<=66;j++)
   if(j%2==0)
    { gotoxy(i,j);
      cout<<"Ä";
     }for(i=15;i<=42;i++)
 if(i%3==0)
  {gotoxy(i,16);
    cout<<"Å";
   }for(i=45;i<=63;i++)
 if(i%3==0)
  { gotoxy(i,16);
    cout<<"Á";
   }for(i=12;i<=42;i++)
 if(i%3==0)
  {  gotoxy(i,17);
    cout<<"³";
   } gotoxy(12,18);
cout<<"À";
for(i=12;i<=42;i++)
 if(i%3!=0)
  {  gotoxy(i,18);
   cout<<"Ä";
  }  cout<<"Ù";
for(i=15;i<=40;i++)
 if(i%3==0)
  {  gotoxy(i,18);
   cout<<"Á";
   } for(i=6;i<=16;i++)
 if(i%2==0)
  {   gotoxy(12,i);
   cout<<"Ã";
  } for(i=6;i<=14;i++)
 if(i%2==0)
  { gotoxy(66,i);
   cout<<"´";
   }gotoxy(66,16);
cout<<"Ù";
gotoxy(12,20);
cout<<"Ú";
for(i=13;i<=23;i++)
 {gotoxy(i,20);
   cout<<"Ä";
 }for(i=24;i<=63;i++)
 if(i%3==0)
  {gotoxy(i,20);
   cout<<char(194);
  }for(i=24;i<=66;i++)
 if(i%3!=0)
  { gotoxy(i,20);
   cout<<"Ä";
   cout<<"¿";
    gotoxy(12,21);
cout<<"³";
 }
 for(i=24;i<=66;i++)
{ if(i%3==0)
  { gotoxy(i,21);
  // cout<<char(194);
  cout<<"³";
   }
}
  for(i=24;i<=66;i++)
{ if(i%3==0)
  { gotoxy(i,20);
   cout<<"Ä";
  }cout<<"¿";
  gotoxy(i,21);
cout<<"³";
}
for(i=24;i<=66;i++)
{ if(i%3==0)
  {gotoxy(i,21);
   cout<<"³";
  }gotoxy(i,22);
cout<<"Ã";
}
for(i=13;i<=23;i++)
  { gotoxy(i,22);
   cout<<"Ä";
  }
  for(i=24;i<=63;i++)
{ if(i%3==0)
  { gotoxy(i,22);
   cout<<"Å";
  }
  }
  for(i=24;i<=66;i++)
{ if(i%3!=0)
  {  gotoxy(i,22);
   cout<<"Ä";
  }  cout<<"´";
      gotoxy(12,23);
cout<<"³";}
for(i=24;i<=66;i++)
  if(i%3==0)
   {  gotoxy(i,23);
     cout<<"³";
  }   gotoxy(12,24);
cout<<"À";
for(i=13;i<=23;i++)
  {    gotoxy(i,24);
    cout<<"À";
  }    for(i=24;i<=63;i++)
 if(i%3==0)
   {  gotoxy(i,24);
     cout<<"Á";
   } for(i=24;i<=66;i++)
  if(i%3!=0)
    { gotoxy(i,24);
      cout<<"Ä";
    }cout<<"Ù";
gotoxy(15,25);
cout<<"ARROWS TO SCROLL. ENTER TO SELECT. ESC TO EXIT.";
gotoxy(13,5);
cout<<"H";
gotoxy(13,7);
cout<<"Li";
gotoxy(13,9);
cout<<"Na";
gotoxy(13,11);
cout<<"K";

gotoxy(15,7); cout<<"³";
for (i=13;i<66;i++)
 {
 gotoxy(i,14);cout<<"Ä";
 gotoxy(i,12);cout<<"Ä";
 gotoxy(i,16);cout<<"Ä";
 if(i>42) {gotoxy(i,18);cout<<"  ";}
 if(i%3==0)
  {
  gotoxy(i,14);cout<<"Å";
  gotoxy(i,12);cout<<"Å";
  gotoxy(i,16);cout<<"Å";
  if(i>42) gotoxy(i,16);cout<<"Á";
  }
 }

for (i=23;i<66;i++)
 {
 gotoxy(i,20);cout<<"Ä";
 gotoxy(i,22);cout<<"Ä";
 gotoxy(i-11,24);cout<<"Ä";
 gotoxy(i,24);cout<<"Ä";
 if(i%3==0)
  {
  gotoxy(i,20);cout<<"Â";
  gotoxy(i,22);cout<<"Å";
  gotoxy(i,24);cout<<"Á";
  }
 }
 for (i=23;i<66;i++)
 {
 if(i%3==0)
  if(i>10)
   {
   gotoxy(i,24);
   cout<<"Á";
   }
 }

for(i=67;i<=80;i++) {gotoxy(i,24);cout<<"Í";}
for(i=0;i<=10;i++) {gotoxy(i,25);cout<<" ";}
for(i=19;i<=47;i++) {gotoxy(i,9);cout<<" ";}
for(i=2;i<=5;i++) {gotoxy(61,i);cout<<" ";}

gotoxy(12,22);cout<<"Ã";
gotoxy(66,20);cout<<"¿ ";
gotoxy(12,24);cout<<"ÀÄ";
gotoxy(80,24);cout<<"¼";
gotoxy(59,9);cout<<" ";
gotoxy(56,9);cout<<" ";


gotoxy(13,13);
cout<<"Rb";
gotoxy(13,15);
cout<<"Cs";
gotoxy(13,17);
cout<<"Fr";
gotoxy(16,7);
cout<<"Be";
gotoxy(16,9);
cout<<"Mg";
gotoxy(16,11);
cout<<"Ca";
gotoxy(16,13);
cout<<"Sr";
gotoxy(16,15);
cout<<"Ba";
gotoxy(16,17);
cout<<"Ra";
gotoxy(19,11);
cout<<"Sc";
gotoxy(19,13);
cout<<"Y";
gotoxy(19,15);
cout<<"La";
gotoxy(19,17);
cout<<"Ac";
gotoxy(22,11);
cout<<"Ti";
gotoxy(22,13);
cout<<"Zr";
gotoxy(22,15);
cout<<"Hf";
gotoxy(22,17);
cout<<"Rf";
gotoxy(25,11);
cout<<"V";
gotoxy(25,13);
cout<<"Nb";
gotoxy(25,15);
cout<<"Ta";
gotoxy(25,17);
cout<<"Db";
gotoxy(28,11);
cout<<"Cr";
gotoxy(28,13);
cout<<"Mo";
gotoxy(28,15);
cout<<"W";
gotoxy(28,17);
cout<<"Sg";
gotoxy(31,11);
cout<<"Mn";
gotoxy(31,13);
cout<<"Tc";
gotoxy(31,15);
cout<<"Re";
gotoxy(31,17);
cout<<"Bh";
gotoxy(34,11);
cout<<"Fe";
gotoxy(34,13);
cout<<"Ru";
gotoxy(34,15);
cout<<"Os";
gotoxy(34,17);
cout<<"Hs";
gotoxy(37,11);
cout<<"Co";
gotoxy(37,13);
cout<<"Rh";
gotoxy(37,15);
cout<<"Ir";
gotoxy(37,17);
cout<<"Mt";
gotoxy(40,11);
cout<<"Ni";
gotoxy(40,13);
cout<<"Pd";
gotoxy(40,15);
cout<<"Pt";
gotoxy(40,17);
cout<<"Ds";
gotoxy(43,11);
cout<<"Cu";
gotoxy(43,13);
cout<<"Ag";
gotoxy(43,15);
cout<<"Au";
gotoxy(46,11);
cout<<"Zn";
gotoxy(46,13);
cout<<"Cd";
gotoxy(46,15);
cout<<"Hg";
gotoxy(49,7);
cout<<"B";
gotoxy(49,9);
cout<<"Al";
gotoxy(49,11);
cout<<"Ga";
gotoxy(49,13);
cout<<"In";
gotoxy(49,15);
cout<<"Tl";
gotoxy(52,7);
cout<<"C";
gotoxy(52,9);
cout<<"Si";
gotoxy(52,11);
cout<<"Ge";
gotoxy(52,13);
cout<<"Sn";
gotoxy(52,15);
cout<<"Pb";
gotoxy(55,7);
cout<<"N";
gotoxy(55,9);
cout<<"P";
gotoxy(55,11);
cout<<"As";
gotoxy(55,13);
cout<<"Sb";
gotoxy(55,15);
cout<<"Bi";
gotoxy(58,7);
cout<<"O";
gotoxy(58,9);
cout<<"S";
gotoxy(58,11);
cout<<"Se";
gotoxy(58,13);
cout<<"Te";
gotoxy(58,15);
cout<<"Po";
gotoxy(61,7);
cout<<"F";
gotoxy(61,9);
cout<<"Cl";
gotoxy(61,11);
cout<<"Br";
gotoxy(61,13);
cout<<"I";
gotoxy(61,15);
cout<<"At";
gotoxy(64,5);
cout<<"He";
gotoxy(64,7);
cout<<"Ne";
gotoxy(64,9);
cout<<"Ar";
gotoxy(64,11);
cout<<"Kr";
gotoxy(64,13);
cout<<"Xe";
gotoxy(64,15);
cout<<"Rn";
gotoxy(13,21);
cout<<"Lanthanides";
gotoxy(25,21);
cout<<"Ce";
gotoxy(28,21);
cout<<"Pr";
gotoxy(31,21);
cout<<"Nd";
gotoxy(34,21);
cout<<"Pm";
gotoxy(37,21);
cout<<"Sm";
gotoxy(40,21);
cout<<"Eu";
gotoxy(43,21);
cout<<"Gd";
gotoxy(46,21);
cout<<"Tb";
gotoxy(49,21);
cout<<"Dy";
gotoxy(52,21);
cout<<"Ho";
gotoxy(55,21);
cout<<"Er";
gotoxy(58,21);
cout<<"Tm";
gotoxy(61,21);
cout<<"Yb";
gotoxy(64,21);
cout<<"Lu";
gotoxy(13,23);
cout<<"Actinides";
gotoxy(25,23);
cout<<"Th";
gotoxy(28,23);
cout<<"Pa";
gotoxy(31,23);
cout<<"U";
gotoxy(34,23);
cout<<"Np";
gotoxy(37,23);
cout<<"Pu";
gotoxy(40,23);
cout<<"Am";
gotoxy(43,23);
cout<<"Cm";
gotoxy(46,23);
cout<<"Bk";
gotoxy(49,23);
cout<<"Cf";
gotoxy(52,23);
cout<<"Ea";
gotoxy(55,23);
cout<<"Fm";
gotoxy(58,23);
cout<<"Md";
gotoxy(61,23);
cout<<"No";
gotoxy(64,23);
cout<<"Lr";
gotoxy(2,2);
i=2;j=2;
gotoxy(i,j);

 do
  {
  g=getch();
  if(g==80)
   {
   if(j==23) j=1;
   gotoxy(i,++j);
   }
  else if(g==77)
   {
   if(i==79) i=1;
   gotoxy(++i,j);
   }
  else if(g==75)
   {
   if(i==2) i=80;
   gotoxy(--i,j);
   }
  else if(g==72)
   {
   if(j==2)
   j=24;
   gotoxy(i,--j);
   }
  if(g==13)
   element(i,j);
  }while(g!=27);
}

void main()
 {
 clrscr();
 int gdriver=DETECT,gmode,errorcode;
 initgraph(&gdriver,&gmode,"c:\tc\bin");
 errorcode=graphresult();
 if(errorcode!=grOk)
  {
  cout<<grapherrormsg(errorcode)<<endl;
  getch();
  }
 for (int i=0;i<7;i++)
  {
  delay(100);
  clrscr();
  setbkcolor(GREEN);
  settextstyle(7,0,i);
  outtextxy(110,50," WELCOME");
  outtextxy(155,100,"  TO");
  outtextxy(100,150,"PERIODIC TABLE");
  outtextxy(80,200,"BY - HARSHA ");
  outtextxy(190,250,"AND ARNAB");
  }
 settextstyle(8,0,1);
 outtextxy(200,450,"Press Any Key To Continue ...");
 getch();
 closegraph();
 display();
 }

void element(int i,int j)
 {
 if((i==13)&&(j==5))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        1"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        1.008"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   H"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Hydrogen"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  37.1"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1312"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==13)||(i==14))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        3"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        6.941"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Li"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Lithium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  152"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 520.2"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.98"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==13)||(i==14))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        11"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        22.989"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Na"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Sodium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  186"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 495.8"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.93"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==13)||(i==14))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        19"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        39.098"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   K"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Potassium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  227"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 418.8"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.82"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==13)||(i==14))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        37"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        85.468"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Rb"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Rubidium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  248"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 403"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.82"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==13)||(i==14))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        55"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        132.906"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Cs"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Cesium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  265"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 375.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.79"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==13)||(i==14))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        87"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        223"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Fr"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Francium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 384"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.7"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==16)||(i==17))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:        4"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):        9.012"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Be"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Beryllium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  112"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 899.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.57"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==16)||(i==17))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:         12"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  24.305"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Mg"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Magnesium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  160"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 737.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.31"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==16)||(i==17))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:    20"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  40.078"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Ca"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Calcium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  197"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 589.8"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==16)||(i==17))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     38"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  87.62"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Sr"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Strontium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  215"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 549.5"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.95"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==16)||(i==17))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     56"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  137.327"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Ba"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Barium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  222"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 502.9"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.89"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==16)||(i==17))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     88"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  226"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Ra"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Radium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 509.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  0.9"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==19)||(i==20))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     21"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  44.95"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Sc"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Scandium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  162"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 631"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.36"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==19)||(i==20))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     39"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  88.906"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Y"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Yttrium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  180"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 615.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.22"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==19)||(i==20))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     57"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  138.906"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   La"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Lanthanum"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  187"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 538.1"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.1"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==19)||(i==20))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     89"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  227"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Ac"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Actinum"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 499"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.1"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==22)||(i==23))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     22"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  47.867"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Ti"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Titanium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  147"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 658"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.54"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==22)||(i==23))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     40"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  91.224"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Zr"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Zirconium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  160"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 660"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.33"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==22)||(i==23))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     72"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  178.49"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Hf"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Hafnium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  159"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 680"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==22)||(i==23))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     104"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  261"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Rf"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Rutherfordium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==25)||(i==26))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     23"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  50.942"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   V"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Vanadium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  134"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 650.3"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.63"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==25)||(i==26))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     41"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  92.906"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Nb"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Niobium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  146"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 663.8"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.6"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==25)||(i==26))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     73"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  180.948"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Ta"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Tantalum"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  146"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 761"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.5"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==25)||(i==26))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     105"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  262"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Db"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Dubnium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==28)||(i==29))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:     24"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):  51.996"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :   Cr"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Cromium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  128"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 652.8"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.66"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==28)||(i==29))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      42"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   95.94"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Mo"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Molybdenum"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  139"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 684.9"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.24"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==28)||(i==29))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      74"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   183.84"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    W"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Tungsten"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  139"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 770"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.36"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==28)||(i==29))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      106"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   263"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Sg"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Seaborgium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==31)||(i==32))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      25"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   54.938"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Mn"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Manganese"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  127"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 717.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.55"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==31)||(i==32))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      43"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   98"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Tc"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Technetium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  136"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 702.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.9"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==31)||(i==32))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      75"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   186.207"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Re"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Rhenium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  137"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 760"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.9"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==31)||(i==32))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      107"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   262"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Bh"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Bohrium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==34)||(i==35))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      26"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   55.845"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Fe"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Iron"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  126"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 759.3"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.9"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==34)||(i==35))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      44"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   101.07"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ru"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Ruthenium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  134"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 711.1"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==34)||(i==35))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      76"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   190.23"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Os"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Osmium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  135"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 840"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==34)||(i==35))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      108"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   265"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Hs"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Hassium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==37)||(i==38))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      27"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   58.933"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Co"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Cobalt"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  125"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 758.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.88"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==37)||(i==38))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      45"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   102.905"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Rh"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Rhodium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  134"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 719.8"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.28"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==37)||(i==38))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      77"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   192.217"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ir"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Iridium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  136"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 880"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==37)||(i==38))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      109"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   266"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Mt"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Meitnerium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==40)||(i==41))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      28"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   58.693"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ni"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Nickel"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  124"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 736.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.91"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==40)||(i==41))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      46"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   106.42"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Pd"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Palladnium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  137"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 804.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==40)||(i==41))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      78"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   195.078"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Pt"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Platinum"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  139"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 870"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.28"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==40)||(i==41))&&(j==17))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      110"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   271"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ds"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Darmstadtium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==43)||(i==44))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      29"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   63.546"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Cu"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Copper"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  128"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 745.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.95"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==43)||(i==44))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      47"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   101.868"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ag"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Silver"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  144"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 731"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.93"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==43)||(i==44))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      79"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   196.967"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Au"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Gold"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  144"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 890"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.54"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==46)||(i==47))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      30"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   65.39"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Zn"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Zinc"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  134"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 906.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.65"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==46)||(i==47))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      48"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   112.411"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Cd"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Cadmium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  151"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 867.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.69"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==46)||(i==47))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:      80"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):   200.59"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Hg"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Mercury"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  151"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1007"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==49)||(i==50))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                5"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                10.811"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    B"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Boron"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  85"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 800.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.04"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==49)||(i==50))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                13"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                26.982"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Al"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Aluminium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  143"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 577.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.61"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==49)||(i==50))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                31"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                69.723"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ga"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Gallium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  135"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 578.8"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.81"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==49)||(i==50))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                49"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                114.818"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    In"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Indium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  167"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 558.3"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.78"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==49)||(i==50))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                81"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):               204.383"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Tl"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Thallium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  170"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 589.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.83"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==52)||(i==53))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                6"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                12.011"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    C"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Carbon"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  77.2"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1086.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.55"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==52)||(i==53))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                14"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                28.0855"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Si"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Silicon"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  117.6"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 786.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.9"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==52)||(i==53))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                32"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                72.61"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ge"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Germanium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  122.3"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 762.1"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.01"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==52)||(i==53))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                50"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                118.71"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Sn"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Tin"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  140.5"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 708.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.88"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

/*else if(((i==52)||(i==53))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                82"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                207.2"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Pb"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Lead"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  146"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 715.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.1"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==55)||(i==56))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                 7"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                14.007"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    N"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Nitrogen"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  70"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1402.3"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  3.04"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==55)||(i==56))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                 15"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                30.974"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    P"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Phosphorus"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  110"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1011.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.19"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==55)||(i==56))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                 33"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                74.992"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    As"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Arsenic"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  120"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 946.5"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.18"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==55)||(i==56))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                 51"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                121.76"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Sb"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Antimony"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  140"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 833.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.05"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==55)||(i==56))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                 83"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                208.98"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Bi"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Bismuth"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  150"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 703.3"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.02"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==58)||(i==59))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                8"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                15.999"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    O"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Oxygen"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  73"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1313.9"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  3.44"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==58)||(i==59))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                16"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                32.066"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    S"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Sulphur"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  103"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 999.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.58"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==58)||(i==59))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                34"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                78.96"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Se"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Selenium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  119"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 940.9"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.55"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==58)||(i==59))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                52"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                127.6"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Te"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Tellurium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  142"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 869.2"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.1"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==58)||(i==59))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                84"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                209"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Po"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Polonium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  168"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 812"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==61)||(i==62))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                9"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                18.998"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    F"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Flourine"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  72"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1681"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  3.98"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==61)||(i==62))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                17"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                35.453"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Cl"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Chlorine"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  100"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1251.1"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  3.16"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==61)||(i==62))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                35"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                79.904"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Br"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Bromine"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  114"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1139.9"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.96"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==61)||(i==62))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                53"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                126.905"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    I"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Iodine"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  133"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1008.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.66"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==61)||(i==62))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                85"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                210"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    At"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Astatine"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 890"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==64)||(i==65))&&(j==5))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                2"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                4.002"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    He"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Helium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  31"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 24.58"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  ------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==64)||(i==65))&&(j==7))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                10"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                20.18"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ne"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Neon"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  71"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 2080.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  ------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==64)||(i==65))&&(j==9))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                18"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                39.948"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ar"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Argon"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  98"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1520.5"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  ------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==64)||(i==65))&&(j==11))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                36"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                83.8"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Kr"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Krypton"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  112"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1350.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==64)||(i==65))&&(j==13))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                54"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                131.29"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Xe"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Xenon"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  131"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1170.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  2.6"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==64)||(i==65))&&(j==15))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                86"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                222"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Rn"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Radon"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 1037"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }

else if(((i==25)||(i==26))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                58"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                140.116"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ce"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Cerium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  182"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 527.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.12"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==25)||(i==26))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                90"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                232.038"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Th"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Thorium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  179"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 587"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==28)||(i==29))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                59"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                140.908"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Pr"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Praseodymium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  182"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 523.2"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.13"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==28)||(i==29))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                91"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                231.036"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Pa"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Protactinium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  163"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 568"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.5"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==31)||(i==32))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                60"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                144.24"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Nd"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Neodymium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  181"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 529.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.14"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==31)||(i==32))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                92"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                238.029"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    U"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Uranium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  154"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 584"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.7"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==34)||(i==35))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                61"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):               145"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Pm"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Promethium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  183"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 535.9"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.15"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==34)||(i==35))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                93"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                237"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Np"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Neptunium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  155"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 597"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==37)||(i==38))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                62"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                150.36"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Sm"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Samarium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  180"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 543.3"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.17"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==37)||(i==38))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                94"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                244"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Pu"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Plutonium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  159"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 585"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==40)||(i==41))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                63"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                151.964"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Eu"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Europium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  208"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 546.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.12"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==40)||(i==41))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                95"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                243"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Am"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Americium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  173"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 578"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==43)||(i==44))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                64"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                157.25"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Gd"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Gadolinium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  180"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 592.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.17"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==43)||(i==44))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                96"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                247"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Cm"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Curium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  174"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 581"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==46)||(i==47))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                65"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                158.93"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Tb"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Terbium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  177"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 564.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.21"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==46)||(i==47))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                97"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                247"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Bk"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Berkelium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  170"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 601"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==49)||(i==50))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                66"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                162.5"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Dy"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Dysprosium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  178"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 571.9"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.2"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==49)||(i==50))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                98"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                251"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Cf"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Californium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  186"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 608"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==52)||(i==53))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                67"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                164.93"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Ho"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Holmium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  176"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 580.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.23"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==52)||(i==53))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                99"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                252"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Es"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Einsteinium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  186"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 619"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==55)||(i==56))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                68"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                167.26"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Er"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Erbium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  176"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 588.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.24"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==55)||(i==56))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                100"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                257"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Fm"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Fermium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 627"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==58)||(i==59))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                69"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):               168.934"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Tm"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Thulium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  176"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 596.7"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.25"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==58)||(i==59))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                101"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                258"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Md"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Mendelevium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 635"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==61)||(i==62))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                70"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                173.04"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Yb"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Ytterbium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  193"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 603.4"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.21"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==61)||(i==62))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                102"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                259"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    No"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Nobelium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 642"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.3"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==64)||(i==65))&&(j==21))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                71"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                174.967"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Lu"<<"\n";
  gotoxy(21,12);
  cout<<"Name   :   Lutetium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  174"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : 523.6"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  1.27"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }
else if(((i==64)||(i==65))&&(j==23))
 {
  clrscr();
  frame();
  gotoxy(21,9);
  cout<<"Atomic No:                103"<<"\n";
  gotoxy(21,10);
  cout<<"Atomic Mass(amu):                262"<<"\n";
  gotoxy(21,11);
  cout<<"Symbol  :    Lr"<<"\n";
  gotoxy(21,12);

 
  cout<<"Name   :   Lawrencium"<<"\n";
  gotoxy(21,13);
  cout<<"Atomic Radius (pm) :  -------"<<"\n";
  gotoxy(21,14);
  cout<<"1st Ionisation Energy (kJ/mol) : -------"<<"\n";
  gotoxy(21,15);
  cout<<"Electronegativity    :  -------"<<"\n";
  gotoxy(30,20);
  cout<<"Press Any Key To Return......";
 }*/
char key;
key=getch();
if(key==27) exit(0);
else display();
}