/*
 * Escreva seu programa aqui!
 */

void sum_sub(int a, int b, int *psum, int *psub) {
        *psum = a + b;
        *psub = a - b;
    }

void perimetro_area(int a, int b, int *pper, int *parea){
    *pper = 2 * a + 2 * b;
    *parea = a * b;
}

void main1() {
    int sum;
    int sub;
    int *psum;
    int *psub;
    psub = &sub;
    psum = &sum;

    int v1, v2;
    printf("Digite o primeiro número: ");
    scanf("%d", &v1);
    printf("Digite o segundo número: ");
    scanf("%d", &v2);

    sum_sub(v1,v2,psum,psub);
    printf("A soma vale: %d\nA divisão vale %d\n", sum, sub);
    


}

void main() {
    int perimetro;
    int area;
    int *pper;
    int *parea;
    pper = &perimetro;
    parea = &area;

    int v1, v2;
    printf("Digite o primeiro número: ");
    scanf("%d", &v1);
    printf("Digite o segundo número: ");
    scanf("%d", &v2);

    perimetro_area(v1,v2,pper,parea);
    printf("A área vale: %d\nO perímetro vale: %d\n", area, perimetro);
    


}
