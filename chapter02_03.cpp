
// Everest engineering clz internal question  

/* using class write a c++ program  that receives input principle amount time and rate .
 keeping rate 12% as the default arguement , calculate simple interest for 10 candindate
*/


#include<iostream>

using namespace std;

class interest 
{
    private:
    int p;
    int t;
    int r;
   

    public:
    void getdata( int a, int b, int c=12 )
    {
        p=a;
        t=b;
        r=c;
    }

   float calculate()
   {
    return(p*t*r)/100;
   }
};

int main()
{
    interest i1,i2,i3, i4, i5, i6,i7,i8,i9,i10;
    i1.getdata(100,20);
    i2.getdata(100,20);
    i3.getdata(100,20);
    i4.getdata(100,20);
    i5.getdata(100,20);
    i6.getdata(100,20);
    i7.getdata(100,20);
    i8.getdata(100,20);
    i9.getdata(100,20);
    i10.getdata(100,20);

    cout<<"\n The interest for 1st person :"<<i1.calculate();
     cout<<"\n The interest for 2nd person :"<<i2.calculate();
     cout<<"\n The interest for 3rd person :"<<i3.calculate();
     cout<<"\n The interest for 4th person :"<<i4.calculate();
      cout<<"\n The interest for 5th person :"<<i5.calculate();
       cout<<"\n The interest for 6th person :"<<i6.calculate();
       cout<<"\n The interest for 7th person :"<<i7.calculate();
       cout<<"\n The interest for 8th person :"<<i8.calculate();
      cout<<"\n The interest for 9th person :"<<i9.calculate();
        cout<<"\n The interest for 10th person :"<<i10.calculate();
                                   
          
        


       
    return 0;
}


    




/*
class interest
{
    private:
    int n=10;
    float p,a,t,r=12 , in , total;

    public:
    interest()
    {
        p=0;
        t=0;
        r=0;
    }
    interest(float x, float y, float z )
    {
        p=x;
        t=y;
        r=z;
    }

    void calculate()
    {
        
       // int n=10;
    
       
        
            in=(p*t*r)/100;

            total = 10*in;
        
    }

    void display()
    {
        cout<<"The total interest of 10  candidate is :"<<total;
    }
};

int main()
{
    interest ob(10,2,12);
    ob.calculate();
    ob.display();

    return 0;
}
*/