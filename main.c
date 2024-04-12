#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {

    double P1x, P1y, P2x, P2y, P3x, P3y;

    double a, b, c, h1, h2, b1, b2, c1, c2, As, e, f, d;

    printf("Ingrese el punto 1 x y: ");
    scanf("%lf %lf",&P1x,&P1y);

    printf("Ingrese el punto 2 x y: ");
    scanf("%lf %lf",&P2x,&P2y);

    printf("Ingrese el punto 3 x y: ");
    scanf("%lf %lf",&P3x,&P3y);


    e = sqrt(pow(P1x-P2x,2)+pow(P1y-P2y,2));
    f = sqrt(pow(P1x-P3x,2)+pow(P1y-P3y,2));
    d = sqrt(pow(P2x-P3x,2)+pow(P2y-P3y,2));

    printf("e:%lf f:%lf d:%lf",e,f,d);
 
    if (d<(e+f) || e<(d+f) || f<(e+d)){
        if(pow(d,2)==(pow(e,2)+pow(f,2))){
            c=d;
            if(e>=f){
                b=e;
                a=f;
            }else{
                b=f;
                a=e;
            }
        }
        else if(pow(f,2)==(pow(e,2)+pow(d,2))){
            c=f;
            if(e>=d){
                b=e;
                a=d;
            }else{
                b=d;
                a=e;
            }
        }
        else if(pow(e,2)==(pow(f,2)+pow(d,2))){
            c=e;
            if(f>=d){
                b=f;
                a=d;
            }else{
                b=d;
                a=f;
            }
        }else{
            printf("El triangulo no es rectangulo\n");
        }
    }else{
        printf("Los puntos ingresados nos forman un triangulo\n");
    }

    h1=a*b/c;
    c1 = sqrt(pow(a,2)-pow(h1,2));
    c2 = c - c1;
    h2 = h1*c2/b;
    b1 = sqrt(pow(h1,2)-pow(h2,2));
    As = b1*h2/2;

    printf("El area sombreada es: %f",As);



    return 0;
}