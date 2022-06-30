#include<iostream>
using namespace std;
class concatenate
{
    private:
    char *str;
    public:
    concatenate()
    {
        str=new char;
        str[0]='\0';
    }
    concatenate join(char s1[],char s2[])
    {
        str=new char(strlen(s1)+strlen(s2));
        str=strcat(s1,s2);
        cout<<"concatenated string is"<<str<<endl;

    }
    ~concatenate()
    {
        delete str;
    }

};
int main()
{
    char s1[]=("Engineers are");
    char s2[]=("creatures of logic");
    concatenate c1;
    c1.join(s1,s2);
      return 0;
}