#include "ball.h"
#include "cmath"

Ball::Ball(Point initialPos) {
    posiotion = initialPos;
}

 const float g=9.81 ;
void Ball::push(double v, double a) {
    vx += v*std::cos(a);
    vy += v*std::sin(a);
}

void Ball::fly (double t) {
    posiotion.x += vx*t;
    posiotion.y += vy*t - g*t*t/2;
}