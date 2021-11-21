#pragma once

const float g = 9.81;

struct Point {
    double x, y;
};

struct Ball {
    Ball(Point initialPos);

    void push(double v, double alpha);
    void fly(double t);

    Point posiotion;
    double vx = 0;
    double vy = 0;
};