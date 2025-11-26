#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;    
}node_t;

node_t* new_Node(node_t* head){
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = 0;
    new_node->next = head;
    return new_node;
}

//i
node_t* insert_at_beginning(node_t* head, int val){
    node_t* new_node = new_Node(head);
    new_node->data = val;
    return new_node;
}

//ii
node_t* insert_at_end(node_t* head, int val){
    if(head == NULL){
        return insert_at_beginning(head, val);
    }
    node_t* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    node_t* new_node = new_Node(NULL);
    new_node->data = val;
    curr->next = new_node;
    return head;
}

//iii
node_t* insert_at_position(node_t* head, int val, int pos){
    if(pos == 0){
        return insert_at_beginning(head, val);
    }
    node_t* curr = head;
    for(int i = 0; i < pos - 1; i++){
        if(curr == NULL){
            printf("Position Not Allowed\n");
            return head;
        }
        curr = curr->next;
    }
    node_t* new_node = new_Node(curr->next);
    new_node->data = val;
    curr->next = new_node;
    return head;
}

//iv
node_t* delete_from_beginning(node_t* head){
    if(head == NULL){
        printf("List is Empty\n");
        return NULL;
    }
    node_t* temp = head;
    head = head->next;
    free(temp);
    return head;
}

//v
node_t* delete_from_end(node_t* head){
    if(head == NULL){
        printf("List is Empty\n");
        return NULL;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    node_t* curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    free(curr->next);
    curr->next = NULL;
    return head;
}

//vi
node_t* delete_by_value(node_t* head, int val){
    if(head == NULL){
        printf("List is Empty\n");
        return NULL;
    }
    if(head->data == val){
        return delete_from_beginning(head);
    }
    node_t* curr = head;
    while(curr->next != NULL && curr->next->data != val){
        curr = curr->next;
    }
    if(curr->next == NULL){
        printf("Value Not Found\n");
        return head;
    }
    node_t* temp = curr->next;
    curr->next = curr->next->next;
    free(temp);
    return head;
}

//vii
node_t* search_element(node_t* head, int val){
    int index = 0;
    node_t* curr = head;
    while(curr != NULL){
        if(curr->data == val){
            printf("Element %d Found at index %d\n", val, index);
            return head;
        }
        curr = curr->next;
        index++;
    }
    printf("Element %d Not Found\n", val);
    return head;
}

//viii
void display_list(node_t* head){
    node_t* curr = head;
    while(curr != NULL){
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

//ix
int count(node_t* head){
    int cnt = 0;
    node_t* temp = head;
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main() {
    node_t* head = NULL;
    int choice;
    do{
        printf("1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n4. Delete from Beginning\n5. Delete from End\n6. Delete by Value\n7. Search Element\n8. Display List\n9. Count Elements\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        int val, pos;
        switch(choice){
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                head = insert_at_beginning(head, val);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                head = insert_at_end(head, val);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                printf("Enter position: ");
                scanf("%d", &pos);
                head = insert_at_position(head, val, pos);
                break;
            case 4:
                head = delete_from_beginning(head);
                break;
            case 5:
                head = delete_from_end(head);
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                head = delete_by_value(head, val);
                break;
            case 7:
                printf("Enter value to search: ");
                scanf("%d", &val);
                head = search_element(head, val);
                break;
            case 8:
                display_list(head);
                break;
            case 9:
                printf("Count of elements: %d\n", count(head));
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
    while(choice != 0);
    return 0;
}