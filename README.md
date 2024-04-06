House Automation with Arduino

Description
Our House Automation project utilizes Arduino microcontrollers and various sensors to automate and control various aspects of a home environment. The system includes features such as security monitoring, AC automation, and remote control via a mobile application. Using interrupts and sensor inputs, the project provides efficient and convenient automation solutions for home management.

Components
IR sensors
Reset button
Touch sensor
DHT11 temperature and humidity sensor

Features
Security System:

Touch sensor enables house security and turns off the AC to indicate no occupancy.
Breaching security triggers an alarm (buzzer) and turns on all lights via an interrupt from the IR sensor.
Reset button interrupts to turn off the alarm, security, and lights.
AC Automation:

DHT11 sensor monitors temperature, allowing the AC to adjust between high, low, or medium temperature modes.
Mobile Application Control:

Mobile application created with Kodular allows users to control lights and AC remotely.
Lights can be turned on/off, and brightness can be adjusted via the app.
Timer Module Option:

Timer module acts as an alternative to the reset button.
If the reset button fails to function, the timer interrupt triggers a reset action after a certain time limit.
Getting Started
To get started with our House Automation project, follow these steps:

Clone this repository to your local machine using git clone [repository url].
Set up the Arduino development environment and install necessary libraries.
Connect the Arduino board and sensors according to the provided circuit diagrams.
Upload the Arduino sketch to the board and ensure proper functionality.
Install the mobile application on your smartphone and configure it to communicate with the Arduino system.
Contributing
We welcome contributions from the community! If you'd like to contribute to our House Automation project, please follow these guidelines:

Fork the repository and create a new branch for your contribution.
Make your changes and ensure they adhere to the project's coding style and guidelines.
Test your changes thoroughly.
Submit a pull request with a clear description of your changes and their purpose.

License
This project is licensed under the MIT License. See the LICENSE file for more details.

Contact
For questions or feedback regarding our House Automation project, feel free to contact us at supreeth0904@gmail.com.
