#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int binary(int arr[],int low,int high,int key){
int mid;
while(low<=high){
mid=(low+high)/2;
if(arr[mid]>key)
high=mid-1;
else if(arr[mid]<key)
low=mid+1;
else
return 1;
}
return 0;
}
int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
sort(arr,arr+n);
int result;
for(i=1;i<=n;i++){
result=binary(arr,0,n-1,i);
if(result==1)
continue;
else
printf("%d ",i);
}
return 0;
}
