#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// void sort(vector<int> &v){
//     int left=0;
//     int right=v.size()-1;
//     while(left<right){
//         if(v[left]==1 && v[right]==0){
//             v[left++]=0;
//             v[right--]=1;
            

//         }if(v[left]==0 ){
//             left++;
//         }if(v[right]==1){
//             right++;
//         }
//     }
// }
// int main(){
//     vector<int> v;
//     for(int i=0;i<4;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);

//     }
//     sort(v);
    
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }return 0;
// }
// bool perfect(vector<vector<int>> &mat){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j || (i+j)==n-1){
//                 if(mat[i][j]!=0){ 
//                       return true;
//                 }else{
//                     return false;
//                 }
//             }
//             else{
//                 if(mat[i][j]==0){
//                     return true;
//                 }else{
//                     return false;
//                 }
//             } 
            
//             }
        
//     }return 0;
// }
// int main(){
    
//     int n;
//     cout<<"n=";
//     cin>>n;
//     vector<vector<int>> mat(n,vector<int> (n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>mat[i][j];
//         }
//     }
//     if(perfect(mat)){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     }
//     return 0;
// }

//prefix sum
// 1234
// 5678
// 7456 (sum of the rectangle)
//return the sum of a certain arbitrary rectangle 
//eg (1,1) to (2,2)=6+7+4+5
// int rectsum(vector<vector<int >> &mat,int l1,int l2,int r1,int r2){
//     int sum=0;
//     for(int i=l1;i<=l2;i++){
//         for(int j=r1;j<=r2;j++){
//             sum+=mat[i][j];
//         }    
//     }return sum;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> mat(n,vector<int> (m));
//     int r1,l1,r2,l2;
//     cin>>r1>>l1>>r2>>l2;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }    
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<mat[i][j];"  ";
//         }cout<<endl;
//     }
//     int sum=rectsum(mat,l1,l2,r1,r2);
//     cout<<sum;
//     return 0;
// }

//pre calculating sum
// int matsum(vector<vector<int>> &mat){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             mat[i][j]+=mat[i][j-1];
//         }
//     }for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<mat[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> mat(n,vector<int> (n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>mat[i][j];
//         }
//     }
//     matsum(mat);
//     return 0;
// }

// int spiral(vector<vector<int>> &mat){

//     int minr=0;
//     int maxr=mat.size()-1;
//     int minc=0;
//     int maxc=mat[0].size()-1;
//     int t=9;
//     int count=0;
//     while(count<t){
//         for(int j=minc;j<=maxc;j++){
//             cout<<mat[minr][j]<<" ";
//             count++;
//         }minr++;
//         for(int i=minr;i<=maxr;i++){
//             cout<<mat[i][maxc]<<" ";
//             count++;
//         }maxc--;
//         for(int j=maxc;j>=minc;j--){
//             cout<<mat[maxr][j]<<" ";
//             count++;
//         }maxr--;
//         for(int i=maxr;i>=minr;i--){
//             cout<<mat[i][minc]<<" ";
//             count++;
//         }minc++;
//     }return 0;

// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> mat(n,vector<int> (m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }spiral(mat);
//     return 0;
// }

//pre calculating via columns
// int sum(vector<vector<int>> &mat){
//     int sum=0;
//     for(int j=0;j<3;j++){
//         for(int i=1;i<3;i++){
//              mat[j][i]+=mat[j][i-1];
//         }
//     }return 0;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> mat(n,vector<int> (m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }
//     sum(mat);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<mat[i][j]<<"  ";
//         }cout<<endl;
//     }return 0;
// }

//pointers
#include<iostream>
using namespace std;
// int main(){
//     int *ptr;
//     int c=9;
//     int b=4;
//     int *p2=&b;
//     ptr=&c;
//     int **l=&ptr;
//     cout<<ptr<<endl;//address of c
//     cout<<*ptr<<endl;//c value(dereference)
//     cout<<l<<endl;//address of pointer

//     int temp=*ptr;
//     *ptr=*p2;
//     *p2=temp;
//     cout<<*ptr<<" "<<*p2;

// }


//#MULTIPLY
// int multiply(int *num1,int *num2){
//     int result=*num1 * *num2;
//     return result;
// }
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int k=multiply(&num1,&num2);
//     cout<<k;
//     return 0;
// }

// int swap(int *n1,int *n2){
//     int temp=*n1;
//     *n1=*n2;
//     *n2=temp;
//     return 0;
// }
// int main(){
//     int n1,n2;
//     cout<<"n1=";
//     cin>>n1;
//     cout<<"n2=";
//     cin>>n2;
//     swap(&n1,&n2);
//     cout<<"n1="<<n1<<endl;
//     cout<<"n2="<<n2;
// }

#include<bits/stdc++.h>
// void find(string s,char ch,int *first,int *last){
//     for(int i=0;i<s.size();i++){
//         if(s[i]==ch){
//             *first=i;
//             break;
//         }
//     }
//     for(int i=s.size()-1;i>=0;i--){
//         if(s[i]==ch){
//             *last=i;
//             break;
//         }
//     }
// }
// int main(){
//     string s="aditya";
//     char ch='d';
//     int first=-1;
//     int last=-1;
//     int *pf=&first;
//     int *pl=&last;
//     find(s,ch,pf,pl);
//     cout<<*pf<<" "<<*pl;
//     return 0;
// }

// int main(){
//     int a=20;
//     double x=9.8;
//     int *ptr=&a;
//     cout<<ptr<<endl<<(ptr+1)<<endl;
//     cout<<sizeof(a)<<endl;
//     cout<<sizeof(x)<<endl;
//     ptr+=1;
//     cout<<ptr;
//     return 0;
// }

// int main(){
//     int arr[5]={1,2,5,7,12};
//     int *ptr=&arr[0];
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<*++ptr<<*++ptr<<endl;
//     cout<<(ptr+1)<<" "<<*(ptr+1)<<" "<<*(ptr+2);//work on index
//     return 0;
// }

// int main(){
//     int a[2]={2,4};
//     int *ptr=&a[0];
//     cout<<*++ptr;
//     //cout<<(*ptr)++;
//     cout<<++(*ptr);
//     return 0;
// }

// 
// void process(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<*(arr+i)<<" ";
//     }
// }
// int main(){
//     int arr[3]={5,8,7};
//     process(arr,3);
//     return 0;
// }


// using namespace std;

// int main()
// {
// 	int num, guess, tries = 0;
// 	srand(time(0)); //seed random number generator
// 	num = rand() % 100 + 1; // random number between 1 and 100
// 	cout << "Guess My Number Game\n\n";

// 	do
// 	{
// 		cout << "Enter a guess between 1 and 100 : ";
// 		cin >> guess;
// 		tries++;

// 		if (guess > num)
// 			cout << "Too high!\n\n";
// 		else if (guess < num)
// 			cout << "Too low!\n\n";
// 		else
// 			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
// 	} while (guess != num);

// 	return 0;
// }


//STRING (class and variables are objects)
// int main(){
// 	string str;
// 	// cin>>str;
// 	// cout<<"str="<<str;//only one word  
// 	getline(cin,str);//new way of input
// 	cout<<"str2 ="<<str<<endl;
// 	char ch ='a';
// 	cout<<int(ch);
// }


//BUILT IN FUNCTIONS OF STRING 
// int main(){
// 	string str="aditya";
// 	//reverse(str.begin(),str.end());//reverse
// 	cout<<str<<endl;
// 	cout<<str.substr(1,4)<<endl;//index ,no. of characters
// 	string str2="happy";
// 	cout<<str+str2<<endl;//concatenate
	
// 	//characater arrays
// 	char s1[20]="aditya";
// 	char s2[10]="happy";
// 	cout<<strcat(s1,s2)<<endl;//concatenate

// 	char c='d';
// 	str2.push_back(c);
// 	cout<<str2<<endl;
// 	cout<<strlen(s2)<<endl;//character array size[5]
// 	cout<<str.length()<<endl;//string size

// }

//question 
//'happy' into ahppy
// string countsort(string str){
//     vector <int> freq(26,0);

//     //sorting frequency of every character in string 
//     for(int i=0;i<str.length();i++){
//         int index=str[i]-'a';
//         freq[index]++;
//     }
//     int j=0;
//     for(int i=0;i<26;i++){
//         while(freq[i]--){
//             str[j++]=i+'a';
//         }
//     }
//     return str;
// }
// int main(){
//     string str;
//     cin>>str;
//     cout<<countsort(str);
//     cout<<str;
//     return 0;
// }



//anagram and nagaram
//bank and kanb
// bool isanagram(string s1,string s2){
//     vector<int> freq(26,0);
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     for(int i=0;i<s1.length();i++){
//         freq[s1[i]-'a']++;
//         freq[s2[i]-'a']--;
//     }
//     for(int i=0;i<26;i++){
//         if(freq[i]!=0){
//             return false;
//         }
//     }return true;
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     if(isanagram(s1,s2)){
//         cout<<"anagram";
//     }else{
//         cout<<"not anagram";
//     }
//     return 0;
// }

//isomorphic
// bool isisomorphic(string s,string t){
//     vector<int> v1(128,-1);
//     vector<int> v2(128,-1);
//     if(s.size()!=t.size()){
//         return false;
//     }
//     for(int i=0;i<s.size();i++){
//         if(v1[s[i]!=v2[t[i]]]){//checking if value og character at index i
//             return false;
//             cout<<false;
//         }
//         v1[s[i]]=v2[t[i]]=i;//storing at ascii values
//     }
//     return true;
// }
// int main(){
//     string s,t;
//     cin>>s>>t;
//     if(isisomorphic(s,t)){
//         cout<<"o";
//     }else{
//         cout<<"no";
//     }
//     
// }

// string longest(vector<string> &str){
//     sort(str.begin(),str.end());
//     string  s1=str[0];//first string 
//     int i=0;
//     string s2=str[str.size()-1];//last string 
//     int j=0;
//     string ans="";
//     while(i<s1.size() && j<s2.size()){
//         if(s1[i]==s2[j]){
//             ans+=s1[i];
//             i++;
//             j++;
//         }else{
//             break;
//         }
//     }return ans;
// }
// int main(){
//     int n;
//     cout<<"enter no of strings";
//     cin>>n;
//     cout<<"enter string";
//     vector<string> str(n);
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }
//     cout<<"longest common prefix"<<longest(str)<<endl;
// }

// string longest(vector<string> &str){
//     string s1=str[0];
//     int ans_length=s1.size();
//     for(int i=1;i<str.size();i++){
//         int j=0;
//         while (i<s1.size() && i<str[i].size()&& s1[j]==str[i][j]){
//             j++;
//         }
//         ans_length=min(ans_length,j);
//     }
//     string ans=s1.substr(0,ans_length);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector <string> str(n);
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }
//     cout<<longest(str);
//     return 0;
// }



//s=1[b]->b
//s=3[b 2[ca]]-> bcacabcacabcaca
// string decodedString(string s) {
//     string result = "";
//     for(int i=0;i<s.size();i++){
//         if(s[i]==']'){
//             string str = "";
 
//             while(!result.empty() and result.back() != '['){    //extracting the string that needs to be repeated
//                 str += result.back();
//                 result.pop_back();
//             }
//             result.pop_back();  //removing the '[' bracket
 
//             string integer = "";
 
//             while(!result.empty() and (result.back() >= '0' and result.back() <= '9')){     //extracting the number denoting the number of times the string 'result' will be repeated.
//                 integer += result.back();
//                 result.pop_back();
//             }
 
//             reverse(integer.begin() , integer.end()); //reversing because we are currently moving in the opposite fashion 
//             int number = stoi(integer);    //converting string to integer using the stoi() method
 
//             while(number--){
//                 for(int j=str.size()-1;j>=0;j--){
//                     result.push_back(str[j]);       //repeatedly filling the string till 'number' times
//                 }
//             }
//         }
//         else result.push_back(s[i]); 
//     }
 
//     return result;
// }
 
// int main()
// {
// 	string str;
//     cout<<"Enter the string : ";
//     cin>>str;
 
//     cout<<"Desired output is: ";
// 	cout<<decodedString(str);
// 	return 0;
// }
 

 //SLIDING WINDOW(O(n))
 //0001101011 if k=2 find the longest consecutive string of 1 if we flip 0 to 1
//  int longestones(string str,int k){
//     int start=0;
//     int end =0;
//     int zero_count=0;
//     int max_length=0;
//     for(;end<str.length();end++){
//         if(str[end]=='0'){
//             zero_count++;
//         }
//         while(zero_count>k){
//             if(str[start]=='0')zero_count--;
//             start++;

//         }
//         max_length=max(max_length,end-start+1);
//     }return max_length;
//  }
//  int main(){
//     string str;
//     cout<<"enter binary string";
//     cin>>str;

//     int k;
//     cout<<"enter max flips";
//     cin>>k;
//     cout<<longestones(str,k);
//     return 0;
//  }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxdiff=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            maxdiff=max(maxdiff,abs(arr[i]-arr[j]));
            cout<<maxdiff<<" ";
        }
    }
    cout<<"maxdiff="<<maxdiff;
    return 0;
}