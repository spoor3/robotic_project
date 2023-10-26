# robotic_project
codes in usage for opencv steering wheel controlled mini rover
opencv code:
This code uses OpenCV to capture video from a camera feed. It detects the specific colour on the steering wheel and uses its presence to control key presses (W, A, D) based on the color positions, effectively allowing the user to control a vehicle's movement by moving colored objects within the camera's view. It also displays the video feed with added lines for reference.
arduino code :
This code is for controlling a robot or vehicle with four motors using an Arduino. It listens for serial commands ('W' for forward, 'S' for backward, 'D' for left, 'A' for right, '' for stop, 'Q' for diagonal right, 'E' for diagonal left), adjusts motor speeds accordingly, and provides gradual acceleration and deceleration for smoother motion control.
