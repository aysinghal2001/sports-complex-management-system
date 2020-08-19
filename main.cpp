#include<bits\stdc++.h>

using namespace std;


class yamuna
{
    int  age;
    char name[20];
    char sport[50];
    public:
    void aboutus(void);
    void sports(void);
    void facilities(void);
    void contactus(void);
    void membership(void);
};
class member
{
    public:
    char sport[50];
    char name[20];
    int age;
    int id;

    void getdata()
    {   //DATA OF THE CUSTOMER
        cout<<"\n\n\tEnter Your name : ";
        cin>>name;
        cout<<"\n\n\tEnter Your age(b/w 5-20) : ";
        cin>>age;
        cout<<"\n\n\tEnter your sport : ";
        cin>>sport;
        cout<<"\n\n\tEnter ID no.(any 3 digit no.): ";
        cin>>id;
    }
    void putdata()
    {
        cout<<"\t\t\t";
        cout<<id<<"\t"<<name<<"\t"<<age<<"\t"<<sport<<endl;
    }
    int getid()
    {
        return(id);
    }
    int getage()
    {
        return (age);
    }
};

member m;
member m1;
void registration();
void write_file()
{
    ofstream afile;
    afile.open("member.dat",ios::binary|ios::app);
    m.getdata();
    //COPYING THE RECORD OF THE MEMBER INTO A FILE
    afile.write((char*)&m,sizeof(m));
    afile.close();
    system("cls");
}
void read_file()
{
    system("cls");
    ifstream bfile;
    bfile.open("member.dat",ios::binary);
    cout<<"\n\n";
    while(bfile.read((char*)&m,sizeof(m)))
    {
        m.putdata();
    }
    bfile.close();
}
 void searching()
{
     system("cls");
     int p=-1;
     int n;
     ifstream cfile;
     cfile.open("member.dat",ios::binary);
     cout<<"\n Enter ID of member to be searched : ";
     cin>>n;
     cout<<"\n\n\t\t";
     while(cfile.read((char*)&m,sizeof(m)))
     {
            if(m.getid()==n)
            {
                m.putdata();
                p++;
            }
     }
     if(p==-1)
     {
        cout<<"records not found!!!!!!!!!!!!!!!!" ;
     }

     cfile.close();
}
void modify()
{
    system("cls");
    int p=-1,t=0;
    int n;
    cout<<"\n Enter ID member to be modified : ";
    cin>>n;
    cout<<"\n\n\t\t";
    fstream dfile("member.dat",ios::binary|ios::in|ios::out);
    while(dfile.read((char*)&m,sizeof(m)))
    {
        t++;
        if(m.getid()==n)
        {
            m.getdata();
            dfile.seekp((t-1)*sizeof(m),ios::beg);
            dfile.write((char*)&m,sizeof(m));
            p++;
        }
    }
    if(p==-1)
    {
        cout<<"records not found!!!!!!!!!!!!!!!!" ;
    }

    dfile.close();
}
void Delete()
{
     int p=-1;
     int n;
     ifstream efile;
     efile.open("member.dat",ios::binary);
     ofstream ffile;
     ffile.open("temp.dat",ios::binary);
     cout<<"\n Enter ID of member to be deleted : ";
     cin>>n;
     while(efile.read((char*)&m,sizeof(m)))
    {
        if(m.getid()!=n)
        {
            ffile.write((char*)&m,sizeof(m));
            p++;
        }
    }
    //DELETING THE RECORD OF THE MEMBER
    efile.close();
    ffile.close();
    remove("member.dat");
    rename("temp.dat","member.dat");
    if(p==-1)
    {
        cout<<"records not found!!!!!!!!!!!!!!!!" ;
    }
    system("cls");
}
void write_sports()
{
    ofstream ob;
    ob.open("sports.dat",ios::binary|ios::app);
    m1.getdata();
    //COPYING THE RECORD OF THE MEMBER INTO A FILE
    ob.write((char*)&m1,sizeof(m1));
    ob.close();
}
void read_sports()
{
    ifstream of;
    of.open("sports.dat",ios::binary);
    while(of.read((char*)&m1,sizeof(m1)))
    {
        m1.putdata();
    }
    of.close();
}
void yamuna::aboutus()
{

        cout<<"\n\n\t\t\t\t YAMUNA SPORTS COMPLEX \n\t\t\t";


        cout<<"\n\tYamuna Sports Academy is  one of the most proclaimed academies of"
        <<"\n\tEast Delhi.The academy  has not only employed experienced coaches"
        <<"\n\twho  have represented their country in one or the other sport but"
        <<"\n\talso  has the  privilage of producing many of the famous sporting"
        <<"\n\tlegends  who are  currently  representing us  on  national level."
        <<"\n\tVirendra Sehwag, Gautam Gambhir (cricket),Sunil Chhetri(football)"
        <<"\n\tSania Mirza(lawn tennis) are to name a few sportspersons produced"
        <<"\n\tby this academy.\n\n\n\tThe academy has"
        <<" finest coaches,world class tracks,courts for every"
        <<"\n\tsports.The academy also has facilities for parking and also has a"
        <<"\n\tshop for sports goods.There are world-class restrooms and showers"
        <<"\n\ta canteen  with lots of  nutritiuous food  items for the  growing"
        <<"\n\tplayers.There is also a 24-hour security in the academy.\n"
        <<"\n\n\n\tThe institution also provides its customers with a membership "
        <<"\n\tfacility(either monthly,yearly or lifetime) so that they can easily"
        <<"\n\tpay  once and take the pleasure of every sport and every facility";

        cout<<"\n\n\t\tHope You Have a MARVELOUS time in our Academy !!!\n\n";
}
void yamuna::sports()
{
    sportmenu:
    int a,b,f;
    char c;

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       SPORTS";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";

        cout<<"\t\t\t1)CRICKET\n\n\n"
        <<"\t\t\t2)FOOTBALL\n\n\n"
        <<"\t\t\t3)BASKETBALL\n\n\n"
        <<"\t\t\t4)LAWN TENNIS\n\n\n"
        <<"\t\t\t5)SWIMMING\n\n\n"
        <<"\t\t\t6)ATHELETICS\n\n\n"
        <<"\t\t\t7)EXIT\n\n\n"
        <<"\t\t\tEnter Your Choice : ";
    cin>>a;
    if(a==1)
    {
       int ab;
       cricket:
       system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       CRICKET";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";

            cout<<"\tThe cricket academy also known a Gambhir's Academy has the \n"
            <<"\tprivilage of hosting the Ranji Trophy in its YSA Stadium and is famous\n"
            <<"\tfor producing legends like Sehwag, Ashish Nehra, Virat Kohli and\n"
            <<"\tmany more.\n\n\n"
            <<"\tEnter your age (b/w 5-20) : ";
       cin>>ab;
       if(ab>=5 && ab<=12)
            cout<<"\tYour fees would be :-Rs.800/-per month";
       else if(ab>12 && ab<=20)
            cout<<"\tYour fees would be :-Rs.1000/-per month";
       else
       {
            cout<<"\tYou have entered a wrong age \n"
                <<"\tPress 1 to re-enter your age  ";
            cin>>b;
            if(b==1)
                goto cricket;
            else
                goto sportmenu;
       }
       cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) : ";
       cin>>c;
       if(c=='y' || c=='Y')
       {
            Ycricket:
            system("cls");
            //DATA OF THE CUSTOMER

            cout<<"\n\n\n\t\t\t\t\t    -------------";
            cout<<"\n\t\t\t\t\t       CRICKET";
            cout<<"\n\t\t\t\t\t    -------------\n\n\n";


             char t;
             cout<<"\n Are you already a member(y/n) : ";
             cin>>t;
                // DATA OF HEAD OF CRICKET
            if(t=='y')
            {   registration();

                cout<<"\n\n\tFACULTY:"
                    <<"\n\t\tHEAD- Mr.Lalit Sahu"
                    <<"\n\t\tCOACH- Mr.Gopal Gupta"
                    <<"\n\n\t EQUIPMENTS REQUIRED"
                    <<"\n\t\t1)Cricket Kit"
                    <<"\n\t\t2)Jersey";

                cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";

                cout<<"\n\n\tPress 0 to continue : ";
                cin>>f;
                if(f==0)
                    goto sportmenu;
                else
                    goto sportmenu;
            }
            else
                membership();

        }
        else
            goto sportmenu;


    }
    if(a==2)
    {
        football:
        system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       FOOTBALL";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";

            cout<<"\tThe football academy also known a Messi's Academy has the privi-\n"
            <<"\tlage of hosting the Asia Cup in  its  YSA Stadium and is famous-\n"
            <<"\tfor producing legends like Sunil Chhetri, Ronaldo,Ibrahimovic and\n"
            <<"\tmany more.\n\n\n"
            <<"\tEnter your m.age(b/w 5-20) ";
        cin>>m.age;
        if(m.age>=5 && m.age<=12)
            cout<<"\tYour fees would be :-Rs.800/-per month";
        else if(m.age>12 && m.age<=20)
            cout<<"\tYour fees would be :-Rs.1000/-per month";
        else
        {
            cout<<"\tYou have entered a wrong age \n"
                <<"\tPress 1 to re-enter your age  ";
            cin>>b;
            if(b==1)
                goto football;
            else
                goto sportmenu;
        }
        cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) : ";
        cin>>c;
        if(c=='y')
        {
            Yfootball:
            system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       FOOTBALL";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";


        char t;
        cout<<"\n Are you already a member(y/n) : ";
        cin>>t;

        if(t=='y')
        {
            registration();
            // DATA OF HEAD OF FOOTBALL
            cout<<"\n\n\tFACULTY:"
                <<"\n\t\tHEAD- Mr.Kunal Dhoundial"
                <<"\n\t\tCOACH- Mr.Abhishek Rawat"
                <<"\n\n\t EQUIPMENTS REQUIRED"
                <<"\n\t\t1)Studs"
                <<"\n\t\t2)Jersey";

            cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";

            cout<<"\n\n\tPress 0 to continue : ";
            cin>>f;
            if(f==0)
                goto sportmenu;
            else
                goto sportmenu;
        }
        else
            membership();
        }
        else
            goto sportmenu;
    }
    if(a==3)
    {
        basketball:
        system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      BASKETBALL";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";

            cout<<"\tThe basketball academy also known a Jordans Academy has the privi-\n"
            <<"\tlage of hosting the ABSI Cup in  its  YSA Stadium and is famous-\n"
            <<"\tfor producing legends like Kobe Bryant,Mahesh Bhatt,Fabregas and\n"
            <<"\tmany more.\n\n\n"
            <<"\tEnter your age (b/w 5-20) ";
        cin>>m.age;
        if(m.age>=5 && m.age<=12)
            cout<<"\tYour fees would be :-Rs.800/-per month";
        else if(m.age>12 && m.age<=20)
            cout<<"\tYour fees would be :-Rs.1000/-per month";
        else
        {
            cout<<"\tYou have entered a wrong age \n"
                <<"\tPress 1 to re-enter your age  ";
            cin>>b;
            if(b==1)
                goto basketball;
            else
                goto sportmenu;
        }
        cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) : ";
        cin>>c;
        if(c=='y')
        {
            Ybasketball:
            system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      BASKETBALL";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";

        char t;
        cout<<"\n Are you already a member(y/n) : ";
        cin>>t;

        if(t=='y')
        {
            registration();
            // DATA OF HEAD OF BASKETBALL

            cout<<"\n\n\tFACULTY:"
                <<"\n\t\tHEAD- Mr.Deepanshu Batra"
                <<"\n\t\tCOACH- Mr.Piyush Gupta"
                <<"\n\n\t EQUIPMENTS REQUIRED"
                <<"\n\t\t1)Basket Ball"
                <<"\n\t\t2)Jersey";

            cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";

            cout<<"\n\n\tPress 0 to continue : ";
            cin>>f;
            if(f==0)
                goto sportmenu;
            else
                goto sportmenu;
        }
        else
            membership();
        }
        else
            goto sportmenu;
    }
    if(a==4)
    {
        lawntennis:
        system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t     LAWN TENNIS";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";

            cout<<"\tThe Tennis  academy also known a Sania's Academy has the privi-\n"
            <<"\tlage of hosting the Delhi Cup in  its YSA Stadium and is famous-\n"
            <<"\tfor producing legends like Sania Mirza,Mahesh Bhupathi, Paes and\n"
            <<"\tmany more.\n\n\n"
            <<"\tEnter your age(b/w 5-20) ";
        cin>>m.age;
        if(m.age>=5 && m.age<=12)
            cout<<"\tYour fees would be :-Rs.800/-per month";
        else if(m.age>12 && m.age<=20)
            cout<<"\tYour fees would be :-Rs.1000/-per month";
        else
        {
            cout<<"\tYou have entered a wrong age \n"
                <<"\tPress 1 to re-enter your age  ";
            cin>>b;
            if(b==1)
            goto lawntennis;
                else
            goto sportmenu;
        }
        cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) : ";
        cin>>c;
        if(c=='y')
        {
            Ylawntennis:
            system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t     LAWN TENNIS";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
        char t;
        cout<<"\n Are you already a member(y/n) : ";
        cin>>t;

        if(t=='y')
        {
            registration();
        // DATA OF HEAD OF LAWNTENNIS

        cout<<"\n\n\tFACULTY:"
            <<"\n\t\tHEAD- Mr.Rakshit Singhal"
            <<"\n\t\tCOACH- Msr.Shivani Singhal"
            <<"\n\n\t EQUIPMENTS REQUIRED"
            <<"\n\t\t1)Racket"
            <<"\n\t\t2)Tennis balls";
            cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";
            cout<<"\n\n\tPress 0 to continue : ";
        cin>>f;
        if(f==0)
            goto sportmenu;
        else
            goto sportmenu;
        }
        else
            membership();
        }
        else
            goto sportmenu;
    }
    if(a==5)
    {
        swimming:
        system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      SWIMMING";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
            cout<<"\tThe swimming academy also known a Daksh's Academy has the privi-\n"
            <<"\tlage of hosting the Delhi Trophy in its YSA Pools and is famous-\n"
            <<"\tfor producing legends like Tushar Makhija,Saurabh Jain,Apoorv and\n"
            <<"\tmany more.\n\n\n"
            <<"\tEnter your age (b/w 5-20) ";
            cin>>m.age;
            if(m.age>=5 && m.age<=12)
                cout<<"\tYour fees would be :-Rs.800/-per month";
            else if(m.age>12 && m.age<=20)
                cout<<"\tYour fees would be :-Rs.1000/-per month";
            else
            {
                cout<<"\tYou have entered a wrong age \n"
                    <<"\tPress 1 to re-enter your age  ";
                cin>>b;
                if(b==1)
                    goto swimming;
                else
                    goto sportmenu;
            }
            cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) : ";
            cin>>c;
            if(c=='y')
            {
                Yswimming:
                system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      SWIMMING";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
        char t;
             cout<<"\n Are you already a member(y/n) : ";
             cin>>t;

            if(t=='y')
            {
                registration();
                // DATA OF HEAD OF SWIMMING

                cout<<"\n\n\tFACULTY:"
                    <<"\n\t\tHEAD- Mr.Nishchal Kumar"
                    <<"\n\t\tCOACH- Msr.Meha Bareja"
                    <<"\n\n\t EQUIPMENTS REQUIRED"
                    <<"\n\t\t1)Swimming Costume"
                    <<"\n\t\t2)Gears";
                cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";
                cout<<"\n\n\tPress 0 to continue : ";
                cin>>f;
                if(f==0)
                    goto sportmenu;
                else
                    goto sportmenu;
            }
            else
                membership();
            }
            else
                goto sportmenu;
    }
        if(a==6)
        {
            atheletics:
            system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      ATHLETICS";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
                cout<<"\tThe atheletics academy also known a Bagla's Academy has the privi-\n"
                <<"\tlage of hosting the SRK  Trophy in its YSAm Tracks and is famous-\n"
                <<"\tfor producing legends like Shashank Sharma,Vidit Shah,Osama B and\n"
                <<"\tmany more.\n\n\n"
                <<"\tEnter your age (b/w 5-20) ";
            cin>>m.age;
            if(m.age>=5 && m.age<=12)
                cout<<"\tYour fees would be :-Rs.800/-per month";
            else if(m.age>12 && m.age<=20)
                cout<<"\tYour fees would be :-Rs.1000/-per month";
            else
            {
                cout<<"\tYou have entered a wrong age \n"
                    <<"\tPress 1 to re-enter your age  ";
                cin>>b;
                if(b==1)
                    goto atheletics;
                else
                    goto sportmenu;
            }
            cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) : ";
            cin>>c;
            if(c=='y')
            {
                Yatheletics:
                system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      ATHLETICS";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
        char t;
             cout<<"\n Are you already a member(y/n) : ";
             cin>>t;

            if(t=='y')
            {
                registration();

                // DATA OF HEAD OF ATHELETICS
                cout<<"\n\n\tFACULTY:"
                    <<"\n\t\tHEAD- Mr.Deepak Gupta"
                    <<"\n\t\tCOACH- Mrs.Pooja Gupta"
                    <<"\n\n\t EQUIPMENTS REQUIRED"
                    <<"\n\t\t1)Shorts"
                    <<"\n\t\t2)Sport shoes";

                cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";
                cout<<"\n\n\tPress 0 to continue : ";
                cin>>f;
                if(f==0)
                    goto sportmenu;
                else
                    goto sportmenu;
            }
            else
                membership();
            }
            else
                goto sportmenu;
        }
}
 void yamuna::facilities()
 {
    system("cls");

    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t     FACILITIES";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
      cout<<"\tThese are the following facilities provided by this academy:-\n\n\n"
      <<"\t1)CANTEEN/SHOP\n"
      <<"\t\tThe canteen here is owned by Haldiram's and is open 24-hours\n"
      <<"\t\tand provides lots of tasty but nutritious food items at very\n"
      <<"\t\taffordable prices for the young champions. The sports  goods\n"
      <<"\t\tis owned by Nike's and provides best  quality equipments for\n"
      <<"\t\tall sports.\n\n\n\n"
      <<"\t2)SECURITY/PARKING\n"
      <<"\t\tThe whole campus of the academy(including parking is guarded\n"
      <<"\t\tby black cat commandos and CRPF and is purely safe for young\n"
      <<"\t\tstars.The parking here can accomodate every kind of  vehicle\n"
      <<"\t\tand the vehicles are guarded by security.\n\n\n\n"
      <<"\t3)RESTROOMS/SHOWERS\n"
      <<"\t\tThe restrooms here are purely neat and clean and are equiped\n"
      <<"\t\twith every facilities of modern days and the showers provide\n"
      <<"\t\tthe qualities of facilities for the children to take  shower\n"
      <<"\t\tafter swimming\n\n\n"
      <<"\t\t\t       *    *    *    *    *\n " ;
 }
 void yamuna::contactus()
 {
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      CONTACT US";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
      cout<<"\t\t\t          HEAD OFFICE:-\n"
      <<"\t\t\t       Yamuna Sports Academy\n"
      <<"\t\t\t       502 Dayanand Vihar,PNo-708\n"
      <<"\t\t\t       Block-A,Delhi-110092\n"
      <<"\t\t\t       Ph No-011-22230267\n\n\n\n"
    // DATA OF HEAD OF PARTICULAR SPORTS
      <<"\t1)CRICKET HEAD                            2)FOOTBALL HEAD\n"
      <<"\t  Mr.Lalit Sahu                             Mr.Kunal Dhoundial\n"
      <<"\t  79 Azad Appts.,Delhi-92,                  54 A-Block,Mayur Vihar\n"
      <<"\t  Ph no-22452343                            Ph no-9946763123\n\n\n"
      <<"\t3)BASKETBALL HEAD                         4)LAWN TENNIS HEAD\n"
      <<"\t  Mr.Deepanshu Batra                        Mr.Rakshit Singhal\n"
      <<"\t  86 Jai Appts.,Delhi-32                    12,Chander Vihar\n"
      <<"\t  Ph no-9834567834                          Ph no-9868231658\n\n\n"
      <<"\t5)SWIMMING HEAD                           6)ATHELETICS HEAD\n"
      <<"\t  Mr.Nishchal Kumar                         Mr.Deepak Kumar\n"
      <<"\t  52 Meena Appts,Delhi-01                   45,Krishna Nagar\n"
      <<"\t  Ph no-011 22230365                        Ph no-9998844733\n\n\n\n"
      <<"\t\t\t         OUR TOLL-FREE NO:-\n"
      <<"\t\t\t         011-22424242-9";
 }
void yamuna::membership()
{   void write_file();
    void read_file();
    void searching();
    void modify();
    void Delete();
    int c;
    int a,d;
    char b;
    Ymembership:
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t      MEMBERSHIP";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
        cout<<"\t\t\t1)MONTHLY MEMBERSHIP\n\n\n"
        <<"\t\t\t2)YEARLY MEMBERSHIP\n\n\n"
        <<"\t\t\t3)LIFETIME MEMBERSHIP\n\n\n"
        <<"\t\t\t4)FOR ADMINISTRATOR ONLY\n\n\n"
        <<"\t\t\t5)EXIT\n\n\n"
        <<"\t\t\tEnter Your Choice : ";
    cin>>a;
    if(a==1)
    {
      system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       MONTHLY";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
            cout<<"\tMonthly membership is very useful.\n"
            <<"\tIf you will take monthly membership then you can leave\n"
            <<"\tit any time if you want to. In this u will get some facilities\n"
            <<"\tlike you can do swimming any time free of cost.\n"
            <<"\tThe fees for monthly membership is Rs.2500 per month.\n";


        cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) ";
        cin>>b;
        if(b=='y')
        {
            system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       MONTHLY";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
            write_file();
                cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";
                cout<<"\n\n\tPress 0 to continue : ";
            cin>>d;

            if(d==0)
                goto Ymembership;

        }
        else
            return;
    }
    if(a==2)
    {
        system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       YEARLY";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
            cout<<"\tYearly membership is again a beneficial membership.\n"
            <<"\tIn this you pay every year no problem of month charges.\n"
            <<"\tIn this also you can do swimming any time & have 520 hrs extra.\n"
            <<"\tFees for yearly membership is Rs.11000/annum only.\n";
        cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) ";
        cin>>b;
        if(b=='y')
        {
            system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t        YEARLY";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
            write_file();
            cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";
            cout<<"\n\n\tPress 0 to continue : ";
            cin>>d;
            if(d==0)
                goto Ymembership;

        }
        else
            return;
    }
    if(a==3)
    {
        system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       LIFETIME";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
            cout<<"\tLifetime membership is very beneficial.Moneywise and facilities as well\n"
            <<"\tIf you are interested in life time membership then carry your id proof.\n"
            <<"\tFees for lifetime membership is for just Rs.60,000 once \n";
        cout<<"\n\n\n\tWould you like to join the academy?(press y-yes or n-no) ";
        cin>>b;
        if(b=='y')
        {
            system("cls");
    cout<<"\n\n\n\t\t\t\t\t    -------------";
    cout<<"\n\t\t\t\t\t       LIFETIME";
    cout<<"\n\t\t\t\t\t    -------------\n\n\n";
            write_file();
                cout<<"\n\n\t\t\t\tTHANK FOR JOINING OUR ACADEMY !!!";
                cout<<"\n\n\tPress 0 to continue : ";
            cin>>d;
            if(d==0)
                goto Ymembership;

        }
        else
            return;
    }
    if(a==4)
    {   char pass[7]="qwerty";
        pss:
        system("cls");
        char p[20];
        cout<<"\n Enter 0 to Exit ";
        cout<<" \n\n Enter Password : ";
        cin>>p;
        if(strcmp(p,pass)==0)
        {   system("cls");
            cout<<"\n\n\n\t\t\t\t\t    -------------";
            cout<<"\n\t\t\t\t\t      MEMBERSHIP";
            cout<<"\n\t\t\t\t\t    -------------\n\n";
            cout<<"\t\t\t\tFOR ADMINISTRATION PURPOSES ONLY \n\n\n";
            do
            {

                cout<<"\n\t\t1.Add Members\n"
                    <<"\n\t\t2.Read Members\n"
                    <<"\n\t\t3.Search Members\n"
                    <<"\n\t\t4.Modify Members\n"
                    <<"\n\t\t5.Delete Members\n"
                    <<"\n\t\t6.Sports list\n"
                    <<"\n\t\t7.Exit\n"
                    <<"\n\t\tEnter your selection : ";
                cin>>c;
                cout<<"\n\n";
                if(c==1)
                    write_file();
                else if(c==2)
                    read_file();
                else if(c==3)
                    searching();
                else if(c==4)
                    modify();
                else if(c==5)
                    Delete();
                else if(c==6)
                    read_sports();
            }while(c!=7);
        }
        else if (p[0]=='0')
        {
            goto Ymembership;
        }
        else
            goto pss;
            system("cls");
    }
}
int main()
 {
// STARTING Page
  mainmenu:

  system("cls");
  int h;
  char x,j;
  yamuna y;
    // MAIN OPTIONS
      cout<<"\t\n\n\t\t\t\t\t  WELCOME TO YAMUNA SPORTS ACADEMY ! ! !\n";
    for(int m=1;m<20;m++)
	{	if(m%2==0)
		{	cout<<"  * * * * * * * * * * * * * * * * * * * * *";
			cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		}
		else
		{	cout<<" = * * * * * * * * * * * * * * * * * * * * ";
			cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		}
	}
   cout<<"\n\n\n\t      1)  A B O U T  U S\n\n\n"
      <<"\t      2)  S P O R T S\n\n\n"
      <<"\t      3)  F A C I L I T I E S\n\n\n"
      <<"\t      4)  M E M B E R S H I P\n\n\n"
      <<"\t      5)  C O N T A C T  U S\n\n\n"
      <<"\t      6)  E X I T\n\n\n"
      <<"\t      ENTER YOUR CHOICE : ";
  cin>>h;
    // FOR GOING TO THE SPECIFIED OPTION
    if(h==1)
        y.aboutus();
    if(h==2)
        y.sports();
    if(h==3)
        y.facilities();
    if(h==5)
        y.contactus();
    if(h==4)
        y.membership();
    if(h==6)
    {
        exit(0);
    }
    else if(h!=1 && h!=2 && h!=3 &&h!=5 && h!=4 && h!=6)
        goto mainmenu;
    cout<<"\n\n\t      Press any key to continue ";
    cin>>j;
        goto mainmenu;
    return 0;
  }
  void registration()
{
    write_sports();
            char d;
            int e,a;
            a=m1.getage();
            cout<<"\n\n\t ENTER SHIFT (e-evening and m-morning) : ";
            cin>>d;
            cout<<endl;
            if((a>=5 && a<=12 )&& (d=='m' || d=='M'))
            {
                cout<<"\n\n\tYour timings are:- 9:00a.m. to 10:30a.m."
                    <<"\n\n\tYour days are:-Monday,Wednesday,Friday";
            }
            else if((a>=5 && a<=12) && (d=='e' || d=='E'))
            {
                cout<<"\n\n\tYour timings are:- 4:30p.m. to 6:00p.m."
                    <<"\n\n\tYour days are:-Tuesday,Thursday,Saturday";
            }
            else if((a>12 && a<=20) && (d=='m' || d=='M'))
            {
                cout<<"\n\n\tYour timings are:-6:30a.m. to 8:00a.m."
                <<"\n\n\tYour days are:-Tuesday,Thursday,Saturday";
            }
            else if((a>12 && a<=20) && (d=='e' || d=='E'))
            {
                cout<<"\n\n\tYour timings are:-5:30p.m. to 7:00p.m."
                    <<"\n\n\tYour days are:-Monday,Wednesday,Friday";
            }
            else
            {
                    cout<<"\n\n\tYou have entered a wrong choice ";
                    cout<<"\n\n\tPress 1 to continue";
                    cin>>e;
                    system("cls");
                    if(e==1)
                        registration();
            }
}
