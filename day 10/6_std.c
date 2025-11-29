
#include <stdio.h>

#define MAX 5

typedef struct {
    int roll;
    char name[20];
} Student;

Student stack[MAX];
int top = -1;

void push(Student s) {
    if (top == MAX-1) printf("Overflow\n");
    else stack[++top] = s;
}

Student pop() {
    if (top == -1) printf("Underflow\n");
    else return stack[top--];
}

int main() {
    Student s1 = {1, "Amit"};
    Student s2 = {2, "Riya"};

    push(s1);
    push(s2);

    Student x = pop();
    printf("Popped: %d %s", x.roll, x.name);

    return 0;
}
