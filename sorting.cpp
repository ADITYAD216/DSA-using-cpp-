#include<bits/stdc++.h>
using namespace std;

//#BUBBLE SORT
//20 50 40 10 30

//STABLE = 10 20 30 30* 40(BUBBLE SORT)
//UNSTABLE= 10 20 30* 30 40
// int main(){
//     int arr[5]={20,50,40,10,30};
//     for(int j=0;j<5;j++){
//         for(int i=0;i<4;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//         }
//     }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void bubblesort(vector <int> &arr){
//     for(int j=0;j<5;j++){
//         for(int i=0;i<4;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//         }
//     }
//     }
//     return;
// }
// int main(){
//     vector<int> arr(5);
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     bubblesort(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }return 0;
    
// }

//OPTIMISED BUBBLE SORT
// void bubblesort(vector <int> &arr){
//     for(int j=0;j<5;j++){
//         bool flag=false;
//         for(int i=0;i<4;i++){
//             if(arr[i]>arr[i+1]){
//                 flag=true;
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }if(!flag) break;
//     }
//     return;
// }
// int main(){
//     vector<int> arr(5);
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     bubblesort(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }return 0;
// }


//# SELECTION SORT(unstable)
// void selectionsort(vector<int> &arr){// 5 8 4 9 2
//     for(int i=0;i<5-1;i++){
//         int min=i;
//         for(int j=i+1;j<5;j++){
//             if(arr[j]<arr[i]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//             swap(arr[i],arr[min]);
//         }
//     }
//     return ;
// }
// int main(){
//     vector<int> arr(5);
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     selectionsort(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }return 0;
// }

//INSERTION SORT(stable)
// void insertionsort(vector<int> &arr){
//     for(int i=1;i<5;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }return ;
// }
// int main(){
//     vector<int > arr(5);
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     insertionsort(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }cout<<endl;
//     return 0;
// }



//QUESTIONS
// void movezeroatend(vector<int> &arr){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<4;j++){
//             if(arr[j]==0){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     return ;
// }
// int main(){
//     vector<int> arr(5);
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     movezeroatend(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//#
// void fruit(vector<string>&fruits){
//     for(int i=0;i<4;i++){
//         int min=i;
//         for(int j=i+1;j<5;j++){
//             if(fruits[j]<fruits[min]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//             swap(fruits[i],fruits[min]);
//         }
//     }
// }
// int main(){
//     vector<string> fruits(5);
//     for(int i=0;i<5;i++){
//         cin>>fruits[i];
//     }
//     fruit(fruits);
//     for(int i=0;i<5;i++){
//         cout<<fruits[i]<<" ";
//     }return 0;
// }

//MERGESORT(stable)
// void merge(int arr[],int l,int mid,int r){
//     int sizea=mid-l+1;
//     int sizeb=r-mid;
//     int a[sizea],b[sizeb];
//     for(int i=0;i<sizea;i++){
//         a[i]=arr[l+i];
//     }
//     for(int i=0;i<sizeb;i++){
//         b[i]=arr[mid+1+i];
//     }
//     int i=0;
//     int j=0;
//     int k=l;
//     while(i<sizea && j<sizeb){
//        if(a[i]<b[j]){
//          arr[k++]=a[i++];
//        }
//        else{
//          arr[k++]=b[j++];
//        }
//     }
//     while(i<sizea){
//          arr[k++]=a[i++];
//     }
//     while(j<sizeb){
//          arr[k++]=b[j++];
//     }return ;
// }
// void mergesort(int arr[],int l, int r){
//     int mid=((l+r)/2);
//     if(l>=r) return ;//base case
//     mergesort(arr,l,mid);
//     mergesort(arr,mid+1,r);
//     merge(arr,l,mid,r);
// }
// int main(){
//     int arr[]={1,2,3,5};
//     cout<<sizeof(arr)/sizeof(arr[0])<<endl;
//     mergesort(arr,0,3);
//     for(int i=0;i<4;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



//quick sort(not stable)
// int partition(int arr[],int first,int last){
//     int pivot=arr[last];
//     int i=first-1;//inserting 
//     for(int j=first ;j<last;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[last]);
//     return i+1;
// }
// void quicksort(int arr[],int first,int last){
    
//     if(first>=last )return ;
//     int pi=partition(arr,first,last);
//     quicksort(arr,first,pi-1);
//     quicksort(arr,pi+1,last);
// }
// int main(){
//     int arr[]={1,4,2,3};
//     quicksort(arr,0,3);
//     for(int i=0;i<4;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }

//COUNT SORT(repeating elements)
void countsort(vector<int> &a){
    int ma=INT_MIN;
    for(int i=0;i<a.size();i++){
        ma=max(a[i],ma);
    }
    vector<int> freq(ma+1);
    for(int i=0;i<5;i++){
        freq[a[i]]++;
    }
    for(int i=1;i<=ma;i++){
        freq[i]+=freq[i-1];
    }
    vector <int> ans(5);
    for(int i=4;i>=0;i--){
        ans[--freq[a[i]]]=a[i];
    }

    for(int i=0;i<5;i++){
        a[i]=ans[i];
    }
    return ;
}
    
int main(){
    vector<int> a(5);
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    countsort(a);
    for(int i=0;i<5;i++){
        cout<<a[i];
    }return 0;
}


//#BUCKET SORT(FLOATING)
// void bucketsort(float arr[],int size){
//     // making a bucket
//     vector<vector<float>> bucket(size,vector<float> ());
//     //inserting elements
//     for(int i=0;i<size;i++){
//         int index=arr[i]*size;
//         bucket[index].push_back(arr[i]);
//     }
//     //sorting
//     for(int i=0;i<size;i++){
//         if(!bucket[i].empty()){
//             sort(bucket[i].begin(),bucket[i].begin());
//         }  
//     }
//     //combining elements
//     int k=0;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<bucket[i].size();j++){
//             arr[k++]=bucket[i][j];
//         }
//     }return ;
// }
// int main(){
//     float arr[]={0.21,0.23,0.87,0.12};
//     int size=4;
//     bucketsort(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }return 0;
// }