// Easy if 1≤x<100

// Medium if 100≤x<200

// Hard if 200≤x≤300

#include<iostream>
using namespace std;
int main()
{
int n, x;
cin>>n;
while (n--)

{
    cin>>x;
    // if (x<1 && x>300 ){
    //     cout<<"Easy"<<endl;
    // }
    // else
     if (x>=1 && x<100 ){
        cout<<"Easy"<<endl;
    }
    else if(x>=100 && x<200){
        cout<<"Medium"<<endl;
    }
    else if(x>=200 && x<=300){
        cout<<"Hard";
    }
}

}