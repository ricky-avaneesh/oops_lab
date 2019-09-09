#include<iostream>
using namespace std;
class destination
{
    char id;
    int x;
    int y;
    int flag=1;
public:
    destination(char , int, int);
    void getdata(char, int, int);
    friend float distance(int, int);
    int check();
    void setflag_false();
    void get_class();

};
void destination::get_class()
{
    cout<<id;
}
void destination::setflag_false()
{
    flag = 0;
}
int destination::check()
{
    return flag;
}
destination::destination(char i, int a, int b)
{
        id=i;
        x=a;
        y=b;
}
void destination::getdata(char id, int x, int y)
{
    cout<<"Enter House Id : ";
    cin>>id;
    cout<<"Enter House x coordinate of house Id ("<<id<<") : ";
    cin>>x;
    cout<<"Enter House y coordinate of house Id ("<<id<<") : ";
    cin>>y;
}
friend float destination::distance(destination a)
{
    return(sqrt((a.x-x)*(a.x-x) + (a.y-y)*(a.y-y)));
}

int main()
{
    destination array[6];
    array[0]=('O', 0, 0);
    int i;
    float dist;

    for(i =1; i<6; ++i) //taking input all the destinations
        array[i].getdata();

    i=0;
    int k=0;
    int min_dist,min_dist_index;
    while(i<5)
    {
        min_dist=INT_MAX;
        for(int j=1; j<6; ++j)
        {
            if(array[j].check())
                continue;
            dist = array[k].distance(array[j])
            if(dist<min_dist)
            {
                min_dist_index = j;
            }
        }
        k = min_dist_index;
        array[k].setflag_false();
        array[k].get_class();
    }
    return 0;
}
