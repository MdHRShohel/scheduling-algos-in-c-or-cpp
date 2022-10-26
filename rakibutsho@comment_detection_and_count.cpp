#include<bits/stdc++.h>
#include <fstream>
using namespace std;
FILE *tp,*tp1;
int main ()
{
char c;
ofstream myfile;
myfile.open ("result3.txt");
tp1=fopen("input2.txt","r");
char a[1000];
int i=0;
while((c=fgetc(tp1))!=EOF)
{
a[i]=c;
i++;
}fclose(tp1);
string s;
int count1=0,count2=0;
for(int i=0; i<100; i++)
{
if(a[i]=='/'&&a[i+1]=='/'&&a[i+3]!='*'
)
{
count1++;
myfile << "Single line comment\n";
}
if(a[i]=='/'&&a[i+1]=='*')
{
count2++;
myfile<<"Multi line comment\n";
} }
myfile<<"Total Single line comment is: "<<count1<<"\n";
myfile<<"Total multiline comment is: "<<count2<<"\n";
myfile.close();
return 0;
}
