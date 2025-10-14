#include <cstdio>

struct cartesian_point {
    int x;
    int y;
};
void print_cart(cartesian_point point) {
    printf("(%d, %d)", point.x, point.y);
    return ;
};
int main() {
    cartesian_point point_a = cartesian_point {5, 2};
    print_cart(point_a);
    return 0;
}