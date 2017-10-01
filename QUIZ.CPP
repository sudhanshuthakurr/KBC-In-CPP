Quiz by Sudhanshu Singh

#include<iostream .h>
#include<conio .h>
#include<string .h>
#include<stdlib .h>
#include<stdio .h>
#include<ctype .h>
#include<process .h>
#include<dos .h>
class quiz2
{
public: void ques();   void set1();   void ques1();  void ques2();
	void ques3();  void ques4();  void ques5();  void ques6();
	void ques7();  void ques8();  void ques9();  void ques10();
	void ques11(); void ques12(); void ques13(); void ques14();
	void ques15(); void ques16(); void fifty1(); void fifty2();
	void fifty3(); void fifty4(); void fifty5(); void fifty6();
	void fifty7(); void fifty8(); void fifty9(); void fifty10();
	void fifty11();void fifty12();void fifty13();void fifty14();
	void fifty15();void fifty16();void option(); void flip();
	void res(char s[2]); void phone(); void points(); void pts1();
	void pts2(); void pts3(); void pts4(); void pts5(); void pts6();
	void pts7(); void pts8(); void pts9(); void pts10();void pts11();
	void pts12();void pts13();void pts14();void pts15();void display();
}s2;
long int pts;
int t=0,c=1,flag=1,e=0,f=0,k=0,op,gh=0;
char ans[1],w,g,s,h,m,rs[2],name[50];

void main()
{
clrscr();
int age,q;
gotoxy(20,10);
textbackground(BLACK);
textcolor(YELLOW);
cprintf("\n THIS IS A QUIZ GAME ");
cout< <"\n\n\n FIRST ANSWER THE FOLLOWING QUESTIONS TO PLAY THE GAME ";
cout<<"\n ENTER THE NAME:-";
gets(name);
strupr(name);
cout<<"\n ENTER THE AGE:-";
cin>>age;
if(age>=17 && age< =55)
  {
  q=1;
  }
else
  {
  q=2;
  }
switch(q)
 {
 case 1: s2.set1();
	 break;
 case 2: cout<<"\a\a\a NOT ELIGIBLE \a\a\a";
 
 }
getch();

void quiz2::set1()
{
clrscr();
cout<<"\n THIS IS YOUR ELIGIBILITY QUESTION ";
cout<<"\n\n\n THE PROVISIONAL GOVERNMENT OF INDEPENDENT ";
cout<<"INDIA WAS FORMED AT ............................ ";
cout<<"\n (a) TOKYO"<<"\t (b) SINGAPORE ";
cout<<"\n (c) JAKARTA"<<"\t (d)KUALA LUMPUR";
char rs[]="b";
cout<<"\n Enter your answer:-";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
if(t==0)
  {
   clrscr();
   cout< <"\n\a YOU ARE QUALIFIED \a";
   gotoxy(50,22);
   cout<<"\n ******************************************************";
   cout<<"\n ** WELCOME TO  Kaun Banega Crorepati......**By Sudhanshu Singh**";
   cout<<"\n *******************************************************";
   cout<<"\n\n\n HERE YOU WILL BE ASKED A QUESTION AND FOUR OPTIONS";
   cout<<"\nWILL BE THERE, IN WHICH THREE ARE WRONG AND ONLY ONE";
   cout<<"\nIS CORRECT.YOU HAVE TO GIVE THE CORRECT ANSWER ";
   cout<<"\nYOU HAVE THREE FIFTY-FIFTY HELPLINES IN WHICH THERE ";
   cout<<"\nWILL BE ONLY TWO OPTIONS OF WHICH ONLY ONE IS  CORRECT";
   cout<<"\nYOU HAVE TO GIVE THE CORRECT ANSWER ";
   cout<<"\nANY WRONG ANSWER MEANS YOU FINISH THE GAME THERE";
   cout<<"\n YOU CAN ALSO USE A 'FLIP OPTION' IN WHICH YOU ";
   cout<<"\n CAN CHANGE THE QUESTION IF YOU WISH ";
   cout<<"\n YOU CAN ALSO USE 'CONSULT YOUR FRIEND' OPTION IN WHICH YOU CAN ";
   cout<<"\n CONSULT YOUR FRIEND IN 30 SECONDS ";
   cout<<"\n ******** YOU CAN TAKE ONLY ONE 50-50 HELP LINES *********";
   cout<<"\n ******** YOU CAN USE FLIP ONLY ONCE ******** ";
   cout<<"\n ******** YOU CAN TAKE 1 LIFELINE IN 1 QUESTION ******";
   cout<<"\n\n\n\n\nPRESS ENTER TO START THE GAME ";
   getch();
   s2.ques1();
  }
else
  {
   cout<<"\n\a\a\a UNSUCCESSFUL\a\a\a";
   cout<<"\n THE CORRECT ANSWER IS:"<<rs;
   cout<<"\n BETTER LUCK NEXT TIME ";
   getch();
  }
}
//**********QUESTION1
void quiz2::ques1()
{
clrscr();
pts=1000;
s2.ques();
cout<<"\n THE CHIEF AIRCRAFT MANUFACTURING ESTABLISHMENT IS:- ";
cout<<"\n (a) BANGALORE "<<"\t(b) NASIK ";
cout<<"\n (c) KANPUR " <<"\t (d) BARRACKPORE ";
char rs[]="a";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty1();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques2();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques2();
getch();
}
void quiz2::fifty1()
{
clrscr();
cout< <"\n THE CHIEF AIRCRAFT MANUFACTURING ESTABLISHMENT IS:- ";
cout<<"\n (a) BANGALORE "<<"\t(b) NASIK ";
}
//**********QUESTION2
void quiz2::ques2()
{
clrscr();
pts=2000;
s2.ques();
cout<<"\n THE NAME OF THE BIRD SANCTUARY AT BHARATPUR IS..";
cout<<"\n (a) Bhansrod Garh Sanctuary "<<"\t (b) Darrah Sanctuary";
cout<<"\n (c) Ghana Sanctuary "<<"\t (d) Ghat Prabha Sanctuary ";
char rs[]="c";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty2();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques3();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques3();
getch();
}
void quiz2::fifty2()
{
clrscr();
cout< <"\n THE NAME OF THE BIRD SANCTUARY AT BHARATPUR IS..";
cout<<"\n (c) Ghana Sanctuary "<<"\t (d) Ghat Prabha Sanctuary ";
}
//**********QUESTION3
void quiz2::ques3()
{
clrscr();
pts=3000;
s2.ques();
cout<<"\n WHO IS KNOWN AS THE FATHER OF GEOMETRY ?";
cout<<"\n (a) Kepler "<<"\t (b) Euclid ";
cout<<"\n (c) Pythagoras "<<"\t (d) Newton ";
char rs[]="b";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty3();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques4();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques4();
getch();
}
void quiz2::fifty3()
{
clrscr();
cout< <"\n WHO IS KNOWN AS THE FATHER OF GEOMETRY ?";
cout<<"\n (a) Kepler "<<"\t (b) Euclid ";
}
//**********QUESTION4
void quiz2::ques4()
{
clrscr();
pts=5000;
s2.ques();
cout<<"\n WHO RECEIVED THE PRIZE OF 'MAN OF THE TOURNAMENT' IN  CRICKET ";
cout<<"\n WORLD CUP 2004 ";
cout<<"\n (a) Sachin Tendulkar "<<"\t (b) Glenn Mcgrath ";
cout<<"\n (c) Mathew Hayden "<<"\t (d) Rahul Dravid ";
char rs[]="a";
s2.option();
if(flag>0)
  {
 
  if(op==1)
    {
    flag--;
    s2.fifty4();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques5();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques5();
getch();
}
void quiz2::fifty4()
{
clrscr();
cout< <"\n WHO RECEIVED THE PRIZE OF 'MAN OF THE TOURNAMENT' IN  CRICKET ";
cout<<"WORLD CUP 2004 ";
cout<<"\n (a) Sachin Tendulkar "<<"\t (b) Glenn Mcgrath ";
}
//**********QUESTION5
void quiz2::ques5()
{
clrscr();
pts=10000;
s2.ques();
cout<<"\n THE DISEASE CAUSED IN APPLE BY BACTERIA IS..";
cout<<"\n (a) Late Blight "<<"\t (b) Black Rot ";
cout<<"\n (c) Ring Disease "<<" \t (d) Fire Blight Disease ";
char rs[]="d";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty5();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques6();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques6();
getch();
}
void quiz2::fifty5()
{
clrscr();
cout< <"\n THE DISEASE CAUSED IN APPLE BY BACTERIA IS..";
cout<<"\n (c) Ring Disease "<<" \t (d) Fire Blight Disease ";
}
//**********QUESTION6
void quiz2::ques6()
{
clrscr();
pts=20000;
s2.ques();
cout<<"\n BLOOD CALCIUM LEVEL CAN BE INCREASED BY ADMINISTRATION OF ... ";
cout<<"\n (a) Glucagon "<<"\t (b) Parathormone ";
cout<<"\n (c) Thyroxine "<<"\t (d) Calcitonin ";
char rs[]="b";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty6();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques7();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques7();
getch();
}
void quiz2::fifty6()
{
clrscr();
cout< <"\n BLOOD CALCIUM LEVEL CAN BE INCREASED BY ADMINISTRATION OF ... ";
cout<<"\n (a) Glucagon "<<"\t (b) Parathormone ";
}
//**********QUESTION7
void quiz2::ques7()
{
clrscr();
pts=40000;
s2.ques();
cout<<"\n AN ELEMENT E FROM A SOLID OXIDE WHICH DISSOLVES ";
cout<<"\n IN WATER TO GIVE AN ACIDIC SOLUTION.'E' IS...";
cout<<"\n (a) Hydrogen "<<"\t (b) Phosphorus. ";
cout<<"\n (c) Magnesium "<<"\t (d) Nitrogen ";
char rs[]="b";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty7();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques8();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques8();
getch();
}
void quiz2::fifty7()
{
clrscr();
cout< <"\n AN ELEMENT E FROM A SOLID OXIDE WHICH DISSOLVES ";
cout<<"\n IN WATER TO GIVE AN ACIDIC SOLUTION.'E' IS...";
cout<<"\n (a) Hydrogen "<<"\t (b) Phosphorus ";
}
//**********QUESTION8
void quiz2::ques8()
{
clrscr();
pts=80000;
s2.ques();
cout<<"\n EZRA CUP IS ASSOCIATED WITH... ";
cout<<"\n (a) Rowing "<<"\t (b) Golf ";
cout<<"\n (c) Air races  "<<"\t (d) Polo ";
char rs[]="d";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty8();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques9();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques9();
getch();
}
void quiz2::fifty8()
{
clrscr();
cout< <"\n EZRA CUP IS ASSOCIATED WITH... ";
cout<<"\n (c) Air races  "<<"\t (d) Polo ";
}
//**********QUESTION9
void quiz2::ques9()
{
clrscr();
pts=160000;
s2.ques();
cout<<"\n THE HEAD QUATERS OF'ILO' IS LOCATED IN...";
cout<<"\n (a) Geneva "<<" \t (b) Hague ";
cout<<"\n (c) New York "<< "\t (d) Rome ";
char rs[]="a";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty9();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques10();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques10();
getch();
}
void quiz2::fifty9()
{
clrscr();
cout< <"\n THE HEAD QUATERS OF'ILO' IS LOCATED IN...";
cout<<"\n (a) Geneva "<<" \t (b) Hague ";
}
//**********QUESTION10
void quiz2::ques10()
{
clrscr();
pts=320000;
s2.ques();
cout<<"\n WHAT IS 8th OCTOBER CELEBRATED FOR ...";
cout<<"\n (a) Army Day "<<"\t (b) UNO Day ";
cout<<"\n (c) Air Force Day "<<"\t (d) Navy Day ";
char rs[]="c";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty10();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques11();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques11();
getch();
}
void quiz2::fifty10()
{
clrscr();
cout< <"\n WHAT IS 8th OCTOBER CELEBRATED FOR ...";
cout<<"\n (c) Air Force Day "<<"\t (d) Navy Day ";
}
//**********QUESTION11
void quiz2::ques11()
{
clrscr();
pts=640000;
s2.ques();
cout<<"\n WHAT IS THE NATIONAL EMBLEM OF DENMARK ";
cout<<"\n (a) Lily "<<"\t (b) Rose ";
cout<<"\n (c) Beach "<<"\t (d) Eagle ";
char rs[]="c";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty11();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques12();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques12();
getch();
}
void quiz2::fifty11()
{
clrscr();
cout< <"\n WHAT IS THE NATIONAL EMBLEM OF DENMARK ";
cout<<"\n (c) Beach "<<"\t (d) Eagle ";
}
//**********QUESTION12
void quiz2::ques12()
{
clrscr();
pts=1250000;
s2.ques();
cout<<"\n IN WHICH SPORT THE WORD 'CUE'IS USED ";
cout<<"\n (a) Golf "<<"\t (b) Chess ";
cout<<"\n (c) Hockey "<<"\t (d) Billiards ";
char rs[]="d";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty12();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques13();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques13();
getch();
}
void quiz2::fifty12()
{
clrscr();
cout< <"\n IN WHICH SPORT THE WORD 'CUE'IS USED ";
cout<<"\n (c) Hockey "<<"\t (d) Billiards ";
}
//**********QUESTION13
void quiz2::ques13()
{
clrscr();
pts=2500000;
s2.ques();
cout<<"\n WHAT IS 13th OCTOBER CELEBRATED FOR ...";
cout<<"\n (a) World Thrift Day "<<"\t (b) World Poverty Day ";
cout<<"\n (c) World Disastor Reduction Day "<<"\t World Standards Day ";
char rs[]="c";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty13();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques14();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques14();
getch();
}
void quiz2::fifty13()
{
clrscr();
cout< <"\n WHAT IS 13th OCTOBER CELEBRATED FOR ...";
cout<<"\n (c) World Disastor Reduction Day "<<"\t World Standards Day ";
}
//**********QUESTION14
void quiz2::ques14()
{
clrscr();
pts=5000000;
s2.ques();
cout<<"\n HOW MANY WICKETS DID COURTNEY WALSH TAKE IN TEST CRICKET ";
cout<<"\n (a) 512 "<<"\t (b) 434 ";
cout<<"\n (c) 519 "<<"\t (d) 524 ";
char rs[]="c";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty3();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques15();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques15();
getch();
}
void quiz2::fifty14()
{
clrscr();
cout< <"\n HOW MANY WICKETS DID COURTNEY WALSH TAKE IN TEST CRICKET ";
cout<<"\n (c) 519 "<<"\t (d) 524 ";
}
//**********QUESTION15
void quiz2::ques15()
{
clrscr();
pts=10000000;
s2.ques();
cout<<"\n THE AGRICULTURAL SCIENTIST TO BE AWARDED THE ";
cout<<"NOBEL PEACE PRIZE IN 1970 WAS ?";
cout<<"\n (a) Dr.M.S.SWAMINATHAN "<<"\t (b) Dr.NORMAN ERNEST ";
cout<<"\n (c) Dr. KURT WALDHEIM "<<"\t (d) Dr.JAMES WATSON ";
char rs[]="b";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty15();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS "<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    s2.ques16();
    getch();
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
s2.ques16();
getch();
}
void quiz2::fifty15()
{
clrscr();
cout< <"\n THE AGRICULTURAL SCIENTIST TO BE AWARDED THE ";
cout<<"NOBEL PEACE PRIZE IN 1970 WAS ?";
cout<<"\n (a) Dr.M.S.SWAMINATHAN "<<"\t (b) Dr.NORMAN ERNEST ";
}
//**********QUESTION16
void quiz2::ques16()
{
clrscr();
pts=2000000;
s2.ques();
cout<<"\n 18 CARAT GOLD CONTAINS............. ";
cout<<"\n (a) 18% Gold "<<"\t (b) 25% Gold ";
cout<<"\n (c) 75% Gold "<<"\t (d) 60% Gold ";
char rs[]="c";
s2.option();
if(flag>0)
  {
  if(op==1)
    {
    flag--;
    s2.fifty16();
    }
 }
if(f&lt;1)
  {
  if(op==2)
    {
    f++;
    cout< <"\n THE CORRECT ANSWER IS:"<<rs;
    cout<<"\n PRESS ANY KEY FOR THE CHANGED QUESTION ";
    getch();
    s2.flip();
    cout<<"\n CONGRATULATIONS"<<" "<<name<<"!!!";
    cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
    cout<<"\n *************************************";
    cout<<"\n ** YOU HAVE COMPLETED THE FULL SET **";
    cout<<"\n *************************************";
    cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
    getch();
    exit(0);
    }
  }
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>ans;
strlwr(ans);
t=strcmp(ans,rs);
s2.res(rs);
cout< <"\n CONGRATULATIONS"<<" "<<name<<"!!!";
cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
cout<<"\n *************************************";
cout<<"\n ** YOU HAVE COMPLETED THE FULL SET **";
cout<<"\n *************************************";
cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
getch();
exit(0);
}
void quiz2::fifty16()
{
clrscr();
cout<<"\n 18 CARAT GOLD CONTAINS............. ";
cout<<"\n (c) 75% Gold "<<"\t (d) 60% Gold ";
}
//**********FLIP OPTION
void quiz2::flip()
{
clrscr();
int e;
char z[2];
cout<<"\n WHAT IS 2006 FOOTBALL WORLD CUP'S MASCOT ?";
cout<<"\n (a) GO LEO GO "<<"\t(b) GO FOR GOAL ";
cout<<"\n (c) GO FOR CUP "<<"\t(d) GO FOR TACKLE ";
cout<<"\n PLEASE GIVE YOUR ANSWER ";
cin>>z;
strlwr(z);
char d[]="a";
t=strcmp(d,z);
if(t==0)
  {
  cout< <"\n \a CORRECT ANSWER \a ";
  cout<<"\n YOUR SCORE IS: "<<pts;
  cout<<"\n PRESS ANY KEY FOR NEXT QUESTION ";
  getch();
  }
else
 {
 cout<<"\n \a\a\a UNSUCESSFUL \a\a\a ";
 cout<<"\n THE CORRECT ANSWER IS "<<d;
 cout<<"\n"<<name<<" THANK YOU FOR PLAYING THE GAME ";
 getch();
 exit(0);
 }
}
 
//**********RESULT
void quiz2::res(char s[2])
{
if(t==0)
  {
  cout<<"\n \a CORRECT ANSWER \a ";
  cout<<"\n PRESS ANY KEY FOR NEXT QUESTION ";
  getch();
  }
else
 {
 cout<<"\n \a\a\a UNSUCESSFUL \a\a\a ";
 cout<<"\n THE CORRECT ANSWER IS "<<s;
 cout<<"\n"<<name<<" THANK YOU FOR PLAYING THE GAME ";
 getch();
 exit(0);
 }
}
//***********PHONE YOUR FRIEND OPTION
void quiz2::phone()
{
cout<<"\n PRESS 'Y' WHEN READY ";
cin>>h;
cout< <"\n YOUR TIME STARTS NOW :";
if(h=='Y' || h=='y')
  {
  for(int d=30;d>=0;d--)
     {
     gotoxy(15,19);
     textcolor(GREEN);
     cprintf("\n YOU HAVE ");
     cout< <"\a"<<d;
     cprintf(" SECONDS LEFT ");
     delay(1000);
     }
  textcolor(YELLOW);
  }
}
//*********OPTION DISPLAY
void quiz2::option()
{
s2.points();
if(flag>0 || f&lt;1 || k&lt;1)
  {
  cout< <"\n\n\n\n **YOU CAN PRESS 0 AT ANY MOMENT OF THE GAME TO QUIT** ";
  cout<<"\n\n\n YOU HAVE THE FOLLOWING LIFELINES:";
  if(flag>0)
    {
    cout< <"\n 1.FIFTY FIFTY ";
    }
  if(f&lt;1)
    {
    cout<<"\n 2.FLIP ";
    }
  if(k&lt;1)
    {
    cout<<"\n 3.CONSULT YOUR FRIEND ";
    }
  cout<<"\n 4.NONE ";
  cout<<"\n ENTER YOUR CHOICE ";
  cin>>op;
  if(op==0)
  {
  cout< <"\n"<<name<<" THANK YOU FOR PLAYING THE GAME ";
  getch();
  exit(0);
  }
  if(op==3)
    {
    k++;
    s2.phone();
    }
 }
else
 {
 cout<<"\n\n\n\n**YOU HAVE NO LIFELINES TO USE** ";
 cout<<"\n PRESS 0 TO QUIT OR PRESS 1 TO CONTINUE ";
 cin>>op;
 if(op==0)
   {
   cout< <"\n"<<name<<" THANK YOU FOR PLAYING THE GAME ";
   getch();
   exit(0);
   }
  }
if(op==0)
  {
  cout<<"\n"<<name<<" THANK YOU FOR PLAYING THE GAME ";
  getch();
  exit(0);
 }
}
//******** POINTS DISPLAY
void quiz2::points()
{
textcolor(BROWN);
s2.display();
gotoxy(70,1);
cprintf("20000000");
gotoxy(70,2);
cprintf("10000000");
gotoxy(70,3);
cprintf("5000000");
gotoxy(70,4);
cprintf("2500000");
gotoxy(70,5);
cprintf("1250000");
gotoxy(70,6);
cprintf("640000");
gotoxy(70,7);
cprintf("320000");
gotoxy(70,8);
cprintf("160000");
gotoxy(70,9);
cprintf("80000");
gotoxy(70,10);
cprintf("40000");
gotoxy(70,11);
cprintf("20000");
gotoxy(70,12);
cprintf("10000");
gotoxy(70,13);
cprintf("5000");
gotoxy(70,14);
cprintf("3000");
gotoxy(70,15);
cprintf("2000");
gotoxy(70,16);
cprintf("1000");
if(gh==0)
  {
  textcolor(LIGHTBLUE+BLINK);
  gotoxy(70,16);
  cprintf("1000");
  }
if(gh==1)
  {
  gotoxy(70,15);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("2000");
  s2.pts1();
  }
if(gh==2)
  {
  gotoxy(70,14);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("3000");
  s2.pts2();
  }
if(gh==3)
  {
  gotoxy(70,13);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("5000");
  s2.pts3();
  }
if(gh==4)
  {
  gotoxy(70,12);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("10000");
  s2.pts4();
  }
if(gh==5)
  {
  gotoxy(70,11);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("20000");
  s2.pts5();
  }
if(gh==6)
  {
  gotoxy(70,10);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("40000");
  s2.pts6();
  }
if(gh==7)
  {
  gotoxy(70,9);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("80000");
  s2.pts7();
  }
if(gh==8)
  {
  gotoxy(70,8);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("160000");
  s2.pts8();
  }
if(gh==9)
  {
  gotoxy(70,7);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("320000");
  s2.pts9();
  }
if(gh==10)
  {
  gotoxy(70,6);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("640000");
  s2.pts10();
  }
  if(gh==11)
  {
  gotoxy(70,5);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("125000");
  s2.pts11();
  }
if(gh==12)
  {
  gotoxy(70,4);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("2500000");
  s2.pts12();
  }
if(gh==13)
  {
  gotoxy(70,3);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("5000000");
  s2.pts13();
  }
if(gh==14)
  {
  gotoxy(70,2);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("10000000");
  s2.pts14();
  }
if(gh==15)
  {
  gotoxy(70,2);
  textcolor(LIGHTBLUE+BLINK);
  cprintf("10000000");
  s2.pts15();
  }
gotoxy(12,5);
textcolor(YELLOW);
gh++;
}
void quiz2::pts1()
{
gotoxy(70,16);
textcolor(MAGENTA);
cprintf("1000");
}
void quiz2::pts2()
{
gotoxy(70,15);
textcolor(MAGENTA);
cprintf("2000");
s2.pts1();
}
void quiz2::pts3()
{
gotoxy(70,14);
textcolor(MAGENTA);
cprintf("3000");
s2.pts2();
}
void quiz2::pts4()
{
gotoxy(70,13);
textcolor(MAGENTA);
cprintf("5000");
s2.pts3();
}
void quiz2::pts5()
{
gotoxy(70,12);
textcolor(MAGENTA);
cprintf("10000");
s2.pts4();
}
void quiz2::pts6()
{
gotoxy(70,11);
textcolor(MAGENTA);
cprintf("20000");
s2.pts5();
}
void quiz2::pts7()
{
gotoxy(70,10);
textcolor(MAGENTA);
cprintf("40000");
s2.pts6();
}
void quiz2::pts8()
{
gotoxy(70,9);
textcolor(MAGENTA);
cprintf("80000");
s2.pts7();
}
void quiz2::pts9()
{
gotoxy(70,8);
textcolor(MAGENTA);
cprintf("160000");
s2.pts8();
}
void quiz2::pts10()
{
gotoxy(70,7);
textcolor(MAGENTA);
cprintf("320000");
s2.pts9();
}
void quiz2::pts11()
{
gotoxy(70,6);
textcolor(MAGENTA);
cprintf("640000");
s2.pts10();
}
void quiz2::pts12()
{
gotoxy(70,5);
textcolor(MAGENTA);
cprintf("1250000");
s2.pts11();
}
void quiz2::pts13()
{
gotoxy(70,4);
textcolor(MAGENTA);
cprintf("2500000");
s2.pts12();
}
void quiz2::pts14()
{
gotoxy(70,3);
textcolor(MAGENTA);
cprintf("5000000");
s2.pts13();
}
void quiz2::pts15()
{
gotoxy(70,2);
textcolor(MAGENTA);
cprintf("10000000");
s2.pts14();
}
void quiz2::display()
{
int i=1;
char z[]="YOUR  SCORE  STATUS ";
int p=strlen(z);
for(int j=0;j<p;j++)
   {
   gotoxy(65,i);
   cout<<z[j];
   i++;
   }
}
void quiz2::ques()
{
textcolor(GREEN);
cprintf("\n THIS IS YOUR QUESTION FOR ");
cout<<pts;
cprintf(" POINTS");
gotoxy(1,3);
cprintf("******************************************** \n");
textcolor(YELLOW);
}