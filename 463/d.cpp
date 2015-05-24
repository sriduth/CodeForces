#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cctype>

using namespace std;

string X="",Y="";
vector< vector<int> > c(101, vector<int>(101,0));
int m,n,ctr;
 
void LCS()
{
     m = X.length(),n=Y.length();
     int i,j;
     for (i=0;i<=m;i++)
         for (j=0;j<=n;j++)
             c[i][j]=0;
 
     for (i=1;i<=m;i++)
         for (j=1;j<=n;j++)
         {
             if (X[i-1]==Y[j-1])
                c[i][j]=c[i-1][j-1]+1;
             else
                 c[i][j]=max(c[i][j-1],c[i-1][j]);
         }
}
 
void printLCS(int i,int j)
{
    if (i==0 || j==0)
       return;
    if (X[i-1]==Y[j-1])
    {
       printLCS(i-1,j-1);
       cout<<X[i-1];
    }
    else if (c[i][j]==c[i-1][j])
         printLCS(i-1,j);
    else
        printLCS(i,j-1);
}
 
int main()
{
    int T,L;
    cin >> T >> L;
    char ch;

    X = "";
    while ((ch = cin.get()) != '\n')
    {   
        if(ch != ' ')
            X += ch;
    }

    for(int i=1;i<L;i++)
    {
        Y = "";
        while ((ch = cin.get()) != '\n')
        {   
            if(ch != ' ')
                Y += ch;
        }

        cout << X << " " << Y << endl;
        LCS();
        printLCS(m,n);
    }
        
}