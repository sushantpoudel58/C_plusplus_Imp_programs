
// 2017 spring 5.(b)    inheritance related question

#include<iostream>                                      // jaanena  ,,  tedo xa question

using namespace std;

/* class Alpha
{
    private:
    int alpha;

    public:
    Alpha(int a)
    {
       void showa()
       {
          cout<<"\n The value of Alpha is:"<<alpha;
       }
    }

};

class Beta
{
    private:
    int beta;

    public:
    Beta(int b)
    {
        void showb()
        {
            cout<<"\n The value of Beta is:"<<beta;
        }
    }
};

class Gamma:public Alpha, public Beta
{
    private:
    int gamma;

    public:
    Gamma(int a, int b, int c)
    {
        gamma=c;
        void showg()
        {
        
        }
    }
};
*/

class Alpha
{
    private:
    int x;

    public:
    Alpha(int a)
    {
        
          x=a;
    }
       void showa()
       {
          
           cout<<"\n The value of x is:"<<x;
       }
    

};

class Beta
{
    private:
    int y;

    public:
    Beta(int b)
    {
        y=b;
    }
        void showb()
        {
             cout<<"\n The value of y is:"<<y;
        }
    
};

class Gamma:public Alpha, public Beta
{
    private:
    int z;

    public:
    Gamma(int a, int b, int c):Alpha(a),Beta(b)
    {
        z=c;
        
        }
        void showg()
        {
             cout<<"\n The value of z is:"<<z;
        }
    
};

int main()
{
    Gamma ob(20,21,22);
    ob.showa();
    ob.showb();
    ob.showg();

    return 0;

}