#include<bits/stdc++.h>
using namespace std;

int main()
{  
 /*Visit - www.programmingwithbasics.com*/
   
    printf("=====================================");
    printf("\nVisit - www.programmingwithbasics.com");
    printf("\n=====================================");
    
    /*
 Here Integer Variables for loop, swapping and assign value and float variable for waiting time, turn around time and Average waiting time and Average turn around time.
 */
        
 int n,i,j,temp,min;
 float c1=0,c2=0,avwt,avtrt;
 
 int *cbt  = new int[n];
 int *p = new int[n];
 int *s = new int[n];
 int *wt = new int[n];
 int *trt = new int[n];
 
 /*
 Here asking for user Enter Number of Process 
 */
 
 cout<<"\nEnter The Number of Process: ";
 cin>>n;
 
 /*
 Storing the Burst time of each process in an array and process ID of the process.
 */
 
 cout<<"\n========================================================";
  cout<<"\nEnter The CBT(Burst Time) of Processes";
  cout<<"\n========================================================\n";
 
 for(i = 0; i< n; i++ )
 {
  cin>>cbt[i];
  s[i] = i+1;
 }
 
 /*
 Storing the Priority of the each process 
 */
 
 cout<<"\n========================================================";
 cout<<"\nEnter The Priority of Process";
 cout<<"\n========================================================\n";
 for(i = 0; i< n; i++ )
 {
  cin>>p[i];
 }

 /*
 This is the main important part here we are sorting an array according to priority given and if 
 we are sorting priority array than Burst Time array and process ID array also need to sort 
 */
 
 for(i = 0 ; i<n ; i++)
 {
  min = i;
  for(j=i+1;j<n;j++)
  { 
   if(p[j] > p[min] )
   {
    min=j;
   }
  }
  
  temp = p[i];
  p[i] = p[min];
  p[min] = temp;
    
  temp = cbt[i];
  cbt[i] = cbt[min];
  cbt[min] = temp;
    
  temp = s[i];
  s[i] = s[min];
  s[min] = temp;  
 }
 
 /*
 Starting waiting time of a process will be zero.
 */
 
 wt[0] = 0;
 
 /*
 Here We are calculating waiting time, after calculating total waiting time we are calculating Average
 Waiting time divide. Average Waiting Time = Total Waiting Time / Number of Process.
 */ 
 
 for(i=1;i<n;i++)
 {
  wt[i]=0;
        for(j=0;j<i;j++)
        {
         wt[i]+=cbt[j];
  }
  c1+=wt[i];
 }
 
 avwt=c1/n; // Average Waitng Time
 
 /*
 Here We are calculating turnaround time, after calculating total turnaround time we are calculating Average turnaround time divide. Average turnaround time = Total turnaround time / Number of Process.
 */
 
 for(i=0;i<n;i++)
 {
  trt[i]=cbt[i]+wt[i];     //calculate turnaround time
        c2+=trt[i];
 }
 avtrt=c2/n; //Average turnaround time.
  
 cout<<"\n==========================================================\n"; 
 cout<<"Process\t"<<"CBT(Burst Time)\t"<<"  Wating Time\t"<<"Turn Around time";  
 cout<<"\n==========================================================\n";
 
 for(i=0;i<n;i++)
 {  
  cout<<"\nP["<<s[i]<<"]\t\t  "<<cbt[i]<<"\t\t    "<<wt[i]<<"\t\t\t"<<trt[i];
 }

 cout<<"\n==========================================================\n";
 cout<<"\n\nAverage Waiting Time: "<<avwt;
 cout<<"\n\nAverage Turn Around Time: "<<avtrt<<endl; 

}
