#include"header.hpp"

/*put the declarations */

int main() {
    vector<int> q = {};
    q = push_q(q, 10);
    q = push_q(q, 20);
    q = push_q(q, 30);

    print_queue(q);

    int e = pop_q(q);
    printf("popped %d\n", e); //10 to be popped

    print_queue(9);

    return 0;
}

void print_queue(vector<int> q) {
    for(int i=0; i<q.size(); i=i+1)
}