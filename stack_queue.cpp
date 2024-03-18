//STACK(TIME 0(1))
//STACK USING ARRAYS AND LINKED LIST
//OVERFLOW=CAPACITY SE JYADA
//UNDERFLOW=ZERO ELEMENTS
#include<bits/stdc++.h>
using namespace std;

// class Stack{//capital S
//     int capacity;
//     int* arr;
//     int top;
//     public:
//     Stack(int c){
//         this->capacity=c;
//         arr = new int[c];
//         this->top=-1;
//     }
//     void push(int data){
//         if(this->top==this->capacity-1){//overflow condition
//             cout<<"OVERFLOW"<<endl;
//             return ;
//         }
//         this->top++;//increment in indexex
//         this->arr[this->top]=data;//array me top index pe data bharna
//         return ;
//     }
//     void pop(){
//         if(this->top==-1){
//             cout<<"UNDERFLOW"<<endl;
//             return ;
//         }
//         this->top=this->top-1;//removal 
//         return ;
//     }
//     int gettop(){
//         if(this->top==-1){
//             // cout<<"underflow";
//             return INT_MIN;
//         }
//         return this->arr[this->top];
//     }
//     bool isempty(){
//         return this->top==-1;
//     }
//     int size(){
//         return this->top+1;
//     }
//     bool isfull(){
//         return this->top==this->capacity-1;
//     }
// };

// int main(){
//      Stack st(4);
//      st.push(1);
//      st.push(2);
//      //cout<<st.gettop()<<endl;
//      st.push(3);
//       st.push(4);
//        st.push(5);
//        cout<<st.gettop()<<endl;
//        st.pop();
//     //     st.pop();
//     //      st.pop();
//     //       st.pop();
//     //        st.pop();
//      cout<<st.gettop()<<" "<<endl;
//      return 0;
// }


//LINKED LIST
// class node{
//     public:
//     int data ;
//     node* next;
//     node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
// };
// class stack{//back side me naya node add karna hai
//     node* head;
//     int capacity ;
//     int currsize;
//     stack(int c){
//         this->capacity=c;
//         this->currsize=0;
//         head=NULL;
//     }
//     bool isempty(){
//         return (this->head==NULL);
//     }
//     bool isfull(){
//         return this->currsize==this->capacity;
// }   
//     void push(int data){
//         if(this->currsize==this->capacity){
//             cout<<"overflow";
//             return;
//         }
//         node* newnode=new node(data);
//         newnode->next=this->head;
//         this->head=newnode;
//         this->currsize++;
//     }
//     int pop(){
//         if(this->head==NULL){
//             cout<<"overflow";
//             return INT_MIN;
//         }
//         node* newhead=this->head->next;
//         this->head->next=NULL;
//         node* toberemoved=this->head;
//         int result=toberemoved->data;
//         delete toberemoved;
//         this->head=newhead;
//         return result;
//     }
//     int size(){
//         return this->currsize;
//     }
//     int gettop(){
//         if(this->head==NULL){
//             cout<<"underflow";
//             return INT_MIN;
//         }
//         return this->head->data;
//     }
// };


//STACKSTL
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     cout<<st.top()<<endl;
//     st.push(3);
//     st.push(4);
//     cout<<st.top()<<endl;
//     st.pop();
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.empty()<<endl;//0
//     return 0;
// }

//COPY STACK 
// stack<int> copystack(stack<int> &input){
//     stack<int> temp;
//     while(not input.empty()){
//         // does work input stack doesnt become empty
//         int curr=input.top();//[1,2,3]=3 ,2 ,1
//         input.pop();
//         temp.push(curr);//[3] [2][1]
//     }
//     stack<int> result;
//     while(not temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         result.push(curr);
//     }
//     return result;
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     stack<int> res=copystack(st);
//     while(not res.empty()){
//         int curr=res.top();
//         res.pop();
//         cout<<curr<<endl;
//     }
//     return 0;

// }

//USING RECURSION

// void f(stack<int> &st,stack <int> &result){
//     if(st.empty()) return ;
//     int curr=st.top();//take top
//     st.pop();//remove top
//     f(st,result);//recursive call
//     result.push(curr);
//     return ;
// }
// int main(){
//     stack<int> st;
    
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     stack<int> res;
//     f(st,res);
//     while(not res.empty()){
//         int curr=res.top();
//         res.pop();
//         cout<<curr<<endl;
//     }
// }

// void insertatbottom(stack<int> &st,int x){//0(n)
//     stack<int> temp;
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.push(x);//bottom of the stack
//     while(not temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         st.push(curr);
//     }
//     return;
// }
// //using recursion
// void f(stack<int> &st,int x){
//     if(st.empty()){
//         st.push(x);
//         return;
//     }
//     int curr=st.top();
//     st.pop();
//     f(st,x);//recursive call/
//     st.push(curr);//keep element likewise

// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     insertatbottom(st,69);
//     f(st,100);
//     while(not st.empty()){
//        int curr=st.top();
//        st.pop();
//        cout<<curr<<" ";
//     }
//     return 0;
// }


// void insertatk(stack<int> &st,int x,int index){
//     stack<int> temp;
//     int n=st.size();
//     int count=0;
//     while(count<n-index){
//         count++;
//         int curr=st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.push(x);
//     while(not temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         st.push(curr);
//     }
//     return;
// }
// void reverse(stack<int> &st){
//     stack<int> t1,t2;
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         t1.push(curr);

//     }
//     while(not t1.empty()){
//         int curr=t1.top();
//         t1.pop();
//         t2.push(curr);
//     }
//     while(not t2.empty()){
//         int curr=t2.top();
//         t2.pop();
//         st.push(curr);
//     }
//     return;
// }
// int main(){
//     stack <int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     // insertatk(st,700,3);
//     // while(not st.empty()){
//     //    int curr=st.top();
//     //    st.pop();
//     //    cout<<curr<<" ";
//     // }cout<<endl;
//         reverse(st);
//     while(not st.empty()){
//        int curr=st.top();
//        st.pop();
//        cout<<curr<<" ";
//     }
//     return 0;
// }


//check whether a given bracket is balanced or not?
//{([]){[]}} like this ,time(0(n))


// bool invalid(string str){
//     stack<char> st;
//     for(int i=0;i<str.size();i++){
//         char ch =str[i];//current
//         if(ch=='[' or ch=='(' or ch=='{'){
//             st.push(ch);//move in stack
//         }else{
//             //clasing bracket
//             if(ch==')' and !st.empty() and st.top()=='(' ){//access top,stack shouldnt be empty
//                  st.pop();
//             }else if(ch==']' and !st.empty() and st.top()=='[' ){
//                 st.pop();
//             }else if(ch=='}' and !st.empty() and st.top()=='{' ){
//                 st.pop();
//             }else{
//                 return false;
//             }
//         }
//     }
//     return st.empty();//damn sure  the string is balanced(return true)
// }
// int main(){
//     string str="{[()";
//     cout<<invalid(str);
//     return 0;
// }


//next greater element
//[4,7,3,2,6]=[7,-1,6,6,-1 ]

// vector <int> nge(vector<int> &arr){
//     int n=arr.size();
//     vector<int> output(n,-1);//n=size and all equal to -1
//     stack<int> st;//indexes
//     st.push(0);//so that top will point to 0(index)
//     for(int i=1;i<n;i++){//from  1 because we need to compare the 0 index element 
//         while(!st.empty() and arr[i]> arr[st.top()]){
//             output[st.top()]=arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(not st.empty()){
//             output[st.top()]=-1;
//             st.pop();
//         }   
//     return output;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n--){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     vector<int> res=nge(v);
//     cout<<"{";
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<",";
//     }cout<<"}";
// }


//stocks span(5 days )=(the span in a day is max no. of consecutive days(starting from the day and backward)for which the stock price was less than or equal to the price of the day)
//[100 80 60 70 60 75]= [1 1 1 2 1 4]
//we need to find previous greater element 


// vector <int> pge(vector<int> &arr){
//     int n=arr.size();
//     reverse(arr.begin(),arr.end());//imp(just to reverse)
//     vector<int> output(n,-1);//n=size and all equal to -1
//     stack<int> st;//indexes
//     st.push(0);//so that top will point to 0(index)
//     for(int i=1;i<n;i++){//from  1 because we need to compare the 0 index element 
//         while(!st.empty() and arr[i]> arr[st.top()]){
//             output[st.top()]=n-i-1;//reverse
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(not st.empty()){
//             output[st.top()]=-1;
//             st.pop();
//         }   
//         reverse(output.begin(),output.end());//reverse
//     return output;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n--){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     vector<int> res=pge(v);
//     cout<<"{";
//     for(int i=0;i<res.size();i++){
//         cout<<(i-res[i])<<",";//index - index of output array
//     }cout<<"}";
// }



//QUESTION(time 0(1))space(0(1))
// #define ll long long int
// class minstack{
//     public:
//     stack <int> st;//stack
//     ll mn;//long long type variable 
//     minstack(){//constructor
//         this->mn=INT_MAX;//minimum = infinity
//     }
//     void push(int val){
//         if(this->st.empty()){//if stack is empty
//             this->mn=val;//min element equal to value given 
//             this->st.push(val);//push value to stack 
//         }else{
//             this->st.push(val-this->mn);//desired value to push (val-minimum)
//             if(this->mn >val){//if val is smaller
//                 this->mn=val;//assign value to minimum
//             }
//         }
//     }
//     void pop(){
//         if(not this->st.empty()){
//             if(this->st.top()>=0){
//                 this->st.pop();//if top is positive then pop it directly
//             }else{
//                 this->mn=this->mn - this->st.top();//min assigns to (min-top) 
//                 this->st.pop();
//             }
//         }
//     }
//     int top(){
//         if(this->st.size()==1){
//             return this->st.top();//if length=1 then only top is there
//         }else if(this->st.top()<0){
//             return this->mn;//if it is negative then top element will be stored in min
//         }else{
//             return this->mn + this->st.top();
//         }
//     }
//     void getmin(){
//         return this->mn;
//     }

// };



// int calc(int v1,int v2,char op){
//     if(op=='^'){
//         return pow(v1,v2);
//     }
//     if(op=='*'){
//         return v1*v2;
//     }if(op=='/'){
//         return v1/v2;
//     }if(op=='+'){
//         return v1+v2;
//     }return v1-v2;
// }
// int eval(string &str){
//     stack<int> st;
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         if(isdigit(ch)){
//             st.push(ch-'0');//to make the value of digit
//         }else{
//             int v1=st.top();
//             st.pop();
//             int v2=st.top();
//             st.pop();
//             st.push(calc(v1,v2,ch));
//         }
//     }
//     return st.top();
// }
// int main(){
//     string str="231*+1-";//2+(3*1)-9(signs are reversed)
//     cout<<eval(str);
//     return 0;
// }


//prefix expressions
// int calc(int v1,int v2,char op){
//     if(op=='^'){
//         return pow(v1,v2);
//     }
//     if(op=='*'){
//         return v1*v2;
//     }if(op=='/'){
//         return v1/v2;
//     }if(op=='+'){
//         return v1+v2;
//     }return v1-v2;
// }
// int eval(string &str){
//     stack<int> st;
//     for(int i=str.size()-1;i>=0;i--){
//         char ch=str[i];
//         if(isdigit(ch)){
//             st.push(ch-'0');//to make the value of digit
//         }else{
//             int v1=st.top();
//             st.pop();
//             int v2=st.top();
//             st.pop();
//             st.push(calc(v1,v2,ch));
//         }
//     }
//     return st.top();
// }
// int main(){
//     string str="--935";//
//     cout<<eval(str);
//     return 0;
// }





//QUEUES (BACK SE ADDITION ,FRONT  SE REMOVAL)
//first in first out  or first come first serve 
//linear data structure 
//#OPERATIONS
//#1ENQUIUE = ADD NEW ELEMEMT INT THE QUEUE
//#2DEQUEUE = REMOVE A NEW ELEMENT IN THE QUEUE
//#3ISFULL = 
//#4ISEMPTY =
//#5FRONT = gives us a element which came first
//#6SIZE  


//#TYPES OF QUEUE
//#1 SIMPLE =[FRONT      BACK]//FIFO(BASED ON TIME BASIS)
//#2 PRIORITY QUEUE(BASED ON OUR CHOICE)
//#3 CIRCULAR QUEUE 
//#4 DOUBLE ENDED QUEUE /DEQUE = BACK SE REMOVAL ,FRONT SE ADDITION 


//QUEUE USING LINKED LIST
// class node{
//     public:
//     int data;
//     node* next;
    
//     node(int data){
//         this->data=data;
//         this->next=NULL;
       
//     }
// };
// class Queue{
//     node* head;
//     node* tail;
//     int size;
//     public:
//     Queue(){
//         this->head=NULL;
//         this->tail=NULL;
//         this->size=0;
//     }
//     void enqueue(int data){
//         node* newnode=new node(data);
//         if(this->head==NULL){
//             //LL is empty
//             this->head=this->tail=newnode;
//         }else{
//             //addd at tail
//             this->tail->next=newnode;
//             this->tail=newnode;
//         }
//         this->size++;//to get the size
//     }

//     void dequeue(){
//         if(this->head==NULL){
//             return ;
//         }else{
//             node* oldhead=this->head;
//             node* newhead=this->head->next;//aage se remove krna
//             this->head=newhead;
//             //if one head is there so head will point to NULL and tail will point to previous head
//             //so rectify it 
//             if(this->head==NULL) this->tail=NULL;
//             oldhead->next=NULL;//node so no usse of this
//             delete oldhead;
//             this->size--;//size decreases after deletion
//         }
//     }
//     int getsize(){
//             return this->size;
//         }
//         bool isempty(){
//             return this->head==NULL;
//         }
//     int front(){
//         if(this->head==NULL) return -1;
//         return this->head->data;
//     }
// };

// int main(){
//     Queue qu;
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.enqueue(40);// 10 20 30 40 
//     qu.dequeue();// 20 30 40 
//     while(not qu.isempty()){
//         cout<<qu.front()<<" ";
//         qu.dequeue();
//     }
//     return 0;
// }


//USING ARRAY
// class Queue{
//     int front;
//     int back;
//     vector<int> v;
//     public:
//     Queue(){
//         this->back=-1;
//         this->front=-1;
//     }
//     void enqueue(int data){
//         this->v.push_back(data);//add at back
//         this->back++;//back increased by 1
//         if(this->back==0) this->front=0;//if only one element is there
//     }
//     void dequeue(){
//         if(this->front==this->back){
//             this->front=-1;
//             this->back=-1;
//             this->v.clear();//to clear
//         }else this->front++;//front incre by 1 to delete 1st element or ignore it
//     }
//     int getfront(){
//         if(this->front==-1) return -1;
//         return this->v[this->front];//cause array element 
//     }
//     bool isempty(){
//         return this->front==-1;
//     }

// };
// int main(){
//     Queue qu;
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.enqueue(40);// 10 20 30 40 
//     qu.dequeue();// 20 30 40 
//     qu.enqueue(122);
//     while(not qu.isempty()){
//         cout<<qu.getfront()<<" ";
//         qu.dequeue();
//     }
//     return 0; 
// }


//QUEUE WITH STL
// int main(){
//     queue<int> qu;
//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     while(not qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }
//     return 0;
// }


//#reverse the elements(queue to stack to queue back )
// int main(){
//     queue <int> input;
//     input.push(10);
//     input.push(20);
//     input.push(30);
//     input.push(40);

//     stack<int> st;
//     while(not input.empty()){
//         st.push(input.front());
//         input.pop();
//     }
//     while(not st.empty()){
//         input.push(st.top());
//         st.pop();
//     }

//         while(not input.empty()){
//         cout<<input.front()<<" ";
//         input.pop();
//     }
// }



//DEQUE=include<deque>
// int main(){
//     deque <int> dq;
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_back(40);
//     dq.push_front(140);
//     while(not dq.empty()){
//         cout<<dq.front()<<" ";//dont use this
//         dq.pop_front();
//     }
//     return 0;
// }


//question
//#array of numbers ,sliding window (k)(left->right)//can only see k numbers return max
//return the max sliding window which basiclly contains the max element in each window
//0(n) time
// void max_window(vector<int> &arr,int k){
//     deque <int> dq;
//     for (int  i = 0; i < k; i++)//to access dliding window
//     {
//         while(not dq.empty() and arr[dq.back()]<arr[i]){
//             //last element of deque
//             dq.pop_back();//removing smaller element till arr[i]>arr[dq.back()]
//         }
//         dq.push_back(i);
//     }
//     for (int i = k; i < arr.size(); i++)
//     {
//         int curr=arr[i];
//         if(dq.front()==i-k) dq.pop_front();
//         while(not dq.empty() and arr[dq.back()]<arr[i]){
//             //last element of deque
//             dq.pop_back();
//         }dq.push_back(i);
//     } 
// }



//QUEUE USING STACK(PUSH FUNC)
// class Queue{
//     stack<int> st;
//     public:
//     Queue(){}
//         void push(int x){//enqueue
//             this->st.push(x);//putting elements in stack
//         }
//         void pop(){//dequeue
//             if(st.empty()) return ;
//             stack<int> temp;
//             while(this->st.size()>1){
//                 temp.push(st.top());//transfer elements into temp except the buttom most element
//                 st.pop();
//             }
//             this->st.pop();//remove buttommost element
//             while(not temp.empty()){//bringing back into stack
//                 this->st.push(temp.top());
//                 temp.pop();
//             }
//         }//mow stack size is one 

//         bool empty(){
//             return this->st.empty();
//         }
//         int front(){
//             if(st.empty()) return -1;
//             stack<int> temp;
//             while(this->st.size()>1){
//                 temp.push(st.top());//transfer elements into temp except the buttom most element
//                 st.pop();
//             }
//             int result=st.top();
//             while(not temp.empty()){//bringing back into stack
//                 this->st.push(temp.top());
//                 temp.pop();
//             }return result;
//         }
// };

// int main(){
//     Queue qu;
//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     while(not qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }
//     return 0;
// }


// //circular queue
// C or C++ program for insertion and
// deletion in Circular Queue
// #include<bits/stdc++.h>
// using namespace std;

// class Queue
// {
// 	// Initialize front and rear
// 	int rear, front;

// 	// Circular Queue
// 	int size;
// 	int *arr;
// public:
// 	Queue(int s)
// 	{
// 	front = rear = -1;
// 	size = s;
// 	arr = new int[s];
// 	}

// 	void enQueue(int value);
// 	int deQueue();
// 	void displayQueue();
// };


// /* Function to create Circular queue */
// void Queue::enQueue(int value)
// {
// 	if ((front == 0 && rear == size-1) ||
// 			((rear+1) % size == front))
// 	{
// 		printf("\nQueue is Full");
// 		return;
// 	}

// 	else if (front == -1) /* Insert First Element */
// 	{
// 		front = rear = 0;
// 		arr[rear] = value;
// 	}

// 	else if (rear == size-1 && front != 0)
// 	{
// 		rear = 0;
// 		arr[rear] = value;
// 	}

// 	else
// 	{
// 		rear++;
// 		arr[rear] = value;
// 	}
// }

// // Function to delete element from Circular Queue
// int Queue::deQueue()
// {
// 	if (front == -1)
// 	{
// 		printf("\nQueue is Empty");
// 		return INT_MIN;
// 	}

// 	int data = arr[front];
// 	arr[front] = -1;
// 	if (front == rear)
// 	{
// 		front = -1;
// 		rear = -1;
// 	}
// 	else if (front == size-1)
// 		front = 0;
// 	else
// 		front++;

// 	return data;
// }

// // Function displaying the elements
// // of Circular Queue
// void Queue::displayQueue()
// {
// 	if (front == -1)
// 	{
// 		printf("\nQueue is Empty");
// 		return;
// 	}
// 	printf("\nElements in Circular Queue are: ");
// 	if (rear >= front)
// 	{
// 		for (int i = front; i <= rear; i++)
// 			printf("%d ",arr[i]);
// 	}
// 	else
// 	{
// 		for (int i = front; i < size; i++)
// 			printf("%d ", arr[i]);

// 		for (int i = 0; i <= rear; i++)
// 			printf("%d ", arr[i]);
// 	}
// }

// /* Driver of the program */
// int main()
// {
// 	Queue q(5);

// 	// Inserting elements in Circular Queue
// 	q.enQueue(14);
// 	q.enQueue(22);
// 	q.enQueue(13);
// 	q.enQueue(-6);

// 	// Display elements present in Circular Queue
// 	q.displayQueue();

// 	// Deleting elements from Circular Queue
// 	printf("\nDeleted value = %d", q.deQueue());
// 	printf("\nDeleted value = %d", q.deQueue());

// 	q.displayQueue();

// 	q.enQueue(9);
// 	q.enQueue(20);
// 	q.enQueue(5);

// 	q.displayQueue();

// 	q.enQueue(20);
// 	return 0;
// }

// using namespace std;
// //SET THEORY 
// int main(){
// 	set<int> s;
// 	s.insert(4);
// 	s.insert(5);
// 	s.insert(7);
// 	// set <int> ::iterator itr;
// 	// for(itr=s.begin();itr!=s.end();itr++){
// 	// 	cout<<*itr<<" ";
// 	// }cout<<endl;
// 	for(auto value:s){
// 		cout<<value<<" ";
// 	}cout<<endl;

// 	// itr=s.begin();
// 	// advance(itr,2);
// 	// s.erase(itr);
// 	// for(auto value:s){
// 	// 	cout<<value<<" ";
// 	// }cout<<endl;

// 	// if(s.find(2)!=s.end()){//is it present or not
// 	// 	cout<<"value is present";
// 	// 	cout<<s.count(3);
// 	// }else{
// 	// 	cout<<"not present";
// 	// }

// 	// cout<<*s.lower_bound(3);//4
// 	// cout<<*s.begin();//1
// 	// cout<<*s.rbegin();//4
// 	cout<<*s.end();//3 index
// 	return 0;
// }

//UNORDERED SET
// int main(){
// 	unordered_set <int> s1;
// 	s1.insert(3);
// 	s1.insert(2);
// 	s1.insert(4);
// 	s1.insert(1);

// 	for(auto value:s1){
// 		cout<<value;//it will print in unordered form
// 	}
// 	return 0;
// }


//MULTI SET(ordered)
//can't modify , can store duplicae values,cant modify
// int main(){
// 	multiset<int> ms;
// 	ms.insert(7);
// 	ms.insert(5);
// 	ms.insert(4);
// 	ms.insert(7);
// 	ms.insert(8);
// 	for(auto value:ms){
// 		cout<<value<<" ";
// 	}cout<<*ms.lower_bound(5);//print number if present else the next greater value (O(logn))
// 	cout<<ms.count(4);//no of elements O(k+logn)
// 	cout<<*ms.find(78);//returns no of elements(all duplicate)
// 	cout<<*ms.end();//return no of elements
// 	cout<<*ms.find(4);// returns element if it is present (O(logn))
// }
// insert  O(logn)
//deletion O(logn)  erase(value) and erase(start,end) O(N)
//find()-returns lower bound 


//question
//FIND THE NO. OF DIFFERENT HE CAN SCORE
int main(){
	int n,p,q;
	cin>>n>>p>>q;
	unordered_set<int> s1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			int correct=i;
			int incorrect=j;
			int unattended=n-i-j;//to make it positive

			if(unattended>=0){
				int score=correct*p+incorrect*q;
				cout<<score<<" ";
				s1.insert(score);
			}else{
				break;
			}
		}
	}
	
	cout<<"ANS="<<s1.size();
	return 0;
}



