#include<bits/stdc++.h>
using namespace std;

// class node{
//     public:
//     int val;

//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// // void insertathead(node* &head,int value){//(time complexity 0(1))
// //     node* newnode=new node(value);
// //     newnode->next=head;
// //     head=newnode;
// // }
// // void insertattail(node* &head,int value){//time()0(n)
// //     node* newnode=new node(value);
// //     node* temp=head;
// //     while(temp->next!=NULL){
// //         temp=temp->next;
// //     }
// //     temp->next=newnode;
// // }
// // void insertatk(node* &head,int value,int k){//time 0(k)
// //     if(k==0){
// //         insertathead(head,value);
// //         return ;
// //     }
// //     node* newnode=new node(value);
// //     node* temp=head;
// //     int currentposi=0;
// //     while(currentposi!=k-1){//k-1 is imp
// //         temp=temp->next;
// //         currentposi++;
// //     }
// //     //temp is pointing to k-1
// //     newnode->next=temp->next;//kth pointing to k+1
// //     temp->next=newnode;
// // }
// // void updateatk(node* &head,int value,int k){//0(k)
// //     node* temp=head;
// //     int currentpos=0;
// //     while(currentpos!=k){
// //         temp=temp->next;//temp will be pointing to kth node
// //         currentpos++;
// //     }
// //     temp->val=value;
// // }
// // void deletionathead(node* &head){
// //     node* temp=head;
// //     head=head->next;//1st element ko second se link kardo
// //     free(temp);
// // }
// // void deletionattail(node* head){
// //     node* temp=head;
// //     while(temp->next->next){//second last element
// //         temp=temp->next;
// //     }
// //     temp->next=NULL;//pointing second last element to NULL
// //     free(temp->next);//freeing last element
// // }
// // void deletionatk(node* &head,int k){//0(n)
// //     if(k==0){
// //         deletionathead(head);
// //     }
// //     int curr=0;
// //     node* temp=head;
// //     while(curr!=k-1){
// //         temp=temp->next;//k-1 pe jayega temp
// //         curr++;
// //     }
// //     temp->next=temp->next->next;//k-1 pointing to k+1
// //     free(temp->next);//deleting kth position
// // }

// // void display(node* head){
// //     node* temp=head;
// //     while(temp!=NULL){
// //         cout<<temp->val<<"->";
// //         temp=temp->next;
// //     }
// //     cout<<"NULL"<<endl;

// // }
// // int main(){
// //     node* head=NULL;
// //     insertathead(head,3);
// //     display(head);
// //     insertathead(head,5);
// //     display(head);
// //     insertattail(head,67);
// //     display(head);
// //     insertatk(head,43,2);
// //     display(head);
// //     updateatk(head,54,3);
// //     display(head);
// //     deletionathead(head);
// //     display(head);
// //     deletionattail(head);
// //     display(head);
// //     deletionatk(head,1);
// //     display(head);
// //     return 0;
// // }

// class linkedlist{
//     public:
//     node* head;
//     linkedlist(){
//         head=NULL;
//     }
//     void insertattail(int value){
//         node* newnode=new node(value);
//         if(head==NULL){//empty
//             head=newnode;
//             return ;
//         }
//         node* temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=newnode;
//     }
//     void display(){//no need to pass head
//         node* temp=head;
//         while(temp){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };
// void deletealternatenodes(node* &head){//0(n)
//     node* current=head;
//     while(current && current->next){
//         node* temp=current->next;//node to be deleted 
//         current->next=current->next->next;//pointing current node to current +2 node
//         free(temp);//deleting node
//         current=current->next;//while loop aaage badane k liye
//     }
// }
// void deletionofduplicates(node* &head){
//     node* current=head;
//     while(current){
//         while(current->next && current->val==current->next->val){
//             //delete current->next
//             node* temp=current->next;//delete karna hai
//             current->next=current->next->next;
//             free(temp);
//         }
//         current=current->next;
//     }
// }
// void reverseprint(node* &head){
//     //base condition
//     if(head==NULL){
//         return ;
//     }
//     //recursive case
//     reverseprint(head->next);
//     cout<<head->val<<" ";

// }
// node* reverselinkedlist(node* &head){
//     node* prev=NULL;
//     node* current=head;
//      while(current){
//         //move all 3 pointers by one step ahead
//         node* nextptr=current->next;
//         current->next=prev;//curr pointing to NULL
//         prev=current;//0 to 1
//         current=nextptr;// 1 to 2
//      }
//      //loop ends with prev pointing to my last node which is new head
//      node* newhead=prev;
//      return newhead;
// }

// //1 2 3 4 5 6 = 2 1 4 3 6 5 if k=2
// node* reverselbasedonk(node* &head,int k){
//     node* prev=NULL;
//     node* current=head;
//     int counter=0;//counting first k nodes
//     while(current && counter<k){//reversing first k nodes
//         node* next=current->next;
//         current->next=prev;
//         prev=current;
//         current=next;
//         counter++;
//     }
//     //current will give (k+1)th node
//     if(current){
//         node* newhead=reverselbasedonk(current,k);
//         head->next=newhead;
//     }
//     return prev;
    
// }
// // int main(){
// //     linkedlist l1;
// //     l1.insertattail(3);
// //     l1.insertattail(4);
// //     l1.insertattail(4);
// //     l1.insertattail(6);
// //     l1.insertattail(7);
// //     l1.insertattail(9);
// //     l1.display();
// //     // deletionofduplicates(l1.head);
// //     // l1.display();
// //     // deletealternatenodes(l1.head);
// //     // l1.display();
// //     //reverseprint(l1.head);
// //     l1.head=reverselinkedlist(l1.head);
// //     l1.display();
// //     l1.head=reverselbasedonk(l1.head,2);
// //     l1.display();
    
// //     return 0;
// // }




// // bool checkequalityofll(node* &head1,node* &head2){//length equal and values equal
// //     node* ptr1=head1;
// //     node* ptr2=head2;
// //     while(ptr1 && ptr2){
// //         if(ptr1->val!=ptr2->val){
// //             return false;
// //         }
// //         ptr1=ptr1->next;
// //         ptr2=ptr2->next;
// //     }return (ptr1==NULL && ptr2==NULL);
// // }
// int getlength(node* head){
//     node* temp=head;
//     int length=0;
//     while(temp){
//         length++;
//         temp=temp->next;
//     }
//     return length;
// }
// node* moveheadbyk(node* head,int k){
//     node* ptr =head ;
//     while(k--){
//         ptr=ptr->next;
//     }
//     return ptr;
// }
// node* getintersection(node* head1,node* head2){
//     node* ptr1=head1;
//     node* ptr2=head2;
//     //step1 calculate length of both  
//     int l1=getlength(head1);
//     int l2=getlength(head2);
//     //step2 find diff between linkedlist and move longer linked list
    
//     if(l1>l2){
//         int k=l1-l2;
//         ptr1=moveheadbyk(head1,k);
//         ptr2=head2;
//     }else{
//         int k=l2-l1;
//         ptr1=head1;
//         ptr2=moveheadbyk(head2,k);
//     }
//     //compare ptr1 and ptr2
//     while(ptr1){
//         if(ptr1==ptr2){
//             return ptr1;
//         }ptr1=ptr1->next;
//         ptr2=ptr2->next;
//     }
//     return NULL;
// }
// void removekthnodefromend(node* &head,int k){
//     node* ptr1=head;
//     node* ptr2=head;

//     //move ptr2 by k steps
//     int count=k;
//     while(count--){
//         ptr2=ptr2->next;
//     }
//     //now ptr2 is k steps ahead of ptr1

//     if(ptr2==NULL){//k=length
//         node* temp=head;
//         head=head->next;
//         free(temp);
//         return ;
//     }
//     //when ptr2 is at null (end of list),ptr1 will be at node to be deleted
//     while(ptr2->next){
//         ptr1=ptr1->next;
//         ptr2=ptr2->next;

//     }//ptr1 is pointing to the node before kth node from end
//     //node to be deleted is ptr1->next
//     node* temp=ptr1->next;
//     ptr1->next=ptr1->next->next;
//     free(temp);
// }
// // int main(){
// //     linkedlist l1;
// //     linkedlist l2;
// //     l1.insertattail(3);
// //     l1.insertattail(4);
// //     l1.insertattail(5);
// //      l2.insertattail(3);
// //      l2.head->next=l1.head->next;
// //     l1.display();
//     // l2.display();
//     //cout<<checkequalityofll(l1.head,l2.head);
    
// //     // node* intersection =getintersection(l1.head,l2.head);
// //     // if(intersection){
// //     //     cout<<intersection->val<<endl;//4
// //     // }else{
// //     //     cout<<"-1"<<endl;
// //     // }


// //     removekthnodefromend(l1.head,2);
// //     l1.display();
// //     return 0;
// // }

// node* mergelinkedlist(node* &head1,node* &head2){
//     node* dummyheadnode = new node(-1);
//     node* ptr1=head1;
//     node* ptr2=head2;
//     node* ptr3=dummyheadnode;
//     while(ptr1 && ptr2){
//         if(ptr1->val<ptr2->val){
//             ptr3->next=ptr1;
//             ptr1=ptr1->next;
//         }else{
//             ptr3->next=ptr2;
//             ptr2=ptr2->next;
//         }
//         ptr3=ptr3->next;
//     }
//     if(ptr1){
//         ptr3->next=ptr1;
//     }else{
//         ptr3->next=ptr2;
//     }
//     return dummyheadnode->next;
// }
// node* mergeklinkedlist(vector<node*> &lists){
//     if(lists.size()==0){
//         return NULL;
//     }
//     while(lists.size()>1){
//         node* mergehead=mergelinkedlist(lists[0],lists[1]);
//         lists.push_back(mergehead);
//         lists.erase(lists.begin());
//         lists.erase(lists.begin());
//     }
//     return lists[0];
// }
// //head1 head2 head3 head4
// //1 head1 and head2 ll will be merged 
// //head3 head4 mergehead1_2
// //2. head3 and head4 will be merged
// //vector -> head3 head4 mergehead1_2 mergehead3_4
// //3. mergehead1_2 and mergehead3_4 will be merged
// //vector-> mergehead1_2_3_4
// //

// int main(){
//     linkedlist l1;
//     linkedlist l2;
//     l1.insertattail(2);
//     l1.insertattail(4);
//     l2.insertattail(3);
//     l2.insertattail(5);
//     l1.display();
//     l2.display();
//     linkedlist l3;
//     // l3.head=mergelinkedlist(l1.head,l2.head);
//     // l3.display();
//     l3.insertattail(4);
//     l3.insertattail(7);
//     l3.display();
//     linkedlist l4;
//     l4.insertattail(6);
//     l4.insertattail(13);
//     l4.display();
//     vector<node*> lists;
//     lists.push_back(l1.head);
//     lists.push_back(l2.head);
//     lists.push_back(l3.head);
//     lists.push_back(l4.head);
//     linkedlist mergeLL;
//     mergeLL.head = mergeklinkedlist(lists);
//     mergeLL.display();
//     return 0;
// }


// node* findmiddlenode(node* &head){
//     node* slow=head;
//     node* fast=head;

//     while(fast && fast->next){
//         slow=slow->next;//1 jump
//         fast=fast->next->next;//2 jump
//     }
//     return slow;
// }
// int main(){
//     linkedlist l1;
//     l1.insertattail(2);
//     l1.insertattail(3);
//     l1.insertattail(4);
//     l1.insertattail(5);
//     l1.insertattail(6);
//     node* middle=findmiddlenode(l1.head);
//     cout<<middle->val<<endl;
//     l1.display();
// }

// bool detectcycle(node* head){
//     if(!head){
//         return false;
//     }
//     node* slow=head;
//     node* fast=head;
//     while(fast && fast->next){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             cout<<slow->val<<endl;
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     linkedlist l1;
//     l1.insertattail(1);
//     l1.insertattail(2);
//     l1.insertattail(3);
//     l1.insertattail(4);
//     l1.insertattail(5);
//     l1.insertattail(6);
//     l1.insertattail(7);
//     l1.insertattail(8);
//     l1.display();
//     l1.head->next->next->next->next->next->next->next->next=l1.head->next->next->next;
//     cout<<detectcycle(l1.head);
//     return 0;
// }

//palindrome
//1 find middle node ( using slow and fast pointer)
//2 break linked list into 2 parts
//3 reverse secind half of linkedlist
//4 compare the 2 parts of linkedlist
// bool ispalindrome(node* head){
//     node* slow=head;
//     node* fast=head;
//     while(fast && fast->next){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     //slow = middle node
//     node* curr=slow->next;
//     node* prev=slow;
//     slow->next=NULL;

//     while(curr){//reverse
//         node* nextptr=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextptr;
//     }

//     //check if the two linkedlist are equal
//     node* head1=head;
//     node* head2=prev;
//     while(head2){
//         if(head1->val!=head2->val){
//             return false;
//         }
//         head1=head1->next;
//         head2=head2->next;
//     }
//     return true;
// }
// int main(){
//     linkedlist l1;
//     l1.insertattail(1);
//     l1.insertattail(2);
//     l1.insertattail(1);
//     l1.display();
//     cout<<ispalindrome(l1.head);
//     return 0;
// }

//DOUBLY LINKED LIST
//[PREV][VALUE][NEXT]
//[  ]-><-[  ]

// class node{
//     public:
//     int val;
//     node* prev;
//     node* next;

//     node(int data){
//         val=data;
//         prev=NULL;
//         next=NULL;

//     }
// };
// class doublylinkedlist{
//     public:
//     node* head;
//     node* tail;

//     doublylinkedlist(){
//         head=NULL;
//         tail=NULL;

//     }
//     void insertatstart(int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//             head= newnode;
//             tail=newnode;
//             return ;
//         }
//         newnode->next=head;
//         head->prev=newnode;
//         head=newnode;

//     }
//     void insertatend(int val){
//         node* newnode=new node(val);
//         if(tail==NULL){
//             head=newnode;
//             tail=newnode;
//             return ;
//         }
//         tail->next=newnode;
//         newnode->prev=tail;
//         tail=newnode;
//         return ;
//     }
//     void insertatk(int val,int k){
//         node* temp=head;
//         int count=1;
//         while(count<(k-1)){
//             temp=temp->next;
//             count++;
//         }
//         node* newnode=new node(val);
//         newnode->next=temp->next;
//         temp->next=newnode;

//         newnode->prev=temp;
//         newnode->next->prev=newnode;
//         return;
//     }
//     void deleteatstart(){
//         if(head==NULL){
//             return ;
//         }
//         node* temp=head;
//         head=head->next;
//         if(head==NULL){//if dl had only one node
//             tail=NULL;
//         }else{
//             head->prev=NULL;
//         }
//         free(temp);
//     }
//     void deletionatend(){
//         if(tail==NULL){//if empty dont do anything
//             return ;
//         }
//         node* temp=tail;
//         tail=tail->prev;
//         if(tail==NULL){//if single element
//             head=NULL;
//         }else{//if multy element
//             tail->next=NULL;
//         }
//         free(temp);
//     }
//     void deleteatk(int k){
//         node* temp=head;
//         int count=1;
//         while(count<k){
//             temp=temp->next;
//             count++;
//         }
//         temp->prev->next=temp->next;
//         temp->next->prev=temp->prev;
//         free(temp);
//         return ;
//     }

//     void display(){
//         node* temp=head;
//         while(temp){
//             cout<<temp->val<<" ";//towards each other
//             temp=temp->next;
//         }cout<<endl;
//     }
// };
// void reversedl(node* &head,node* &tail){
//     node* curr=head;
//     while(curr){
//         node* nextptr=curr->next;
//         curr->next=curr->prev;
//         curr->prev=nextptr;
//         curr=nextptr;//increment
//     }
//     //swapping head and tail
//     node* newhead=tail;
//     tail=head;
//     head=newhead;
//     return ;
// }
// bool ispalindrome(node* head,node* tail){
//     while(head!=tail && tail->prev!=head){//after and condition for even nodes
//     if(head->val!=tail->val){
//         return false;
//     }
//     head=head->next;
//     tail=tail->prev;
//     } 
//     return true;
// }


// int main(){
//     // node* newnode= new node(3);
//     // doublylinkedlist dl;
//     // dl.head=newnode;
//     // dl.tail=newnode;
//     // cout<<dl.head->val<<endl;

//     doublylinkedlist dl;
//     dl.insertatstart(1);
//     dl.insertatstart(2);
//     dl.insertatstart(3);
//     dl.display();//3 2 1

//     dl.insertatk(67,3);
//     dl.display();//3 2 67 1

//     dl.deleteatstart();
//     dl.display();//2 67 1

//     dl.insertatend(2);
//     dl.display();//2 67 1 2 

//     dl.deletionatend();
//     dl.display();//2 67 1
//     dl.insertatend(3);//2 67 1 3

//     dl.deleteatk(2);//2 1 3
//     dl.display();

//     reversedl(dl.head,dl.tail);
//     dl.display();//3 1 2
    
//     cout<<ispalindrome(dl.head,dl.tail);// 0
//     return 0;
// }

// void deletenodewithsameneighbour(node* &head,node* &tail){//1 2 1 = 1 1
//     node* curr=tail->prev;//second last node se start
//     while(curr!=head){
//         node* prevnode=curr->prev;
//         node* nextnode=curr->next;
//         if(prevnode->val==nextnode->val){
//             //delete the current node
//             prevnode->next=nextnode;
//             nextnode->prev=prevnode;
//             free(curr);
//         }
//         curr=prevnode;//decrement
//     }
// }

// int main(){
//     doublylinkedlist dl;
//     dl.insertatstart(2);
//     dl.insertatstart(3);
//     dl.insertatstart(6);
//     dl.insertatstart(5);
//     dl.insertatstart(6);
//     dl.display();//6 5 6 3 2
//     deletenodewithsameneighbour(dl.head,dl.tail);
//     dl.display();//6 6 3 2
//     return 0;

// }


//circular linked list head and tail are connected
//(consist of singly linked list)(tail->next=head)
 
// class node{
//     public:
//     int val;
//     node* next;

//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// class circularlist{
//     public:
//     node* head;

//     circularlist(){
//         head=NULL;
//     }
//     void display(){
//         node* temp=head;
//         do{
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }while(temp!=head);
//         cout<<endl;
//     }
//     void printcircular(){
//         node* temp=head;
//         for(int i=0;i<10;i++){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }cout<<endl;
//     }
//     void insertatstart(int val){
//     node* newnode=new node(val);
//     if(head==NULL){
//         head=newnode;
//         newnode->next=newnode;//for circular
//         return ;
//     }
//     node* tail=head;
//     while(tail->next!=head){
//         tail=tail->next;//increment
//     }//tail is pointing to the last node 
//     tail->next=newnode;
//     newnode->next=head;
//     head=newnode;
// }
//     void insertatend(int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//             head=newnode;
//             newnode->next=head;//circular linked list
//             return ;
//         }
//         node* tail=head;
//         while(tail->next!=head){
//             tail=tail->next;
//         }//here tail will be pointing to last node
//         tail->next=newnode;
//         newnode->next=head;
//         return ;
//     }
//     void deleteatstart(){
//         if(head==NULL){
//             return ;
//         }
//         node* temp=head;
//         node* tail=head;
//         while(tail->next!=head){
//             tail=tail->next;
//         }
//         head=head->next;
//         tail->next=head;
//         free(temp);
//         return;
//     }
//     void deleteatend(){
//         if(head==NULL){
//             return ;
//         }
//         node* tail=head;
//         while(tail->next->next!=head){
//             tail=tail->next;
//         }//here tail is pointing to the second last node
//         node* temp=tail->next;//to be deleted
//         tail->next=head;
//         free(temp);

//     }
    
// };

// int main(){
//     circularlist cll;
//     cll.insertatstart(2);
//     cll.insertatstart(3);
//     cll.insertatstart(4);
//     cll.insertatstart(5);
//     cll.display();
//     //cll.printcircular();
//     cll.insertatend(7);
//     cll.display();

//     cll.deleteatstart();
//     cll.display();

//     cll.deleteatend();
//     cll.display();
//     return 0;
// }


//template
// template<typename T>
// class node{//template class
//     public:
//     T val;
//     node* next;
//     node(T data){
//         val=data;
//         next=NULL;
//     }
// };
// int main(){
//     node<int>* node1=new node<int>(3);
//     cout<<node1->val<<endl;

//     node<char>* node2=new node<char>('a');
//     cout<<node2->val<<endl;
//     return 0;
// }

//STL = standard template library
// set of template classes for implementing 
// commonly used ds & functions
//It has 3 major components

//1#container
// 1 vector=dynamic array
// 2 list= doubly linked list
// 3 map= store unique key-value pairs
// 4 set=store unique values

//2#iterators
//used to iterate/traverse the container
//pointer take entities
//vector<int>::iterator itr;
//itr.begin()=1

//3#algorithm(sort(),min(),max())
// sort(v.begin(),v.end());
// min(a,b);
// max(a,b);

//list= template class in STL for implementing a doublylinkedlist
#include<list>
// list<int> rollno;
// list<int> list1{1,2,3,4}
//list.begin() list.end() list.rbegin()=first element in reverse
int main(){
    list<int> l1={1,2,3};
    // auto itr=l1.begin();
    // cout<<*itr<<endl;//1

    // auto rev_itr=l1.rbegin();
    // cout<<*rev_itr<<endl;//3

    // advance(itr,0);//0 index walA NUMBER
    // cout<<*itr<<endl;//1

    // for(auto num:l1){
    //     cout<<num<<" ";//1 2 3
    // }cout<<endl;

    // //using iterator
    // for(auto itr=l1.begin();itr!=l1.end();itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    //reverse transversel
    // for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;
    // return 0;

    //inserting 
     auto itr=l1.begin();
    // advance(itr,2);//itr pointing to 2 index(that is 3as per the list)
    // cout<<*itr<<endl;
    // l1.insert(itr,5);
    // for(auto itr=l1.begin();itr!=l1.end();itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;


    auto l=l1.begin();
    auto r=l1.begin();
     advance(r,2);//3
    l1.insert(itr,l,r);
    for(auto itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    return 0;
}

//inserting elements into a list
// list.insert(itr,value)=insert value before the position of the itr 
// list.insert(itr,count,value)=insert value count number of times before itr 
// list.insert(itr,str_itr,end_itr)= insert values from start to end before given itr

