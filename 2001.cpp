#include "bits/stdc++.h"
using namespace  std;

double cal(double x1,double y1,double x2,double y2) {
    double res;
    res = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    return res;
}

int main() {
double x1,y1,x2,y2;
while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2) != EOF){
    printf("%.2lf\n",cal(x1, y1, x2, y2));
}
    return 0;
}