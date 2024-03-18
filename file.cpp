//#OUTPUT
/*#include<iostream>
using namespace std;

int main(){
    cout<<"heloo djij";
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    cout<<"heloo djij"<<endl<<"wkjj";//for next line
    return 0;
}*/


//#INPUT 
/*#include<iostream>
using namespace std;
int main(){
    int apples;
    cin>>apples;//input
    cout<<"no of apples:"<<apples;//print
    return 0;
}*/

//#SWAP
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a";
    cin>>a;
    cout<<"b";
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a"<<a<<endl;
    cout<<"b"<<b;
    return 0;
}*/


//#OPERATORS 
/*#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=4;
    cout<<a+b<<endl;//7
    cout<<a-b<<endl;//-1
    cout<<a*b<<endl;

    cout<<(a==3)<<endl;//1
    cout<<(a>=b)<<endl;//0

    cout<<(a==3 && b==4)<<endl;//1
    cout<<(a==4 && b==4)<<endl;//0
    cout<<(a!=4);//1

    //BITWISE COMPLIMENT(~)
    //LEFT SHIFT(<<)=ADD 0 AT THE END
    //RIGHT SHIFT(>>)ADD 0 AT THE START

    //PRECEDENCE()
    return 0;
}*/

// IF ELSE
//#include<iostream>
//using namespace std;
/*int main(){
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }return 0;
}*/
/*int main(){
    int a;
    cin>>a;
    if(a>18){
        cout<<"og";
    }else if (a<18 && a>13){
        cout<<"tip";
    }else{
        cout<<"pro";
    }return 0;
}*/
/*int main(){
    int marks=213;
    marks>30 ? cout<<"pass ":cout<<"fail";
    return 0;
}*/


//#LOOP(sum)
// #include<iostream>
// using namespace std;
/*int main(){
    int n,i;
    cin>>n;
    int sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum;
    return 0;
}*/
/*int main(){
    for(int i=1;i<5;i++){
        cout<<i;
    }return 0;
}*/
/*int main(){
    for(int i=0;i<=3;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }cout<<"\n";//imp
    }return 0;
}*/
/*int main(){
    for(int i=1;i<=7;i++){
        for(int j=i;j<=7;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }cout<<endl;
    }return 0;
}*/
/*int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){//1  12 123 1234
            cout<<j;
        }cout<<endl;
    }return 0;
}*/
/*int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }for(int j=1;j<=i;j++){
            cout<<j;
        }for(int j=(i-1);j>=1;j--){// 
            cout<<j;
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n=6;
    int m=4;
    for(int i=1;i<=4;i++){
        for ( int j=1;j<=6; j++){
            cout<<j;
        }cout<<endl;
    }
}*/

/*int main(){
    int n=6,m=4;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==m||j==1||j==6){
                cout<<j;
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }return 0;
}*/
/*int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            if((i+j)%2==0){
                cout<<"1";
            }else{
                cout<<"2";
            }
        }cout<<endl;
    }return 0;
}*/

/*int main(){
    int n,count;
    cin>>n;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<count;
    return 0;
}*/

/*int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int remainder=n%10;
        sum+=remainder;
        n/=10;
    }cout<<sum;
    return 0;
}*/

/*int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int r=n%10;
        reverse=reverse*10+r;
        n/=10;
    }cout<<reverse;
    return 0;
}*/

//s= 1-2+3-4
/*int main(){
    int n;
    cin>>n;
    int r=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            r+=i;
        }else{
            r-=i;
        }
    }cout<<r;
    return 0;
}*/
/*int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        
        fact*=i;
    }cout<<fact;
    return 0;
}*/

/*int main(){
    int array[]={1,4,5,7};
    array[2]=3;
    cout<<array[2];
    cout<<sizeof(array);
    cout<<endl;
    //for loop
    for(int i=0;i<=3;i++){
        cout<<array[i];
    }
    cout<<endl;
    //for each loop
    for(int ele:array){
        cout<<ele<<endl;
    }
    //while
    int i=0;
    while(i<=3){
        cout<<array[i];
        i++;
    }

    return 0;
}*/
/*int main(){
    char vowels[5];
    for(int i=0;i<5;i++){
        cin>>vowels[i];
    }for (int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }return 0;
}*/

//SUM
/*int main(){
    int array[5]={4,8,9,4,7};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=array[i];
    }cout<<sum;
    return 0;
}*/
//MAX
/*int main(){
    int array[5]={4,8,9,4,7};
    int  max=array[0];
    for(int i=0;i<5;i++){
        if (max<array[i]){
            max=array[i];
        }
    }cout<<max;
    return 0;
}*/

//SEARCH
/*int main(){
    int a;
    cin>>a;
    int array[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(a==array[i]){
            cout<<"present";
        }else{
            cout<<"-1";
        }
    }
    return 0;
}*/
// #include<vector>
// int main(){
    // vector<int> v;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    // 
    // int x;
    // cin>>x;
    // vector <int> v(6);
    // for(int i=0;i<6;i++){
    //     cin>>v[i];
    // }
    // int occ=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         occ=i;
    //     }
    // }cout<<occ;


//     return 0;
// }
/*nt main(){
    int array[]={1,2,4,5,6,0};
    int n=0;
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            if(array[i]+array[j]==6){
                n++;
            }
        }
    }cout<<n;
    return 0;
}*/
// int main(){
//     int f=-10;
//     int s=-10;
//     int arr[]={1,2,3,4,5};
//     f=arr[0];
//     for(int i=0;i<5;i++){
//         s=arr[i];
//         int temp;
//         temp=f;
//         f=s;
//         s=temp;
//     }cout<<s<<f;
//     return 0;

// }

// int main(){
//     int arr[]={1,0,1,0,1,0,1,1};
//     int count;
//     for(int i=0;i<8;i++){
//         if(arr[i]==0){
//             count++;
//         }
//     }for(int i=0,j=count;i<count,j<8;i++,j++){
//         arr[i]=0;
//         arr[j]=1;
//     }for(int i=0;i<8;i++){
//         cout<<arr[i];
//     }return 0;

// }
// #include<vector>

// int main(){
//     vector <int> v(4);
//     for(int i=0;i<4;i++){
//         cin>>v[i];
//     }for(int i=0;i<4;i++){
//         cout<<v[i];
//     }
//     int left=0;
//     int right=3;
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
//     // for(int i=0;i<4;i++){
//     //     cout<<v[i];
//     // }
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector <int> v;
//     int n;cin>>n;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     for(int i=0;i<v.size();i++){
//         v[i]=v[i]*v[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }return 0;
// }
//#ROTATE
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int k=2;
//     k=k%n;
//     int rotate[5];
//     int j=0;
//     //inserting last k elements 
//     for(int i=n-k;i<n;i++){
//         rotate[j]=arr[i];
//         j++;
//     }
//     for(int i=0;i<n-k;i++){
//         rotate[j++]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<rotate[i];
//     }return 0;
// }

//#PREFIX SUM
// int main(){
//     //eg 1,2,3,4 = 1,3,6,10
//     int arr[]={8,2,3,4,5};
//     int psum[5];
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum+=arr[i];
//         psum[i]=sum;
//     }for(int i=0;i<5;i++){
//         cout<<psum[i]<<" ";
//     }
//     return 0;
// }

//#SUM FROM L TO R(1 INDEX)
/*void sum(vector<int> &v){
    int l,r;
    cin>>l>>r;
    int sum=0;
    for(int i=l-1;i<r;i++){
        sum+=v[i];
        
    }cout<<sum;
    return ;
}

int main(){
    int n;cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sum(v);
    return 0;
}*/

/*int main(){
    int arr1[2][3];
    int arr2[3][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j];
        }cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j];
        }cout<<endl;
    }
    int arr3[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                 arr3[i][j]=0;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                 arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr3[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}*/

//#TRANSPOSE
/*int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int trs[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            trs[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<trs[i][j]<<" ";
        }cout<<endl;
    }return 0;

}*/

// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=2;j>=0;j--){
//             cout<<arr[j][i];
//         }cout<<endl;
//     }
// }

//2 D ARRAY(pascal triangle)
// vector<vector<int>> pascal(int n){
//     vector<vector<int>> pas(n);
//     for(int i=0;i<n;i++){
//         pas[i].resize(i+1);
//         for(int j=0;j<i+1;j++){
//             if(j==0||j==i){
//                 pas[i][j]=1;
//             }else{
//                 pas[i][j]=(pas[i-1][j]+pas[i-1][j-1]);
//             }
//         }
//     }return pas;
    
// }
// int main(){
//     //vector<vector<int>> v(2,vector<int>(3));
//     //v={{1,2},{6,8},{4,5}}
//     //vector<vector<int>> v(2,vector<int>(3,0));//all zero
//      //1 row=column 2 a[i][j]=iCj
//     //or a[i][j]=a[i-1][j]+a[i-1][j-1]
//     int n;
//     cin>>n;
//     vector <vector<int>> ans;
//     ans=pascal(n);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }cout<<endl;
//     }
// }
// //lecture 22

// int  max1(vector<vector<int>> &s){
//     int maxone=-1;
//     int maxrow=-1;
//     int col=s[0].size();
//     for(int i=0;i<s.size();i++){
//         for(int j=0;j<s[i].size();j++){
//             if(s[i][j]==1){
//                 int n=col-j;
//                 if(n>maxone){
//                     maxone=n;
//                     maxrow=i;
//                 }break;
//             }
//         }
//     }return maxrow;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> s(n,vector<int> (m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>s[i][j];
//         }
//     }int row=max1(s);
//     cout<<row;
//     return 0;
// }

//#LEFTMOST 1

// //#ROTATION of a matrix
// //123  741
// //456  852
// //789  963
// int rotate(vector<vector<int>> &v){
    
//     for(int j=0;j<v.size();j++){
//         for(int i=v.size()-1;i>=0;i--)
//         {
//             cout<<v[i][j];
//         }cout<<endl;
//     }return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> v(n,vector<int> (n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }rotate(v);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j];
//         }cout<<endl;
//     }return 0;
// }

// int x(vector<vector<int>> &v){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(i>j){
//                 cout<<"  ";
//             }else{
//                 cout<<v[i][j]<<" ";
//             }
//         }cout<<endl;
//     }return 0;
// }
// int main(){
//     int n=4;
//     vector<vector<int>> v(4,vector<int> (4));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }x(v);
//     return 0;
// }


//lecture 25
//#spiral
