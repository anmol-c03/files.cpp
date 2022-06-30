#include<iostream>
using namespace std;
class charge 
{
    private:
    int num_vehicle;
    int hour;
    int rate;
    public:
    charge(){}
    charge(int vehicle_no,int h,int r)
    {
    num_vehicle=vehicle_no;
    hour=h;
    rate=r;
    }
    charge(charge &c)
    {
        num_vehicle=c.num_vehicle;
        hour=c.hour;
        rate=c.rate;
    }
    void calculate()
    {
        int charge1=rate*hour;;
        if(num_vehicle<10)
        cout<<"total charge of "<<num_vehicle<<" = "<<charge1<<endl;
        else
        cout<<"total charge of "<<num_vehicle <<" = "<<charge1-0.1*charge1<<endl;
    }

};
int main()
{
    charge c1 (12,2,100),c2(c1);
    c1.calculate();
    c2.calculate();
    return 0;
}