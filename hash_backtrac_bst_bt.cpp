#include<bits/stdc++.h>
using namespace std;
//insert O(1) linear search(O(N)) binary search(O(logn))
//HASHING(finding the unique indexing for all elements to store them )

//hash functions
//#1division h(k)=k mod m(m brackets)

//#2midsquare method h(k)=k^2 and extract middle digits
//->k=14 k^2=196 so 9 will be the index

//#3 digit folding method  = fold key into equal size parts 
//->abcde = ab+cd+e(hash value) 12345=12+34+5=51(hash value)

//#4 multiplication h(k)=floor(M*(k*A mod 1))[0<A<1](M=size of the hash table )
//-> (k=12345 A=0.01), k*A=123.45 , (k*A mod 1)=.45, .45*M=.45*10=4.5, floor(4.5)=4


//COLLLISIONS(when two elements have same hash value)
//#1open hashing(O(length of linkedl)) = if at a index two elements can be stored with the help of linked list
//#2 closed hashing
//-> at [(h(k)+i)mod 10] where (0<i<M) (h(k)=kmod M) M=size

//#3 quadratic probbing 
//-> at (h(k)+i^2)mod M

//#4 double hashing 
//-> {h1(k)+i*(h2(k))}mod M (0<i<M) (h1k=kmod5)(h2k=kmod10)



//LOAD FACTOR=N/M
//N->NO. OF ELEMENTS , M ->NO. OF BUCKETS
//REHASHING IS DONE WHEN LOAD FACTOR  limit crosses(i.e.=0.75)
//->inc size of table and redistributing ele in it
// class Hashing{
//     public:
//     vector<list<int>> hashtable;
//     int buckets;
//     Hashing(int size){
//         buckets=size;
//         hashtable.resize(size);
//     }
//     int hashvalue(int key){
//         return key%buckets;//making key
//     }
//     void addkey(int key){
//         int idx=hashvalue(key);
//         hashtable[idx].push_back(key);//in linked list
//     }
//     list<int>:: iterator search(int key){
//         int idx=hashvalue(key);
//          return find(hashtable[idx].begin(),hashtable[idx].end(),key);//hashtabke[idx=]is a linked list

//     }
//     void deletekey(int key){
//         int idx = hashvalue(key);
//         if(search(key)!=hashtable[idx].end()){//key is any value is present or not
//             hashtable[idx].erase(search(key));
//             cout<<"yo";
//         }
        
        
//     }
// };

// int main(){
//     Hashing h(10);
//     h.addkey(2);
//     h.addkey(3);
//     h.addkey(4);
//     h.addkey(5);
//     h.deletekey(2);
//     return 0;
// }


//###MAP###
//MAP IN C++ STL(stores key value pairs)(any order)
//cant have duplicate keys <map>
//INITIALISE=map<string,int> directory={{name,21},{oadpk,97}};

//INSERTION
//#1directory.insert({key,value})
//#2directory[key]=value

//loop to print
//for(auto ele:map){//ele datatype will be key value pair
// key=ele.first;
// value=ele.second
//}
  
// int main(){
//     map<string,int> directory;
//     directory["naman"]=3846;
//     directory["aditya"]=6466;
//     directory["hello"]=6566;
//     for(auto ele:directory){
//         cout<<"name="<<ele.first<<" ";
//         cout<<"phone no="<<ele.second<<endl;
//     }
//     directory["hello"]=4646646;//O(logn)//it will update
//     for(auto ele:directory){
//         cout<<"name="<<ele.first<<" ";
//         cout<<"phone no="<<ele.second<<endl;
//     }
//     directory.insert(make_pair("hello",6566));//won't update cause hello key is already there
//     for(auto ele:directory){
//         cout<<"name="<<ele.first<<" ";
//         cout<<"phone no="<<ele.second<<endl;
//     }
//     return 0;
// }
//erase()= m.erase(itr){O(logn)}
//->m.erase(key)
//->m.erase(start_itr,end_itr)//exclude end(O(N))

//swap()=m1.swap(m2) or swap(m1,m2);
//m.clear() ,m.empty(),m.size(),m.max_size()=size allocated
//m.find(key)=returns itr else returns map.end()=itr after the last value{(o(logn))}
//m.count(key)=0 or 1 

// int main(){
//     map<string,int> directory;
//     directory["naman"]=3846;
//     directory["aditya"]=6466;
//     directory["hello"]=6566;
//     for(auto ele:directory){
//         cout<<"name="<<ele.first<<" ";
//         cout<<"phone no="<<ele.second<<endl;
//     }
//     map<string,int>::reverse_iterator itr;
//     for(itr=directory.rbegin();itr!=directory.rend();itr++){
//         cout<<"name="<<itr->first<<" ";
//         cout<<"phone no="<<itr->second<<endl;
//     }
//     return 0;
// }


//question (0(N))
//sum of the repetative elements [1,2,3,1,1,3,3]=1+3=4
// int main(){
    // int n;
    // cin>>n;
    // vector<int> input(n);
    // for(int i=0;i<n;i++){
    //     cin>>input[i];
    // }
    // map<int,int> m;//space(0(unique elements))
    // for(int i=0;i<n;i++){//0(N)
    //     //storing frequency of every element in input array
    //     m[input[i]]++;
    // }
    // int sum=0;
    // //finding sum of repetative elements
    // for(auto pair:m){
    //     if(pair.second>1){
    //         sum+=pair.first;//adding keys if their freq is more than 1
    //     }
    // }
    // cout<<"ANS="<<sum;
// }

//UNORDERED MAP(no particular order)
// int main(){
//     unordered_map <int,int> record;//roll no and age
//     record.insert(make_pair(22019,19));
//     record.insert(make_pair(22245,18));
//     record[22019]=20;//change 
//     record.insert(make_pair(22019,4646));//no change
//     for(auto pair:record){
//         cout<<pair.first<<" ";
//         cout<<pair.second<<endl;
//     }


//     return 0;
// }


//MULTI MAP(ordered)(duplicate keys are allowed)
//insert delete search 0(logn) because of the order restriction

// int main(){
//     multimap<string,int> directory;
//     directory.insert(make_pair("aditya",7483748));
//     directory.insert(make_pair("aditya",7848));
//     directory.insert(make_pair("yoyo",74838));
//     directory.insert(make_pair("hello",7458));
//     //directory["hello"]=46464646;not allowed
//     for(auto pair:directory){
//         cout<<pair.first<<" ";
//         cout<<pair.second<<endl;
//     }return 0;
// }
//m.erase(itr or key) o(logn)
//m.erase(start,end)=o(N)
//m.find(key)=itr of element else end()
//m.count(key)=no. of keys 


//unordered multimap
//duplicate keys are allowed ,hashing 0(N )=worst case
// int main(){
//     unordered_multimap <string,int> fruit;
//     fruit.insert(make_pair("apple",6));
//     fruit.insert(make_pair("mango",8));
//     fruit.insert(make_pair("apple",89));
//     for(auto pair:fruit){
//         cout<<"FRUIT="<<pair.first<<",";
//         cout<<"count="<<pair.second<<endl;
//     }
//     return 0;
// }//insert erase  find  0(1)
//count= 0(n)n= no. of occurances 
//begin=



//question=0(n)
//#1 [collegeee,coll,collegge] :-yes , these 3 strings can be converted into college
// bool canmakeequal(vector<string> &v){
//     unordered_map<char,int>m;
//     for(auto str:v){//for every string in v
//         for(char c:str){//for every characters in string
//              m[c]++;//inserting the elements
//         }
//     }
//     int n=v.size();
//     for(auto ele:m){
//         if(ele.second%n!=0){//to find whether the ele is present in all string or not 
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<string> v(n);
//     for(int i=0 ;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<(canmakeequal(v)? "yes":"no")<<endl;


//     return 0;
// }


//question #2 o(N)=sum of length of s1 and s2
//find whether the string is anagram or not 
// bool check(string &s1,string &s2){
//     if(s1.size()!=s2.size()){
//         return false;
//     }
//     map<char,int> m1;
//     for(auto c1:s1){
//         m1[c1]++;//storing characters freq
//     }
//     for(auto c2:s2){
//         if(m1.find(c2)==m1.end()){//not found
//             return false;
//         }else{//found to reduce the value
//             m1[c2]--;
//         }
//     }
//     for(auto pair:m1){//to find whether the freq is zero or not
//         if(pair.second!=0){//value should be true
//             return false;
//         }
//     }
//     return true;

// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     cout<<(check(s1,s2)?"true":"false");
//     return 0;
// }



//isomorphic asda=bkmb
// bool checkisomorphic(string s1,string s2){
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     unordered_map<char,char> m;
//     //checking one to many mapping
//     for(int i=0;i<s1.length();i++){
//         if(m.find([s1[i]])!=m.end()){//present
//             if(m[s1[i]]!=s2[i]){
//                 return false;
//             }
//         }else{
//             m[s1[i]]=s2[i];
//         }
//     }
//     m.clear();

//     for(int i=0;i<s2.length();i++){
//         if(m.find([s2[i]])!=m.end()){//present
//             if(m[s2[i]]!=s1[i]){
//                 return false;
//             }
//         }else{
//             m[s2[i]]=s1[i];
//         }
//     }
// }



// bool checkisomorphic(string str1, string str2)
// {
//     if(str1.length() != str2.length())return false;
// 	unordered_map<char, char>m;
 
// 	for (int i = 0; i < str1.length(); i++)
// 	{
// 		if (m.count(str1[i]))
// 		{
// 			if (m[str1[i]] != str2[i]) {
// 				return false;
// 			}
// 		}
// 		else {
// 			vector<char>v;
// 			for (auto it : m) {
// 				v.push_back(it.second);
// 			}
// 			if (find(v.begin(), v.end(), str2[i]) != v.end()) {
// 				return false;
// 			}
// 			else {
// 				m[str1[i]] = str2[i];
// 			}
// 		}
// 	}
// 	return true;
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     cout<<checkisomorphic(s1,s2)?"true":"false";
//     return 0;
// }

//#4 question=0(n)
//given a array of length n, a target ,return a pair's indexes whose sum is equal to the target 
// arr=[1,3,4,5] target =7 output=[1,2]where 1,2 are the indexes of 3 and 4 resp...
// vector<int> result(vector<int> &arr,int target){
//     unordered_map<int,int> m;//<number,index>
    
//     vector<int> ans(2,-1);//of size two 
//     for(int i=0;i<arr.size();i++){
//         if(m.find(target-arr[i])!=m.end()){// second no. is present or not
//             ans[0]=m[target-arr[i]];//inde xof second number
//             ans[1]=i;//index of first element
//         }else{
//             m[arr[i]]=i;//inserting into map if ele is not already there
//         }
//     }return ans;

// }
// int main()
// {
//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> ans=result(arr,target);
//     cout<<ans[0]<<" "<<ans[1];
//     return 0;
// }


//#5 question(this solution works only when first prefix sum equals with other)
//given an array of length N ,find the length of longest subarray whose sum is equal to zero
//[15,-2,2,-8,1,7,10,23]=5 (1-2+2-8+7=0) hence ans is 5
//using prefix sum method [15,13,15,7,8,15,25,48]
// if sum upto (L-1) equal to sum upto (r) then the sum from (L to r )will be zero
// int maxlength(vector<int> &v){//(o(n))=len of vector
//     unordered_map<int,int> m;//<prefixsum,index>
//     int prefixsum=0;
//     int maxlength=0;
//     for(int i=0;i<v.size();i++){
//         prefixsum+=v[i];//finding prefix sum
//         if(prefixsum==0){
//             maxlength++;//increment in length
//         }
//         if(m.find(prefixsum)!=m.end()){//prefix sum matches 
//             maxlength=max(maxlength,i-m[prefixsum]);//i-index of prefix sum
//         }else{
//             m[prefixsum]=i;//adding indexes in map
//         }
//     }
//     return maxlength;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<maxlength(v);
//     return 0;
// }



//BACKTRACKING
//string pqr print all permutations time=0(n!) because f(n)=n*f(n-1)
// void permutations(string &str,int i){
//     if(i==str.size()){
//         cout<<str<<endl;
//         return ;
//     }
//     for(int j=i;j<str.size();j++){
//         swap(str[i],str[j]);//one time
//         permutations(str,i+1);
//         swap(str[i],str[j]);//step of backtracking
//     }
// }
// int main(){
//     string str="abc";
//     permutations(str,0);
//     return 0;
//}

//question 
//rat in a maze = square matrix (binary) top left to bottom right
// int find(int i,int j,vector<vector<int>> &m){
//     int n=m.size();
//     if(i==n-1 and j==n-1) return 1;
//     int ans=0;
//     if(i<m.size() and j<m.size()){//recursive call
//         ans+=find(i+1,j,m);
//     ans+=find(i,j+1,m);
//     }
//     return ans;
// }
// int main(){
//     vector<vector<int>> m={{1,2,3},{4,5,6},{5,3,2}};
//     int result =find(0,0,m);
//     cout<<result;
//     return 0;
// }
// bool canwego(int a,int b,vector<vector<int>> &grid){
//     return (a<grid.size() and b<grid.size()and a>=0 and b>=0) and grid[a][b]==1;
// }
// int f(int i,int j,vector<vector<int>> &grid){
//     int n=grid.size();
//     if(i==n-1 and j==n-1) return 1;

//     int ans=0;
//     grid[i][j]=2;//mark as visited

//     if(canwego(i,j+1,grid))check
//         ans+=f(i,j+1,grid);
//     if(canwego(i+1,j,grid))//check
//         ans+=f(i+1,j,grid);
    
//     grid[i][j]=1;//backtracking point
//     return ans;
// }

// int main(){
//     vector<vector<int>> grid={
//         {1,1,1,1},
//         {0,1,0,1},
//         {0,1,1,1},
//         {0,1,1,1}
//     };
//     int res=f(0,0,grid);
//     cout<<res<<endl;
//     return 0;
// }


//#question 
//consider an matrix chess,n queen problem is to accomodate n queens on N*N chess such that no 2 queens can attack each other
// bool canplacequeen(int row,int col,vector<vector<char>> grid){
//     //is someone attacking from vertical
//     for(int i=row-1;i>=0;i--){
//         if(grid[i][col]=='Q'){
//             return false;
//         }
//     }
//     //is someone attacking crossly
//     for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--){
//         if(grid[i][j]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row-1,j=col+1;i>=0 and j<grid.size();i--,j++){
//         if(grid[i][j]=='Q'){
//             return false;
//         }
//     }
//     return true;
// }
// void nqueen(int row,int n,vector<vector<char>> &grid){
//     if(row==n){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<grid[i][j]<<" ";
//             }cout<<endl;
//         }    
//     }
//     for(int col=0;col<n;col++){
//         //we will go to all the columns
//         //lets check if we can place a queen at currentrow and col
//         if(canplacequeen(row,col,grid)){
//             grid[row][col]='Q';
//             nqueen(row+1,n,grid);//incrementing row
//             grid[row][col]='.';
//         }
// }
// }
// int main(){
//     int n=4;
//     vector<vector<char>> grid(n,vector<char> (n,'.'));
//     nqueen(0,n,grid);
//     return 0;
// }


//BACKTRACking question no. 4
//sudoku
// bool canweplace(vector<vector<char>> &board,int row,int col,char num){
//     for(int j=0;j<9;j++){
//         if(board[row][j]==num) return false;//got value in row so no need to place
//     }for(int i=0;i<9;i++){
//         if(board[i][col]==num)return false;
//     }
//     int r=(row/3)*3;
//     int c=(col/3)*3;
//     for(int i=r;i<(r+3);i++){
//         for(int j=c;j<(c+3);j++){
//             if(board[i][j]==num)return false;
//         }
//     }return true;
// }
// bool sudoku(vector<vector<char>>& board,int row,int col){
//     if(col==9)return sudoku(board,row+1,0);//all columns done so increment row
//     if(row==9) return true;
//     if(board[row][col]=='.'){//if it is empty
//         for(int num=1;num<=9;num++){//put any num. between 1 to 9
//             if(canweplace(board,row,col,'0'+num)){
//                 board[row][col]='0'+num;//ascii value of 0 to 9
//                 bool res=sudoku(board,row,col+1);//incrementing the column
//                 if(res) return true;//if done filling then return true
//                 board[row][col]='.';//if we cant then reset
//             }
//         }return false;
//     }else{
//         return sudoku(board,row,col+1);
//     }
// }
// //30.41



//question 5 := place k knights such that they do not attack each other
//M*N matrix is there (ghoda) and k is the number of knights
// bool canweplace(vector<vector<char>> &grid,int row,int col){
//     if(row-1>=0 and col-2>=0 and grid[row-1][col-2]=='K')return false;
//      if(row-2>=0 and col-1>=0 and grid[row-2][col-1]=='K')return false;
//      if(row-1>=0 and col+2>=0 and grid[row-1][col+2]=='K')return false;
//      if(row-2>=0 and col+1>=0 and grid[row-2][col+1]=='K')return false;
//      return true;
// } 
// void knights(int m,int n,vector<vector<char>> &grid,int k,int row,int col){
//     if(k==0){
//         //all knights are placed
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<grid[i][j]<<". ";
//             }cout<<endl;
//         }
//         return ;
//     }
//     if(col==n){
//         return knights(m,n,grid,k,row+1,0);//row increment
//     }
//     if(row==m){
//         return ;//col increment
//     }
//     for(int i=row;i<m;i++){
//         for(int j=(i==row ?col:0);j<n;j++){
//             if(canweplace(grid,i,j)){
//                 grid[row][col]='K';
//                 knights(m,n,grid,k-1,i,j+1);//if we can place the knight so we will go ahead, decrement one knight
//                 grid[row][col]=' ';//backtracking line
//             }
//         }
//     }
// }

// int main(){
//     int n=3,m=3;
//     vector<vector<char>>  grid(n,vector<char> (m,' '));
//     knights(m,n,grid,2,0,0);
//     return 0;
// }

//BINARY SEARCH
//GIVEN A SORTED ARRAY 
// int binarysearch(vector<int> &input,int target){
//     int lo=0;
//     int hi=input.size()-1;
//     while(lo<=hi){
//         //calculate mid point 
//         int mid=(lo+hi)/2;
//         if(input[mid]==target) return mid;
//         else if(input[mid]<target){
//             //discard left part
//             lo=mid+1;
//         }else{
//             //discard right part
//             hi=mid-1;
//         }
//     }return -1;
// }

// int recursivebinarysearch(vector<int> &input,int target,int lo,int hi){//0(logn) space0(logn)
//     if(lo>hi)return -1;
//     int mid=(hi+lo)/2;
//     if(input[mid]==target){
//         return mid;
//         cout<<mid;
//     }
//     if(input[mid]<target){
//         return recursivebinarysearch(input,target,mid+1,hi);
//     }else{
//         return recursivebinarysearch(input,target,lo,mid-1);
//     }
// }
// int main(){
//     vector<int> input;
//     // int n;
//     // cin>>n;
//     int target;
//     cin>>target;
//     for(int i=0;i<4;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     for(int i=0;i<4;i++){
//         cout<<input[i]<<" ";
//     }
    
//     cout<<recursivebinarysearch(input,target,0,3);
//     //cout<<binarysearch(input,10);
//     return 0;
// }

//modified formula of mid= lo + (hi-lo)/2


//first occurance
// int firstocc(vector<int> &input,int target){
//     //time 0(logn)
//     //space 0(1)
//     int ans=-1;
//     int lo=0;;
//     int hi=3;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(input[mid]==target){
//             ans=mid;
//             hi=mid-1;
//         }
//         else if(input[mid]>target){
//             hi=mid-1;
//         }else{
//             lo=mid+1;
//         }
//     }return ans;
// }
// int main(){
//     vector<int> input;
//     for(int i=0;i<4;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     for(int i=0;i<4;i++){
//         cout<<input[i]<<" ";
//     }
//     cout<<firstocc(input,5);
// }



//find squareroot(0(logn)) space(0(1))
// int sqrt(int x){
//     int lo=1,hi=x;
//     int ans =-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(mid*mid<=x){
//             ans=mid;
//             lo=mid+1;
//         }else{
//             hi=mid-1;
//         }
//     }return ans;
// }
// int main(){
//     cout<<sqrt(54);
// }


//[1,1,2,3,4,4,4,5] find the first and last occurance of target
// int lowerbound(vector<int> &input,int target){
//     //time 0(logn)
//     //space 0(1)
//     int ans=-1;
//     int lo=0;;
//     int hi=input.size()-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(input[mid]>=target){//
//             ans=mid;
//             hi=mid-1;
//         }else{
//             lo=mid+1;
//         }
//     }cout<<ans;
//     return ans;
// }


// int upperbound(vector<int> &input,int target){
//     //time 0(logn)
//     //space 0(1)
//     int ans=-1;
//     int lo=0;;
//     int hi=input.size()-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(input[mid]>target){//
//             ans=mid;
//             hi=mid-1;//discard right 
//         }else{
//             lo=mid+1;
//             ans=lo;//in case target is present all over the array
//         }
//     }cout<<"ans="<<ans<<endl;
//     return ans;

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> input;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }int target;
//     cin>>target;
//     int lb=lowerbound(input,target);
//     vector<int> result;
//     if(input[lb]!=target){
//        result.push_back(-1);
//        result.push_back(-1);
//     }else{
//         int ub=upperbound(input,target);
//         result.push_back(lb);
//         result.push_back(ub-1);
//     }
//     cout<<result[0]<<" "<<result[1];
//     return 0;
// }


//find the index of the min ele in the rotated sorted array
//[3,4,5,1,2]=3
//if a[0]>a[n-1] then rotatory sorted
//if a[0]<a[n-1] then sorted array
//if mid >mid+1
// int findmininsortedrotated(vector<int> &input){
//     if(input.size()==1)return input[0];//if only one ele is there
//     int lo=0;
//     int hi=input.size()-1;
//     if(input[lo]<input[hi]){//sorted arrray
//         return lo;
//     }
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;//mid
//         if(input[mid]>input[mid+1])return mid+1;//check it by doing
//         if(input[mid]<input[mid-1]) return mid;
//         if(input[mid]>input[lo]){
//             lo=mid+1;//discard left side
//         }else{
//             hi=mid-1;//discard right side
//         }
//     }
//     return -1;
// }
// int main(){ 
//     int n;
//     cin>>n;
//     vector<int> input;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     cout<<findmininsortedrotated(input);
// }



//find the index of the target 
// int binarysearchsortedarray(vector<int> &input,int target){
//     int lo=0;
//     int hi=input.size()-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(input[mid]==target) return mid;
//         if(input[mid]>=input[lo]){
//             if(target>=input[lo] and target<=input[mid]){
//                 hi=mid-1;
//             }else{
//                 lo=mid+1;
//             }
//         }else{
//             if(target>=input[mid] and target<=input[hi]){
//                 lo=mid+1;
//             }else{
//                 hi=mid-1;
//             }
//         }
//     }
//     return -1;
// }
// int main(){ 
//     int n;
//     cin>>n;
//     vector<int> input;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     cout<<binarysearchsortedarray(input,5);
// }



//index of peak element 
// int peakinmountainarray(vector<int>&input){
//     int lo=1;
//     int ans=-1;
//     int hi=input.size()-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(input[mid]>input[mid-1]){
//             ans=max(ans,mid);
//             lo=mid+1;
//         }else{
//             hi=mid-1;
//         }
//     }return ans;
// }
// int main(){
//     vector<int> input={1,9,0,5,8,6};
//     cout<<input[peakinmountainarray(input)];
// }

//find target in increasing matrix
//[1,2,3,4]
//[6,7,8,9]
//[11,12,13,14]target=6 so return 1 else 0
// bool searchmatrix(vector<vector<int>> &a,int target){
//     int n=a.size();
//     int m=a[0].size();//no of columns
//     int lo=0;
//     int hi=n*m-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         int x=mid/m;
//         int y=mid%m;
//         if(a[x][y]==target){
//             return true;
//         }else if(a[x][y]<target){
//             lo=mid+1;
//         }else{
//             hi=mid-1;
//         }
//     }return false;
// }
// int main(){
//     vector<vector<int>> a={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     int target=16;
//     cout<<searchmatrix(a,target);
//     return 0;
// }



//max no. of chocolates allocated to a student is minimum
//[12,34 ,67,90] students=2
//0(n*log(summation of chocolates))
// bool candistribute(vector<int> &arr,int mid,int s){
//     int student=1;//initially one 
//     int n=arr.size();
//     int currsum=0;//sum of chocolates
//     for(int i=0;i<n;i++){
//         if(arr[i]>mid)return false;
//         if(currsum+arr[i]>mid){
//             student++;
//             currsum=arr[i];
//             if(student>s)return false;
//         }else{
//             currsum+=arr[i];
//         }
//     }return true;
// }
// int distchoco(vector<int> &arr,int s){
//     int n=arr.size();
//     arr.sort();
//     int lo=arr[0];
//     int hi=0;
//     for(int i=0;i<arr.size();i++){
//         hi+=arr[i];
//     }
//     int ans=-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(candistribute(arr,mid,s)){
//             ans=mid;
//             hi=mid-1;
//         }else{
//             lo=mid+1;
//         }
//     }
// }



//##TREES##


//hierarchical data
//root is the top most part
//child node=successor /descendants of any node
//parent node=predecessor  of any node
//sibling nodes =which has same parent 
//leaf node=which doesnt have a child node
//no of edges=link between 2 nodes
//level=no of edges from root node
//height=max no. of edges between a leaf node and root node
//size=no. of nodes in a tree
// if n nodes then n-1 edges
//subtree=tree which is a child of a node

//1#generic tree//a node can have any number of child nodes
//2#binary tree = a node can have maximum 2 child nodes
//3# binary search tree = all nodes in left subtree willhave less than the rooot value
            //and right subtree have value more than the root value
//#4 AVL trees=diff between heights of left subtree and right can be -1,0,1

// class node{
//     public:
//     int value;
//     node* left;
//     node* right;
//     node(int v){
//         value=v;
//         left=right=NULL;
//     }
// };
// int main(){
//     node* root=new node(2);
//     root->left=new node(3);
//     root->right=new node(4);
//     cout<<root->value;
//     cout<<root->left->value;
// }



//DFS(DEPTH FIRST SEARCH)=along a height

//1#preorder
//visit root,left subtree,then right subtree
class node{
    public:
    int value;
    node* left;
    node* right;
    node(int v){
        value=v;
        left=right=NULL;
    }
};
void preorder(node* rootnode){
    //base case
    if(rootnode==NULL){
        return ;
    }
    cout<<rootnode->value<<" ";
    //recursive
    preorder(rootnode->left);
    preorder(rootnode->right);
}


//#2 INORDER =left subtree,root,right subtree
void inorder(node* rootnode){
    if(rootnode==NULL)return;
    inorder(rootnode->left);//left subtree
    cout<<rootnode->value<<" ";
    inorder(rootnode->right);
}


//#3 POSTORDER=left,right,root
void postorder(node* rootnode){
    if(rootnode==NULL){
        return ;
    }
    postorder(rootnode->left);
    postorder(rootnode->right);
    cout<<rootnode->value<<" ";
}

// int main(){
//     node* rootnode=new node(2);
//     rootnode->left=new node(4);
//     rootnode->right=new node(10);
//     rootnode->left->left=new node(6);
//     rootnode->left->right=new node(5);
//     rootnode->right->left=new node(11);
//     preorder(rootnode);
//     //inorder(rootnode);
//     postorder(rootnode);
//     return 0;
// }
//   2
// 4   10
//6 5 11



//LEVEL ORDER =BREADTH FIRST TRAVERSEL
void levelorder(node* rootnode){
    if(rootnode==NULL){
        return ;
    }
    queue<node*> q;
    q.push(rootnode);
    while(!q.empty()){
        int nodesatcurrentlevel=q.size();
        while(nodesatcurrentlevel--){
            node* currnode=q.front();
            q.pop();
            cout<<currnode->value<<" ";

            if(currnode->left) q.push(currnode->left);
            if(currnode->right) q.push(currnode->right);
        }cout<<endl;

    }
}

//maximum depth =no. of max nodes in a path
int maxdepth(node* rootnode){
    if(rootnode==NULL){
        return 0;
    }
    int leftdepth=maxdepth(rootnode->left);
    int rightdepth=maxdepth(rootnode->right);

    return (max(leftdepth,rightdepth)+1);
}
//find the number of leaf node
int leafnode(node* rootnode){
    if(rootnode==NULL)return 0;
    if(rootnode->left==NULL && rootnode->right==NULL){
        return 1;
    }
    int leftsubtree=leafnode(rootnode->left);
    int rightsubtree=leafnode(rootnode->right);
    return (leftsubtree+rightsubtree);
}

//to print the values of right side of the tree
vector<int > rightview(node* rootnode){
    vector<int> ans;
    if(rootnode==NULL){
        return ans;
    }
    cout<<rootnode->value<<" ";
    queue <node* > q;
    q.push(rootnode);
    while(!q.empty()){
        int nodesatcurrentlevel=q.size();
        while(nodesatcurrentlevel--){
            node* currnode=q.front();
            q.pop();
            if(nodesatcurrentlevel==1){//last ele in right side
                ans.push_back(currnode->value);
            }
            if(currnode->right){
                q.push(currnode->right);//to insert
            }
            if(currnode->left){
                q.push(currnode->left);//to insert
            }
        }
    }return ans;
}

//top view // 6 4 2 10 11 
//divide the tree into columns queue wil consist of node /column

int main(){
    node* rootnode=new node(2);
    rootnode->left=new node(4);
    rootnode->right=new node(10);
    rootnode->left->left=new node(6);
    rootnode->left->right=new node(5);
    rootnode->right->left=new node(11);
    //levelorder(rootnode);
    //cout<<maxdepth(rootnode);//3
    //cout<<leafnode(rootnode);//3
    vector<int > result=rightview(rootnode);
    for(auto i:result){
        cout<<i<<" ";
    }
}//2: 2: 08