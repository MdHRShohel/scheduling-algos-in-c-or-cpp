#include<bits/stdc++.h>
using namespace std;
#define R 5
#define C 8

int maxHits(int row[])
{
    stack<int>reslt;
    int top_val;
    int mx_area = 0;
    int area = 0;
    int i = 0;

    while(i<C)
    {
        if(reslt.empty() || row[reslt.top()] <= row[i])
            reslt.push(i++);
        else
        {
            top_val = row[reslt.top()];
            reslt.pop();
            area = top_val * i;

            if(!reslt.empty())
                area = top_val * (i - reslt.top() - 1);
            mx_area = max(area, mx_area);
        }
    }
    while(!reslt.empty())
    {
        top_val = row[reslt.top()];
        reslt.pop();
        area = top_val * i;
        if(!reslt.empty())
            area = top_val * (i - reslt.top() - 1);
        mx_area = max(area, mx_area);
    }
   return mx_area;
}

int maxRectangle(int A[][C])
{

    int reslt = maxHits(A[0]);

    for(int i = 1; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(A[i][j]){
                A[i][j] += A[i-1][j];
            }
        }
        reslt = max(reslt, maxHits(A[i]));
    }
    return reslt;

}
int main()
{
    int A[][C] = {
        { 1, 1, 0, 0, 1, 1, 1, 0},
        { 0, 1, 0, 1, 0, 0, 0, 1},
        { 1, 1, 1, 1, 1, 1, 1, 0},
        { 1, 1, 1, 1, 1, 0, 1, 1},
        { 1, 1, 1, 1, 0, 0, 1, 0}
        };

    cout << "Area of maximum rectangle is "<< maxRectangle(A);

    return 0;
}
