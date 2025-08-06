#include <stdio.h>
int mutex=1, full=0, empty, in=0, out=0, buffer[10], n;
void wait(int *s) { while(*s <= 0); (*s)--; }
void signal(int *s) { (*s)++; }
void producer() {
    int item;
    wait(&empty);
    wait(&mutex);
    printf("Enter item: "); scanf("%d", &item);
    buffer[in++] = item;
    signal(&mutex);
    signal(&full);
}
void consumer() {
    int item;
    wait(&full);
    wait(&mutex);
    item = buffer[out++];
    printf("Consumed: %d\n", item);
    signal(&mutex);
    signal(&empty);
}
int main() {
    printf("Enter number of items: "); scanf("%d", &n);
    empty = n;
    for(int i=0; i<n; i++) producer();
    for(int i=0; i<n; i++) consumer();
    return 0;
}
