#include<iostream>
using namespace std;
class deptattributes
{
    private:
    int department_id;
    char* department_name;
    public:
    deptattributes()
        {
            department_id=0;
            department_name=new char;
            department_name[0]='\0';
        }
    deptattributes(int id,char str[])
    {
        department_id=id;
        department_name=new char(strlen(str)+1);
        department_name=str;


    }
    void showdata()
    {
        cout<<"Department id is"<<department_id<<endl;
        cout<<"Department name is"<<department_name<<endl;

    }
    ~deptattributes()
    {
        cout<<"Object n goes out of the scope"<<endl;
        delete []department_name;

    }
};
int main()
{
    int id;
    char name[30];
    cout<<"Enter the departmenmt id";
    cin>>id;
    cout<<"Enter ur name ";
    cin>>name;
    deptattributes d1;
    deptattributes d2(id,name);
    d2.showdata();
      return 0;
}