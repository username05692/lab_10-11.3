//підключення стандартних бібліотек
#include<stdio.h>
#include<math.h>
// оголошення константи е
#define M_E 2.718
//головна функція програми main
int main() {
    //опис змінних типу double
    double b = 1.25, c = 2, si = -3.88, ro = 1.5, x = 3.2, a = 1, ti, psi, f;
    //виведення на екран виразу
    printf("Input ti \n ");
    //введення з клавіатури значень ti, psi
    scanf_s("%lf", &ti);
    printf("Input  psi \n ");
    scanf_s("%lf", &psi);
    //формула, за якою здійснюється обчислення
    f = (sqrt(b / c + sin(si))) / (tan(c)) - fabs(c * psi - ti) * sqrt(ro + pow(M_E, x - a));
    printf("At ti = %.2lf and psi = %.2lf rezult of f = % .3lf \n", ti, psi, f);
}