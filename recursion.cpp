#include <bits/stdc++.h>
using namespace std;
// int fibo(int n){
//     if(n==1 ||n==2){
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n=8;
//     cout<<fibo(n);
//     return 0;
// }

// int sum(int n){
    
//     int digit=n%10;
//     if(n<1){
//         return digit;
//     }
//     return digit+ sum(n/10);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }

// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     return a*power(a,b-1);
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
//     return 0;
// }

//on arrays
// void  f(int *arr,int index,int n){
//     if(index==n){
//         return ;
//     }
//     cout<<arr[index]<<"\n";
//     f(arr,index+1,n);
// }
// int main(){
//     int n=5;
//     int arr[]={5,8,7,9,2};
//     f(arr,0,n);
//     return 0;

// }

//#MAX VALUE
// int f(int *arr,int idx,int n){
//     if(idx==n-1){
//         return arr[idx];
//     }return max(arr[idx],f(arr,idx+1,n));
// }
// int main(){
//     int arr[]={4, 7 ,8,9,7};
//     int n=5;
//     cout<<f(arr,0,n);
//     return 0;
// }

//SUM OF THE VALUES
// int sum(int *arr,int index,int n){
//     if(index==4){
//         return arr[index];
//     }
//     return arr[index]+sum(arr,index+1,n);;
// }
// int main(){
//     int n=5;
//     int arr[5]={1,4,5,7,8};
//     cout<<sum(arr,0,n);
//     return 0;
// }

// string  removea(string &s,int index,int n){
//     if(index==n){
//         return "";
//     }
//     string curr="";
//     curr+=s[index];
//     return ((s[index]=='a')?"":curr)+removea(s,index+1,n);

// }
// int main(){
//      string s="aditya";
//      int n=6;
//      cout<<removea(s,0,n);
//     return 0;
// }

//#PALINDROME
// bool f(int num,int *temp){
//     if(num>=0 && num<=9){
//         int lastdigitoftemp=(*temp)%10;
//         (*temp)/=10;
//         return (num==lastdigitoftemp);
//     }
//     bool result =(f(num/10,temp) && (num%10)==((*temp)%10));
//     (*temp)/=10;
//     return result;
// }
// int main(){
//     int num=12321;
//     int anothernum=12321;
//     // int *temp=&anothernum;
//     cout<<f(num,&anothernum);
//     return 0;
// }

//LOOP
// void rec(int n,int m,bool flag)
// {
//                cout<<m<<" ";
//                 // If we are moving back towards n and we have reached there, then we are done
//                 if (flag == false && n == m)
//                         return;
 
//                 // If we are moving towards 0 or negative.
//                 if (flag) {
//                         // If m is greater, then 5, recur with true flag
//                         if (m - 5 > 0)
//                                 rec(n, m - 5, true);
 
//                         else // recur with false flag
//                                 rec(n, m - 5, false);
//                 }
 
//                 else // If flag is false.
//                         rec(n, m + 5, false);
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     rec(n,n,true);
// }

// int f(int n,int i){
//     if(i==n){
//         return n ;
//     }
//     cout<<i<<" ";
//     return f(n,i+1);
    
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<f(n,1);
//     return 0;
// }

//#K MULTIPLES OF N
// void f(int n,int k){
//     if(k==0){
//         return;
//     }
//     f(n,k-1);
//     cout<<n*k;
    
// }
// int main(){
//     int n,k;
//     cin>>n>>k;
//     f(n,k);
//     return 0;
// }

//ALTERNATE SUMS
// int  f(int n){
//     if(n==0){
//         return 0;
//     }
//     return f(n-1)+ ((n%2==0)?(-n):(n));
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<f(n);
//     return 0;
// }


//#GREATEST DIVISOR
// int gcd(int a,int b){
//     if(b>a)  return gcd(b,a);
//     if(b==0) return a;
//     return gcd(b,a%b);
// }
// int main(){
//     int a,b;
//     cin>>b>>a;
//     cout<<gcd(a,b);
// }


//#FROG JUMP
// int best(vector<int>&heights , int n , int idx){
//  if(idx >= n)return 0;
//  return min(best(heights , n , idx + 1) + abs(heights[min(idx+1  , n-1)] - heights[idx]) , best(heights , n , idx + 2) + abs(heights[min(n-1 ,idx+2)] - heights[idx]));
// }
// int main() {
//     int n;
//     cin>>n;
//     vector<int>heights(n);
//     for(int i = 0 ; i < n ; i++){
//         cin>>heights[i];
//     }
//     cout<<best(heights , n , 0)<<endl;   
// }
// int f(int *h,int n,int i){
//     if(i==n-1)return 0;//i==0
//     if(i==n-2) return f(h,n,i+1) +abs(h[i]-h[i+1]);
//     return min(f(h,n,i+1)+abs(h[i]-h[i+1]),f(h,n,i+2)+abs(h[i]-h[i+1]));
// }

//PRODUCT
// int product(int n,int m){
//     if(m==0){
//         return 0;
//     }
//     return n+product(n,m-1);//(4,product(4,4)==4+4(product(4,3))
    
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     cout<<product(n,m);
//     return 0;
// }

//PRIME
// bool prime(int n,int x){
//     if(n==2){
//         return true;
//     }
//     if(n%x==0){
//         return false;
//     }
//     if (x*x> n)
//         return true;
//     return prime(n,x+1);
// }
    
// int main(){
//     int n,x;
//     cout<<"n=";
//     cin>>n;
//     if (prime(n,2)){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }
//     return 0;
// }

//#DECIMAL CONVERTER
// int find(int decimal_number)
// {
//      if (decimal_number == 0)
//         return 0;
//      else
//         return (decimal_number % 2 + 10 * find(decimal_number / 2));
// }
// int main()
// {
//    int n;
//    cout<<"Enter the number : ";
//    cin>>n;
//    cout<<find(n);
// }

//# FIND WHETHER X PRESENT IN A ARRAY(OF SIZE N)
// bool check(int *arr,int index,int x){
//     if(index==4){
//         return false;
//     }
//     return (arr[index]==x|| check(arr,index+1,x));
// }
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     int arr[4]={3,4,5,2};
//     cout<<check(arr,0,x);
//     return 0;
// }
// bool f(int *arr,int index,int n,int x){
//     if(index==n){
//         return false;
//     }
//     return (arr[index]==x)||(f(arr,index+1,n,x));
// }

// void sumofsubsets(int *arr,int n,int index,vector<int > &result,int sum){
//     if(index==n){
//         result.push_back(sum);
//         return ;
//    }
//     sumofsubsets(arr,n,index+1,result,sum+arr[index]);
//     sumofsubsets(arr,n,index+1,result,sum);
// }
// int main(){
//     int n=4;
//     int arr[4]={1,2,3,4};
//     vector<int> result;
//     sumofsubsets(arr,n,0,result,0);
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }

//from (0,0) to (m-1,n-1)
// int f(int i,int j,int m,int n){
//     if(i==m-1 && j==n-1) return 1;
//     if(i>=m or j>=n) return 0;
//     return f(i,j+1,m,n)+f(i+1,j,m,n);
// }
// int main(){
//     cout<<f(0,0,3,3);
//     return 0;
// }

//FIND INDEXES OF ELEMENT
// int f(int *arr,int n,int i,int x){
//     if(arr[i]==x && i<n){
//         cout<<i<<" ";
//     }
//     return f(arr,n,i+1,x);
// }
// int main(){
//     int n=4;
//     int arr[n]={8,8,3,65};
//     f(arr,n,0,8);
//     return 0;
// }

// int f(int *arr,int n,int i){
//     for(int j=0;j<n;j++){
//         cout<<arr[i++]<<",";
//         n=n-1;
//     }cout<<endl;
//     if(i==0) return 0;
//     return (f(arr,n,i)+f(arr,n,i+1));
// }
// int main(){
//     int n=5;
//     int arr[n]={5,4,3,2,1};
//     f(arr,n,0);
//     return 0;
// }

// void f(string &str,int i,string result,vector <string> &li){
//     if(i==str.length()){
//         li.push_back(result);
//         return ;
//     }
//     f(str,i+1,result+str[i],li);
//     f(str,i+1,result,li);
// } 

// void f(string &str,int i,string result,vector<string> &li){
//     if(i==str.length()){
//         li.push_back(result);
//         return ;
//     }
//     f(str,i+1,result+str[i],li);
//     f(str,i+1,result,li);
// }
// int main(){
//     string str="abc";
//     vector<string > li;
//     f(str,0,"",li);
//     for(int i=0;i<li.size();i++){
//         cout<<li[i]<<" ";
//     }
//     return 0;
// }


