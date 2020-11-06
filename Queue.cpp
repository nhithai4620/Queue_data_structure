#include <bits/stdc++.h>
using namespace std;
#define MaxLength 100
typedef int ElementType;
struct Queue{
	int Front,Rear;
	ElementType Element[MaxLength];
	int count;
};
void Init (Queue &Q)
{
	Q.Front= 0;
	Q.Rear = -1;
	Q.count = 0;
}
int Isempty(Queue Q)
{
	if (Q.count == 0) return 1;
	return 0;
}
int IsFull(Queue Q)
{
	if (Q.count == MaxLength) return 1;
	return 0;
}
void Push(Queue &Q, ElementType x) 
{
    if (IsFull(Q)) cout << "Hang doi day ! ";
    else
    {
        Q.Element[(++Q.Rear) % MaxLength] = x; 
        Q.count++; 
    }
}
int Pop(Queue &Q)
{
    if (Isempty(Q)) cout <<"Hang doi rong ! ";
    else
	{
    ElementType x = Q.Element[Q.Front];
    Q.Front = (Q.Front+1) % MaxLength; 
    Q.count--;
    return x;
	}
}
void Output(Queue Q)
{
    if (Isempty(Q)) printf("Hang doi rong !");
    else
    {
        for (int i=Q.Front; i<=Q.Rear; i++)
        	cout <<Q.Element[i]<<" ";
        cout<<endl;
    }
}
int main(){
	Queue Q;
	Init(Q);
	Push(Q,2);
	Push(Q,4);
	Push(Q,6);
	Push(Q,8);
	Push(Q,10);
	Push(Q,11);
	Push(Q,12);
	Output(Q);
	Pop(Q);
	Output(Q);

}
