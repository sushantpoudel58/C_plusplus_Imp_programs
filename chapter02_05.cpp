

// Everest engineering clz internal question  

/* using class write a c++ program  that receives input principle amount time and rate .
 keeping rate 12% as the default arguement , calculate simple interest for 10 candindate
*/


# include<iostream>
using namespace std;

class interest{
    int p,t,r;
    public:

    void calculate(int a,int b,int c=12){
        p=a;
        t=b;
        r=c;

        int si;
        si=(p*t*r)/100;
        cout<<si<<"\n";

    }
};
int main(){
    int pr,ti;
    interest i[10];
    for (int a=1;a<=10;a++){
        cout<<"enter for "<<a<<"candidate";
        cout<<"\n enter p and t";
        cin>>pr>>ti;
        i[a].calculate(pr,ti);
    }
    return 0;

}