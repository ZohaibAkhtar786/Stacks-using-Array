#include<iostream>

using namespace std;
int stack[100],n=5,top=-1,arr[5],i=0 ,flag=0;
void push(int val)
{
	if(top>=n-1)
	cout<<"stack overflow"<<endl;
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if (top<=-1)
	cout<<"stack under flow"<<endl;
	else{
		cout<<"The popped element is "<<stack[top]<<endl;
	
		while (i<n)
		{
			arr[i]=stack[top];
			i++;
			break;
		}
			top--;
			flag++;
		
		}
	}
	void Popping()
	{
		cout<<"The popped elements are :"<<endl;
		for(int i=0;i<flag;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	void isfull()
	{
		if(top>=n-1){
		
		cout<<"stack is full"<<endl;
	}
	else 
	cout<<"stack is not full.   "<<endl;
	}
	void  even()
	{
		cout<<"even numbers in stack are ";
			
		for(int i=top;i>=0;i--)
		{
			if(stack[i]%2==0)
			{
			cout<<stack[i]<<" \t ";
		}
	
	}

		}
	
	void isempty()
	{
		if(top<=-1)
		cout<<"stack is empty"<<endl;
		
	}

void display()
{
	if(top>=0)
	{
		cout<<"Stack elements are:";
		for (int i=top;i>=0;i--)
		cout<<stack[i]<<" ";
		cout<<endl;
		
	}else
	cout<<"stack is empty";
	
}
int main()
{
	int ch,val;
	cout<<"1) Push in stack"<<endl;
	cout<<"2) pop from stack"<<endl;
	cout<<"3) stack is full"<<endl;
	cout<<"4) stack is empty"<<endl;
	cout<<"5) Display stack"<<endl;
	cout<<"6) Show even numbers in stack"<<endl;
	cout<<"7) Show all popped elements in stack"<<endl;
	cout<<"8) Exit"<<endl;
	
do{
	cout<<"Enter choice :"<<endl;
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<"Enter value to be pushed:"<<endl;
			cin>>val;
			push(val);
			break;
		}
		case 2:{
			pop();
			
			break;
		}


		case 3:{
				isfull();
				break;
			}
		case 4:
				{
					isempty();
					break;
				}
		case 5:
			{
				display();
				break;
			}
		case 6:{
					even();
					break;
				}
		case 7:
					Popping();
					break;
		case 8:{
				cout<<"exit"<<endl;
				break;
			}
			default:
				{
					cout<<"Invalid choice"<<endl;
				}
			
	}
}	
while(ch!=8);
return 0;
}

