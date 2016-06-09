#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
int t;
scanf("%d",&t);
while(t--){
int n,i;
long long int sum=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
sort(arr,arr+n);
int min=sum/n;
long long int ans=0;
if(sum % n==0){
for(i=0;i<n;i++){
if(arr[i]<min){
ans+=(min-arr[i]);
}
}
printf("%lld\n",ans);
continue;
}
else{
printf("No Treat\n");
continue;
}
}
return 0;
}
