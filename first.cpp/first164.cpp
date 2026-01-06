// Operator Overloading
// Insertion Operator Overloading
// program with a class rational number EXERCISE :::

#include<iostream>
using namespace std;

class rational
{
    private:
    int p;
    int q;

    public:
    rational()
    {
        p=1;
        q=1;
    }

    rational (int p , int q )
    {
        this->p=p;
        this->q=q;
    }

    rational(rational &r)
    {
        this->p=r.p;
        this->q=r.q;
    }

    int getp()
    {
        return p;

    }

    int getq()
    {
        return q;
    }

    void setp (int p)
    {
        this->p=p;
    }

    void setq(int q)
    {
        this->q=q;
    }

    rational operator+(rational r)
    {
        rational t;
        t.p=this->p*r.q+this->q*r.p;
        t.q=this->q*r.q;
        return t;
    }

    friend ostream & operator<<(ostream &os, rational &r);
};

ostream & operator<<(ostream &os , rational &r)
{
    os<<r.p<<"/"<<r.q;
    return os;

}


int main()
{
    rational r1(3,4), r2(2,5), r3;
    r3=r1+r2;
    cout<<"sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
}