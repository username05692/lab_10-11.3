//���������� ����������� �������
#include<stdio.h>
#include<math.h>
// ���������� ��������� �
#define M_E 2.718
//������� ������� �������� main
int main() {
    //���� ������ ���� double
    double b = 1.25, c = 2, si = -3.88, ro = 1.5, x = 3.2, a = 1, ti, psi, f;
    //��������� �� ����� ������
    printf("Input ti \n ");
    //�������� � ��������� ������� ti, psi
    scanf_s("%lf", &ti);
    printf("Input  psi \n ");
    scanf_s("%lf", &psi);
    //�������, �� ���� ����������� ����������
    f = (sqrt(b / c + sin(si))) / (tan(c)) - fabs(c * psi - ti) * sqrt(ro + pow(M_E, x - a));
    printf("At ti = %.2lf and psi = %.2lf rezult of f = % .3lf \n", ti, psi, f);
}