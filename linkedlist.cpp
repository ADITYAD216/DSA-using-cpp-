//#1oops
//#linked list



// project
// # number guessing using c++
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
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

//oops
#include<bits/stdc++.h>
using namespace std;

// class fruit {//data type
// public:
//     string name ;
//     string color ;

// };
// class student {
//     string name ; 
//     int rollno;

// }
// int main(){
//     fruit apples;//object
//     apples.name="apple";
//     apples.color="red";
//     cout<<apples.name<<" "<<apples.color<<" "<<endl;
//     fruit *mango=new fruit();
//     mango->name="mango";
//     mango->color="yellow";
//     cout<<mango->name<<" "<<mango->color;
//     return 0;
// }

// class rectangle{
// public:
//     int l;
//     int b;
//      rectangle(){//default constructor= no  argument passed
//         l=0;
//         b=0;
//     }
//     rectangle(int x,int y){//parameterised constructor=arg passed
//         l=x;
//         b=y;
//     }
//     rectangle(rectangle &r){
//         l=r.l;
//         b=r.b;
//     }
//     ~rectangle(){//destructor
//         cout<<"  YES";
//     }
// };
// int main(){
//     // rectangle r1;
//     // cout<<r1.l<<endl;
//     rectangle* r1=new rectangle();
//     cout<<r1->l<<endl;
//     delete r1;//destructor function call

//     rectangle r2(3,4);
//     cout<<r2.l<<" "<<r2.b<<endl;

//     rectangle r3=r2;
//     cout<<r3.l<<" "<<r3.b;
//     //destructor func works twice
    
    
//     return 0;
// }
// //destructor= cant pass argu(used when objct is deleted )


//ENCAPSULATION
//IT ALSO LEADS TO DATA ABSTRACTION 
//CLASS IS CALLED AS ABSTRACT DATA  TYPE

// class ABC{
//     int x;//private
//     public:
//     void set(int n){
//         x=n;
//     }
//     int get(){
//         return x;
//     }
// };
// int main(){
//     ABC obj1;
//     obj1.set(3);//cant use obj1.x directly 
//     cout<<obj1.get();//new one 
//     return 0;
// }

//ABSTRACTION(ENAbles us to display only essential info)
//pow(x,y)=x to the power y

//INHERITANCE (a class inherits the properties of another class)
//A---B(PARENT TO CHILD CLASS)
// PUBLIC = ACCESSED BY ANYWHERE IN THE code
// PROTECTED = OWN ,PARENT,DERIVED
// PRIVATE=ONLY IN OWN CLASS 

// class parent{
//     public:
//     int x;
//     protected :
//     int y;
//     private:
//     int z;
// };
// class child1:public parent{//inherit 
//     //x will remain public
//     //z is not accessible 
//     //y is protected
// };
// class child2 :private parent {
//     //x is private
//     //y is private
//     //z inaccessible
// };
// class child3: protected parent{
//     //x protected 
//     //y protected
//     //z is inaccessible
// };

// int main(){
//     parent p;
//     p.x;
// }

//TYPES OF INHERITANCE
//single
// class parent {
//     public:
//     parent(){//constructor
//         cout<<"parent class"<<endl;
//     }
// }; 
// class child:public parent{
//     public:
//     child(){
//         cout<<"child class";
//     }
// };
// int main(){
//     child l;//just callling class
//     return 0;
// }

//multi level(A--B--C)
// class parent{
// public:
//     parent(){
//         cout<<"parent class"<<endl;

//     }
// };
// class child:public parent{
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };
// class grandchild: public child{
//     public:
//     grandchild(){
//         cout<<"grand child"<<endl;

//     }
// };
// int main(){
//     grandchild gc;
// }
//HEIRARCHICAL(A--B AND A--C)
//HYBRID (A--B AND A--C AND C--D)

//POLYMORPHISM=ABILITY OF OBJECTS /METHODS TO TAKE DIFF FORMS

//FUNCTION OVERLOADING - DEFINE A FUNC WITH SAME FUNC NAME 
//THEY PERFORM DIFF ACC TO THE ARGU PASSED (HOW MANY aND TYPE)
// class sun{
//     public:
//     void add(int x,int y){
//         int sum=x+y;
//         cout<<sum<<endl;
//     }
//     void add(int x,int y,int z){
//         int sum=x+y+z;
//         cout<<sum<<endl;
//     }
//     void add(float x,float y){
//         float sum=x+y;
//         cout<<sum<<endl;
//     }
// };

// int main(){
//     sun s;
//     s.add(8,9);
//     s.add(7,9,8);
//     s.add(float(1.3),float(3.2));
//     return 0;
// }


//OPERATOR OVERLOADING
// class Complex{
//     public:
//     int real;
//     int img;
//     Complex(int x,int y){
//         real=x;
//         img=y;
//     }
//     Complex operator+ (Complex &c){
//             Complex ans(0,0);
//             ans.real=real+c.real;
//             ans.img=img +c.img;
//             return ans;
//     }
// };
// int main(){
//     Complex c1(1,2);
//     Complex c2(1,3);
//     Complex c3=c1+c2;
//     cout<<c3.real<<"+"<<c3.img<<"i";
//     return 0;
// }

//RUNTIME POLYMORPHISM (resolved at runlime child baap ka function call kar de)
// class parent {
//     public:
//         virtual void print(){//keywoed virtual
//             cout<<"parent class"<<endl;
//         }
//         void show(){
//             cout<<"parent class"<<endl;
//         }
// };
// class child: public parent{
// public:
//     void print(){
//             cout<<"child class"<<endl;
//         }
//         void show(){
//             cout<<"child class"<<endl;
//         }
// };
// int main(){
//     parent *p;
//     child c;
//     p=&c;
//     p->print();
//     p->show();
// }


//LINKED LIST (linear data structure used to store a list of values)
//why linked list is prefered =due to static size of array
//array has contiguous memory allocation
//in arrrays insertion and deletion is tough


//properties of linked list
//dynamic size allocation 
//non contiguous memory allocation
//insertion and deletion is inexpensive 

//LISTNODE =blocks of memory->node[data][next]
//head pointer points to the first node in the linked list
//e,g [v][200]->[v][300]->[v][NULL]
//     ^head pointer
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int data){
        val=data;
        next=NULL;
    }
}; 
int main(){
    node* n=new node(5);
    cout<<n->val<<n->next;//5,0 where 0 is the memory address for null

    return 0;
}

//TRAVERSE (O(n));
//INSERTION AT KTH POSITION IN A SINGLY LINKED LIST(O(n))
// class node{
//     public:
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// }; 
// void insertathead(node* &head,int val){
//         node* new_node =new node(val);
//         new_node->next=head;
//         head=new_node;
//     }
// void insertattail(node* head,int val){
//     node* new_node=new node(val);
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_node;

// }
// void insertatposition(node* &head,int val,int pos){
//     if(pos==0){
//         insertathead(head,val);
//         return ;
//     }
//     node* new_node=new node(val);
//     node* temp =head;
//     int current_pos=0;
//     while(current_pos!=pos-1){
//         temp=temp->next;
//         current_pos++;
//     }//temp is pointing to node at pos-1
//     new_node->next=temp->next;
//     temp->next=new_node;
// }
// void updateatposition(node* &head,int k,int val){
//     node * temp=head;
//     int current =0;
//     while(current!=k){
//         temp=temp->next;
//         current++;
//     }//temp will be pointing to kth node
//     temp->val=val;
// }
// void deleteathead(node * &head){
//     node* temp=head;//temp pointing to head
//     head=head->next;//head moved by a node forward
//     free(temp);//free function to free the space of first node
// }
// void deleteatend(node* head){//second last node's as NULL
//     node* secondlast=head;
//     while(secondlast->next->next!=NULL){//NEXT OF LAST 
//         secondlast=secondlast->next;
//     }
//     //now second last points to second last node
//     node* temp=secondlast->next;//to be deleted 
//     secondlast->next=NULL;
//     free(temp);
// }
// void deleteatposition(node* head,int k){
//     if(k==0){//position
//         deleteathead(head);
//         return ;
//     }
//     int current_posi=0;
//     node* prev=head;
//     while(current_posi!=k-1){
//         prev=prev->next;
//         current_posi++;
//     }
//     //prev at pointing to k-1
//     node* temp=prev->next;//node to be deleted
//     prev->next=prev->next->next;//k+1 will bw prev next
//     free(temp); 
// }
// void display(node * &head){//pass by value
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<" NULL"<<endl;
// }
// int main(){
//     node* head=NULL;
//     insertathead(head,2);
//     display(head);
//     insertathead(head,1);
//     display(head);
//     insertattail(head,3);
//     display(head);
//     insertatposition(head,4,2);
//     display(head);
//     updateatposition(head,2,45);//O(n)
//     display(head);
//     deleteathead(head);//(O(1))
//     display(head);
//     deleteatend(head);//O(n)
//     display(head);
//     deleteatposition(head,1);
//     display(head);
//     return 0;
// }

//delete every alternate element
// class node{
//     public:
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };

// class linkedlist{
//     public:
//     node* head;
//     linkedlist(){
//         head=NULL;
//     }
//     void insertattail(int value){
//         node* new_node=new node(value);
//         if(head==NULL){//empty linked list
//             head=new_node;
//             return ;
//         }
//         node* temp=head;
//         while(temp->next!=NULL){//last element 
//             temp=temp->next;//moving temp pointer
//         }
//         temp->next=new_node;
//     }
//     void display(){//constructor
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }cout<<"NULL"<<endl;
//     }
// };
// void deletealternatenodes(node* & head){
//     node* current =head;
//     while(current!=NULL && current->next!=NULL){
//         node* temp=current->next;
//         current->next=current->next->next;//escaping one space
//         free(temp);
//         current=current->next;//movin current 
//     }
// }
// void deleteduplicate(node* head){
//     node* current =head;
//     while(current!=NULL){
//         while(current->next!=NULL && current->val==current->next->val){
//             node* temp=current->next;
//             current->next=current->next->next;
//             free(temp);
//         }current=current->next;
//     }
// }
// void reverseprint(node* head){
//     //base condition
//     if(head==NULL){
//         return ;
//     }
//     //recursive case
//     reverseprint(head->next);
//     cout<<head->val<<" ";
// }
// node* reversel(node* head){//with null
//     node* prev=NULL;
//     node* current=head;
    
//     //move all  3 pointers by one step ahead
//     while(current!=NULL){
//         node* nextptr=current->next;//storing
//         current->next=prev;
//         prev=current;
//         current=nextptr;//null(current)
//     }
//     node* new_head=prev;//last (prev)
//     return new_head;
// }

// node* reverselrecursive(node* head){
//     //base case 
//     if(head==NULL|| head->next==NULL){
//         return head;
//          }   //recursive case 
//     node* new_head=  reverselrecursive(head->next);
//     head->next->next=head;
//     head->next=NULL;//head is pointing to last node
//     return new_head;
// }

// //1->2->3->4->5->6 = (if k==2) 2->1->4->3->6->5
// node* reversewithk(node* head,int k){
//     node* prev=NULL;
//     node* current=head;
//     int counter=0;
//     while(current!=NULL && counter<k){
//         node* nextptr=current->next;
//         current->next=prev;
//         prev=current;
//         current=nextptr;
//         counter++;
//     }
//     //current will give us k+1 th node
//     if(current!=NULL){
//         node* new_head=reversewithk(current,k);//recurdsive call
//         head->next=new_head;

//     }
//     return prev;//new_head of connnected linkedlist
// }
// int main(){
//     linkedlist ll;
//     ll.insertattail(1);
//     ll.insertattail(2);
//     ll.insertattail(3);
//     ll.insertattail(4);
//     ll.display();
//     // deletealternatenodes(ll.head);
//      //ll.display();

//     //deleteduplicate(ll.head);

//     //reverseprint(ll.head);

//     //ll.display();

//     // ll.head=reversel(ll.head);
//     // ll.display();   

//     // ll.head=reverselrecursive(ll.head);
//     // ll.display(); 

//     ll.head=reversewithk(ll.head,2);
//     ll.display();
//     return 0;
// }


//LINKED LIST PART 2 

//PATTERN :2 POINTERS(TWO LIST ARE EQUAL OR NOT )
class node{
    public:
    int val;
    node* next;
    node(int data){
        val=data;
        next=NULL;
    }
};
class linkedlist{
    public:
    node* head;
    linkedlist(){
        head=NULL;
    }
    void insertattail(int value){
        node* new_node=new node(value);
        if(head==NULL){//empty linked list
            head=new_node;
            return ;
        }
        node* temp=head;
        while(temp->next!=NULL){//last element 
            temp=temp->next;//moving temp pointer
        }
        temp->next=new_node;
    }
    void display(){//constructor
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
bool checkequallinked(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }//at this point either pointer1 is NULL or ptr2 is NULL
    return (ptr1==NULL && ptr2==NULL);
}



//1 3 4 5 6(n) and  8 4 5 6(m)
int getlength(node* head){
    node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }return length;
}
node* moveheadbyk(node* head,int k){
    node* ptr=head;
    while(k--){//k!=0
        ptr=ptr->next;
    }
    return ptr;
}
node* getintersect(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    //step1 find length
    int l1=getlength(head1);
    int l2=getlength(head2);
    //step2 find difference(k) between linkedlist and  move longer linkedlist pointer by k step
    if(l1>l2){//ll1 is longer
        int k=l1-l2;
        ptr1=moveheadbyk(head1,k);
        ptr2=head2;

    }else{//ll2 is longer 
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveheadbyk(head2,k);
    }

    //step 3 : compare ptr1 and ptr2 nodes
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }return NULL;
}
// int main(){//for checkequallinkedlist
//     linkedlist ll1;
//     ll1.insertattail(2);
//     ll1.insertattail(3);
//     ll1.insertattail(4);
//     linkedlist ll2;
//     ll2.insertattail(2);
//     ll2.insertattail(3);
//     ll2.insertattail(4);

//     ll1.display();
//     ll2.display();

//     cout<<checkequallinked(ll1.head,ll2.head)<<endl;
//     //2 3 4 NULL
//     //2 3 4 NULL
//     // 1
// }
// int main(){//intersection
//     linkedlist l1;
//     l1.insertattail(1);
//     l1.insertattail(2);
//     l1.insertattail(3);
//     l1.insertattail(4);
//     l1.insertattail(5);
//     l1.insertattail(6);
//     l1.display();

//     linkedlist l2;
//     l2.insertattail(8);
//     l2.insertattail(9);
//     l2.head->next->next=l1.head->next->next->next;//89456
//     l2.display();
//     node* intersection=getintersect(l1.head,l2.head);
//     if(intersection){
//         cout<<intersection->val<<endl;
//     }else{
//         cout<<"-1";
//     }
// }

node* mergelinkedlist(node* &head1,node* &head2){
    node* dummyheadnode=new node(-1);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummyheadnode;
    while(ptr1 && ptr2){
        if(ptr1->val<ptr2->val){
            ptr3->next=ptr1;//smaller value
            ptr1=ptr1->next;

        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1){
       ptr3->next=ptr1;
    }else{
        ptr3->next=ptr2;
    }

    return dummyheadnode->next;
}
int main(){
    linkedlist l1;
    l1.insertattail(1);
    l1.insertattail(4);
    l1.insertattail(7);

    linkedlist l2;
    l2.insertattail(2);
    l2.insertattail(3);
    l2.insertattail(5);

    linkedlist l3;
    l3.head=mergelinkedlist(l1.head,l2.head);
    l3.display();


}