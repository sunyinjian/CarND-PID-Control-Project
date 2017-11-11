#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

/**brief initialize the pid controller parameters
 *
 * init the pid parameters, set the error to 0.0
 * @param Kp [IN]: the kp
 * @param Ki [IN]: the ki
 * @param Kd [IN]: the kd
 */
void PID::Init(double Kp, double Ki, double Kd) {
    Kp_ = Kp;
    Ki_ = Ki;
    Kd_ = Kd;

    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
}

void PID::SetParams(double Kp, double Ki, double Kd){
    Kp_ = Kp;
    Ki_ = Ki;
    Kd_ = Kd;
}

void PID::UpdateError(double cte) {
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
}

double PID::TotalError() {
    return -(Kp_ * p_error + Ki_ * i_error + Kd_ * d_error);
}


