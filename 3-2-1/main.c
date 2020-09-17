#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct person{
    char* name;
    int age;
    struct person* next;
} Person;

void addPerson(Person* header, char* name, int age) {
    Person* pp = header;
    while (pp->next != NULL) {
        pp = pp->next;
    }
    Person* newNode = (Person*) malloc(sizeof(Person));
    
    pp->next = newNode;
    
    char * c=(char*)malloc((sizeof (char)) * strlen(name));
    strcpy(c, name);
    newNode->name = c;
    newNode->age = age;
    newNode->next = NULL;
}

void increaseAge(Person* header) {
    Person* pp = header->next;
    while(1) {
        ++(pp->age);
        if (pp->next == NULL) break;
        pp = pp->next;
    }
}

void delete(Person* header) {
    Person* pp = header->next;
    while(1) {
        printf("Name:%s, Age:%d\n", pp->name, pp->age);
        free(pp->name);
        if(pp->next == NULL) break;
        Person* temp = pp->next;
        free(pp);
        pp = temp;
    }
}
int main() {
    Person* head = (Person*)malloc(sizeof(Person));
    head-> next = NULL;

    while (1) {
        int n;
        scanf("%d", &n);
        if (n==0) {
            break;
        }
        for(int i= 0; i < n; ++i) {
            char name[10];
            int age;
            scanf("%s%d", name, &age);
            addPerson(head, name, age);
        }
    }
    increaseAge(head);
    delete(head);
    return 0;
}

