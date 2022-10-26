#include<bits/stdc++.h>
#include <fstream>
using namespace std;
FILE *tp1,*tp2;
int main ()
{
char c;
ofstream myfile;
myfile.open ("result2.txt");
tp1=fopen("input1.txt","r");
char input[1000];
int i=0;
while((c=fgetc(tp1))!=EOF)
{
input[i]=c;
i++;
}
fclose(tp1);
char* token;
token=strtok(input,",.*!'");
while(token!=NULL)
{
myfile <<token<<"\n";
token=strtok(NULL,",.*!'");
}
myfile.close();
return 0;
}
