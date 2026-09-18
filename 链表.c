#include <stdio.h>
#include <stdlib.h>
typedef struct glimmer{
        int data;
        struct glimmer *next;
    }glimmer;
    glimmer* node(int data){
        glimmer* newnode=(glimmer*)malloc(sizeof(glimmer));
        newnode->data=data;
        newnode->next=NULL;    
        return newnode;
    }
    glimmer* insert(glimmer* head,int n){
        glimmer* newnode=(glimmer*)malloc(sizeof(glimmer));
        if(newnode==NULL){
            printf("内存分配失败\n");
            return;
        }
        newnode->data=n;
        newnode->next=head->next;
        head->next=newnode;
        printf("成功插入节点");

    }

    glimmer* input(glimmer* head,int m){
        glimmer* newnode=(glimmer*)malloc(sizeof(glimmer));
        if(newnode==NULL){
            printf("内存分配失败\n");
            return;
        }
        newnode->data=m;
        newnode->next=NULL;
        glimmer* current= head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newnode;
        printf("成功在尾部插入节点");
        }
        void travel(glimmer* head){
            if(head==NULL){
                printf("链表为空");
                return;
            }
            glimmer* current=head->next;
            while(current!=NULL){
                current=current->next;
            }
            printf("\n");

        }
int main()
{
    glimmer* head=node(0);
    


    return 0;
}