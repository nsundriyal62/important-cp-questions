//question link -: https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381872?leftPanelTab=0


#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1) sum++;
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0) arr[i]=1;
        else arr[i]=-1;
    }
    int minn=0;
    int count=0;
    for(int i=0;i<n;i++){
        count=count+arr[i];

        if(count<0) count=0;

        minn=max(minn,count);
    }
    return sum+minn;
}