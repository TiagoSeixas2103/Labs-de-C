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

void main2() {
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

void main() {
    typedef struct {
    int x;
    int y;
} ponto;

    int modulo(int valor) {
        if (valor >= 0) {
            return valor;
        } else {
            return -valor;
        }
    }

    int manhattan(ponto v1, ponto v2) {
        int x = v2.x - v1.x;
        int y = v2.y - v1.y;
        return (modulo(x) + modulo(y));
    }

    ponto p1,p2;
    

    int x1, y1, x2, y2;
    printf("Digite o primeiro x: ");
    scanf("%d", &x1);
    printf("Digite o primeiro y: ");
    scanf("%d", &y1);
    printf("Digite o segundo x: ");
    scanf("%d", &x2);
    printf("Digite o segundo y: ");
    scanf("%d", &y2);

    p1.x = x1;
    p1.y=y1;
    p2.x=x2;
    p2.y=y2;

    int distancia = manhattan(p1,p2);
    printf("A distância é: %d\n", distancia);
    


}