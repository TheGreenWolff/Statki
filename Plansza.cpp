#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;

char planSI[10][10];

void genplan();

void genplan()
{

    srand(time(NULL));
    int x,y;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            planSI[i][j]=' ';
        }

    }


    for(int i = 0; i < 10; i++)
    {
        x=rand()%10;
        y=rand()%10;
        if(planSI[x][y]!='V')
        {
            planSI[x][y]='V';
        }
        else
        {
            i--;
        }

    }

}


void wypplan(char plansza[10][10]){
    cout<<"+-------------------+"<<endl;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout<<"|"<<plansza[i][j];
        }
        cout<<"|"<<endl;
    }
    cout<<"+-------------------+"<<endl;

}