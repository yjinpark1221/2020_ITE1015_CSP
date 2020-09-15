#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct person{
    char* name;
    int age;
    struct person* next;
} Person;

void addPerson(Person* header, char* name, int age) {
    char*c=(char*)malloc((sizeof (char)) * 10);
    strcpy(c, name);
    header->name = c;
    header->age = age;
    header->next = (Person*)malloc(sizeof(Person));
}

void increaseAge(Person* header) {
    ++(header->age);
}

int main() {
    Person* p1 = (Person*)malloc(sizeof(Person));
    Person* now = p1;
    while (1) {
        int n;
        scanf("%d", &n);
        if (n==0) {
            now->next == NULL;
            break;
        }
        for(int i= 0; i < n; ++i) {
            char name[10];
            int age;
            scanf("%s%d", name, &age);
            addPerson(now, name, age);
            now = now->next;
        }
    }
    now = p1;
    while (now->next != NULL) {
        increaseAge(now);
        printf("Name:%s, Age:%d\n", now->name, now->age);
        free(now->name);
        Person * next = now->next;
        free(now);
        now = next;
    }
    return 0;
}

