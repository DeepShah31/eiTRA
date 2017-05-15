#include <iostream>
using namespace std;


struct node
{
	int data;
	struct node *next;
};
struct node *header,*temp,*temp1;
class single_llist

{

    public:
        void insert_begin();
        void insert_pos();
        void insert_last(); 
        void delete_pos();
        void update();
        void display();

};
main()

{
    int choice, nodes, element, position, i;
    single_llist sl;
    start = NULL;
    while (1)
    {
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node at position"<<endl;
        switch(choice)
        {
        	
        	
        }
    }
