/*******************************************************************************
                   * PROJECT NAME :- TEACHER INFORMACTION & STUDENT INFORMACTION2BM SECOND PROJECT
                   * 2BM SECOND PROJECT
                   * ASSALAMU ALAIKUM WA RAHMATULLAH
                   * MY ID IS-----C213090-------
********************************************************************************/

#include <bits/stdc++.h>
//#define input freopen("D:/inputoutput/input.txt", "r", stdin);
//#define output freopen("D:/inputoutput/output.txt", "w",stdout);
using namespace std;
#define ll long long
#define nl endl
#define sort(a) sort(a.begin(),a.end())
#define rep(i,a,b) for (ll i = a; i < b; i++)

    int m,n;

    class teacher{
    public:

        string name,department,deg,id;
        void set()
        {
                cout<<nl<<"Enter Teacher Name : ";
                cin>>name;
                cout<<nl<<"Enter Teacher Department : ";
                cin>>department;
                cout<<nl<<"Enter Teacher Designation : ";
                cin>>deg;
                cout<<nl<<"Enter Teacher ID : ";
                cin>>id;
        }
        void get()
        {
                cout<<nl<<"Teacher Name : "<<name<<endl;
                cout<<nl<<"Teacher Department : "<<department<<endl;
                cout<<nl<<"Teacher Designation : "<<deg<<endl;
                cout<<nl<<"Teacher ID : "<<id<<nl<<endl;
        }
    };

class student
    {
    public:
        int s_id;
        string student_name;
        string student_depart;
        string student_section;
        string teacher_name;
        void set_data()
        {


       cout<<nl<<"Enter Student ID : ";

       cin>>s_id;

       cout<<nl<<"Enter Student Name : ";

       cin>>student_name;

       cout<<nl<<"Enter Student Department : ";

       cin>>student_depart;

       cout<<nl<<"Enter Student Section : ";

       cin>>student_section;

       cout<<nl<<"Teacher Name :  ";

       cin>>teacher_name;


        }

        void get1_data()
        {

       cout<<nl<<"Student ID : "<<s_id<<endl;

       cout<<nl<<"Student Name : "<<student_name<<endl;

       cout<<nl<<"Student Department : "<<student_depart <<endl;

       cout<<nl<<"Student Section : "<<student_section<<endl;

       cout<<nl<<"Teacher Name :  "<<teacher_name<<endl;
        }

    };




void menu()
{
        cout<<nl<<"------------------------- Wellcome To IIUC ------------------------"<<endl;

        cout<<nl<<"------------ Wellcome Student & Teacher Managment System  ------- "<<endl;

        cout<<nl<<"---------------- Press   1     Register New Teacher  -------------------- "<<endl;

        cout<<nl<<"---------------- Press   2     Register New Student ----------------------"<<endl;

        cout<<nl<<"---------------- Press   3     Show Teacher All Data  ------------------- "<<endl;

        cout<<nl<<"---------------- Press   4     Show Student All Data  -------------------- "<<endl;

        cout<<nl<<"---------------- Press   5     Search Enter Teachers ID  ---------------- "<<endl;

        cout<<nl<<"---------------  Press   6     Search Enter Student ID  ------------------"<<endl;

        cout<<nl<<"---------------  Press   7     Search Enter Teachers Name (FOLLOWUNG Teachers DATA) ----------------"<<endl;

        cout<<nl<<"---------------  Press   8     Search Enter Teachers Deaprtment --------"<<endl;

        cout<<nl<<"---------------  Press   9     Search Enter Teachers NAME (FOLLOWUNG Student DATA) --------"<<endl;

        cout<<nl<<"---------------  Press   0     -----------------EXIT---------"<<endl;

        cout<<endl;
}


int main(){
    cout<<"Enter The Total Capacity of IIUC Teacher : ";
    cin>>n;
    cout<<nl<<"Enter The Total Capacity of IIUC Student : ";
    cin>>m;
  menu();
    teacher t[n];
    student s[m];
    int Teacher=0,Student=0;
  int q;

  while(cout<<nl<<"Enter your option : ",cin>>q){

  if(q==1) {
    int ne;
    cout<<nl<<"How Many Teacher Do You Want To Register : ";
    cin>>ne;
    Teacher+=ne;
    rep(i,0,ne)
    t[i].set();
  }

  else if (q==2){
    int ne;
    cout<<nl<<"How Many Student Do You Want To Register : ";
    cin>>ne;
    Student+=ne;
    rep(i,0,ne)
    s[i].set_data();
  }

  else if (q==3) {
    rep(i,0,Teacher)
    t[i].get();
  }
  else if (q==4) {
    rep(i,0,Student)
    s[i].get1_data();
    }
 else if (q==5) {
    string f;
    cout<<nl<<"Enter Teacher ID : ";
    cin>>f;
    rep(i,0,n)
    {
        if(f==t[i].id){
            t[i].get();
            break;
        }
        else
        cout<<nl<<"Not Found."<<nl;
    }
    
    }
    else if (q==6) {
    int f;
    cout<<nl<<"Enter Student ID : ";
    cin>>f;
    rep(i,0,m)
    {
        if(f==s[i].s_id){
            s[i].get1_data();
            break;
        }
        else
        cout<<nl<<"Not Found."<<nl;
    }
    
    }
     else if (q==7) {
    string f;
    cout<<nl<<"Enter Teacher Name : ";
    cin>>f;
    rep(i,0,n)
    {
        if(f==t[i].name){
            t[i].get();
            break;
        }
        else
        cout<<nl<<"Not Found."<<nl;
    }
    
    }
    else if(q==8)
    {
    string f;
    cout<<nl<<"Enter Teacher Department : ";
    cin>>f;
    rep(i,0,n)
    {
        if(f==t[i].department){
            t[i].get();
            break;
        }
        else
        cout<<nl<<"Not Found."<<nl;
    }
    

  }
  else if(q==9)
  {
    
    string f;
    cout<<nl<<"Enter Teacher Name : ";
    cin>>f;
    rep(i,0,n)
    {
        if(f==s[i].teacher_name){
            s[i].get1_data();
            break;
        }
        else
        cout<<nl<<"Not Found."<<nl;
    }
    
    
  }


    else if(q==0)
    {
        break;
    }

  }
  return 0;
 }
