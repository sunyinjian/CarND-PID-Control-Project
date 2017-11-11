# PID Controller
## P - Proportional Controller
The P controller outputs control signal which is proportional to the error. A large P coefficient makes the controller response faster to error. However, if the P coefficient is too large, the controller may be unstable.

## I - Integral Controller
The I controller is proportional to the integral error. It is mainly used to eliminate steady state error.

## D -Derivative Controller
The D coefficient is proportional to the change of the error. It could be used to avoid oscillation of the car.

## Hyper-parameters
Both steer controller and speed controller are implemented in the project. The hyper-parameters of these two pid controllers are manually tuned.
### Steer Controller
For steer controller, the P, I, D coefficients are set to 0.05, 0.0001, 1.0 when the cross track error is less than 0.5. If the cross tracker error is more than 0.5, the coefficients are set to 0.1, 0.0001, 1.0, which is to enable faster response to deviation from the track. The D coefficient is set to avoid oscillation around the center line. Besides, the D coefficient makes the vehicle response faster to deviation. In order to eliminate the steady state error. The I coefficient is set to 0.0001.
### Speed Controller
The desired speed is set to 35.0 always. The P, I, D coefficients are set to 0.1, 0.0001, 1.0. 

