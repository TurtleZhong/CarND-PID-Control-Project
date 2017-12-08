#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    this->p_error = 0.;
    this->i_error = 0.;
    this->d_error = 0.;
}

void PID::UpdateError(double cte)
{

    /*Calc D*/
    d_error = cte - p_error;

    /*calc P*/
    p_error = cte;



    /*Calc I*/
    i_error += cte;

}

double PID::TotalError()
{
    return -Kp * p_error -Kd * d_error - Ki * i_error;
}
