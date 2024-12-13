#include<stdio.h>
#include<stdlib.h>

/*LIST MODEL FOR TESTING PURPOSE*/

struct LIST
{
    unsigned int num;
    int value;
    LIST *next;
};

    LIST* creatlist()
    {
        LIST *head=0;
        LIST *current,*new_node;
        int value;
        unsigned int num=1;
        scanf("%d",&value);
        if (value==0)
        {
            return head;
        }
        head=(LIST*)malloc(sizeof(LIST));
        head->value=value;
        head->num=num;
        head->next=0;
        current=head;
        while(1){
            num++;
            scanf("%d",&value);
            if (value==0)
            {
                break;
            }
            new_node=(LIST*)malloc(sizeof(LIST));
            new_node->value=value;
            new_node->num=num;
            new_node->next=0;
            current->next=new_node;
            current=new_node;
        }
        return head;
    }
    void printlist(LIST *head)
    {
        LIST *current=head;
        while(current!=0)
        {
            printf("%u:%d\n",current->num,current->value);
            current=current->next;
        }
    }


int main(){
    printlist(creatlist());
    return 0;
}
