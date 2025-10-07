#include <stdio.h>

struct Hitbox {
    float x;
    float y;
    float w;
    float h;
};

int HIT(struct Hitbox *a, struct Hitbox *b) {
    if (a->x + a->w < b->x) return 0;
    if (a->x > b->x + b->w) return 0;
    if (a->y + a->h < b->y) return 0;
    if (a->y > b->y + b->h) return 0;
    return 1;
}

int main() {
    struct Hitbox box1, box2;
    struct Hitbox *p1 = &box1;
    struct Hitbox *p2 = &box2;

    printf("Masukkan data hitbox 1 (x y w h): ");
    scanf("%f %f %f %f", &p1->x, &p1->y, &p1->w, &p1->h);

    printf("Masukkan data hitbox 2 (x y w h): ");
    scanf("%f %f %f %f", &p2->x, &p2->y, &p2->w, &p2->h);

    printf("Hitbox 1 : (%.2f, %.2f, %.2f, %.2f)\n", p1->x, p1->y, p1->w, p1->h);
    printf("Hitbox 2 : (%.2f, %.2f, %.2f, %.2f)\n", p2->x, p2->y, p2->w, p2->h);

    if (HIT(p1, p2))
        printf("HIT!\n");
    else
        printf("NOPE\n");

    return 0;
}
