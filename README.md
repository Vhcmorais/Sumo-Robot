# 🤖 Autonomous Sumo Robot – Scientific Research Project (UFU)

![Autonomous Sumo Robot](./esquematico_sumo.png)

🧑🏽‍💻 This repository hosts the source code and development resources for an **Autonomous Sumo Robot** developed through an undergraduate research project conducted at the **Automation, Electronic Systems, and Control Laboratory (LASEC)** of the **Federal University of Uberlândia (UFU)**.

The project aims to design, build, and program an autonomous robot capable of competing in robotic sumo matches by detecting opponents, navigating the arena, avoiding boundary lines, and executing attack strategies without human intervention.

---

## 💡 About the Project

Autonomous Sumo Robotics is a competitive robotics category in which two robots attempt to push each other out of a circular ring called a **dohyo**.

This project was developed as part of a scientific research initiative focused on:

- Embedded systems programming
- Autonomous navigation
- Sensor integration
- Control systems
- Robotics strategy development
- Real-time decision making

The robot uses sensors to detect both the opponent and the arena boundaries, allowing it to react autonomously during matches.

---

## 🚀 Features

- ✅ Autonomous opponent detection
- ✅ Edge detection and ring boundary avoidance
- ✅ Attack and search strategies
- ✅ Real-time sensor processing
- ✅ Differential drive motor control
- ✅ Embedded control system implementation
- ✅ Competition-oriented behavior

---

## 🛠️ Technologies and Components

### Software

- Arduino IDE
- C/C++ (Arduino Framework)

### Hardware

- Arduino-compatible microcontroller
- DC motors with motor driver
- Infrared line sensors
- Distance sensors
- Power supply system
- Custom robot chassis

---

## 📂 Repository Structure

```bash
📁 Autonomous_Sumo_Robot/
├── 📄 sumo.final.ino
├── 🖼️ esquematico_sumo.png
└── 📄 README.md
```

### Files Description

- **sumo.final.ino** → Main source code responsible for robot control, sensor processing, navigation logic, and combat strategies.
- **esquematico_sumo.png** → Hardware schematic illustrating the electronic connections and system architecture.
- **README.md** → Project documentation.

---

## 🔧 System Architecture

The robot is composed of three main subsystems:

### 1. Sensing System

Responsible for collecting environmental information.

Examples:

- Opponent detection sensors
- Boundary detection sensors
- Position monitoring

### 2. Decision System

Processes sensor data and determines the robot's behavior.

Examples:

- Search mode
- Attack mode
- Escape mode
- Recovery mode

### 3. Actuation System

Executes movement commands through the motors.

Examples:

- Forward movement
- Rotation
- Opponent pursuit
- Defensive maneuvers

---

## 📊 Hardware Schematic

The complete electronic schematic can be found below:

![System Schematic](./esquematico_sumo.png)

This diagram presents the connections between:

- Microcontroller
- Sensors
- Motor driver
- Power supply
- Actuators

---

## 💻 Source Code

The file:

```bash
sumo.final.ino
```

contains the complete implementation of the robot's control algorithm.

Main responsibilities of the code include:

- Sensor initialization
- Continuous sensor monitoring
- Motor control
- Opponent tracking
- Ring edge detection
- Autonomous combat strategies

The program operates through a continuous control loop that analyzes sensor data and adjusts robot behavior in real time.

---

## ⚙️ How to Run

### Requirements

- Arduino IDE installed
- Compatible microcontroller board
- Required hardware assembled according to the schematic

### Steps

1. Clone this repository:

```bash
git clone https://github.com/your-username/autonomous-sumo-robot.git
```

2. Open:

```bash
sumo.final.ino
```

in the Arduino IDE.

3. Select the correct board and communication port.

4. Upload the code to the robot.

5. Power the robot and place it inside the competition ring.

---

## 🎯 Research Objectives

This project was developed to investigate and apply concepts related to:

- Autonomous Robotics
- Embedded Systems
- Sensor Fusion
- Real-Time Systems
- Control Engineering
- Artificial Intelligence Strategies for Robotics Competitions

---

## 📌 Results

The developed robot successfully demonstrates autonomous behavior during sumo matches, including:

- Opponent localization
- Attack execution
- Ring boundary avoidance
- Strategic navigation

The project contributed significantly to the understanding of autonomous robotic systems and embedded control applications.

---

## 🔬 Future Improvements

Potential future developments include:

- Computer vision integration
- Machine learning strategies
- Faster opponent detection
- Improved motion control
- Enhanced combat algorithms
- Sensor fusion techniques

---

## 👤 Author

Developed by **Vitor Henrique Carvalho de Morais**, Computer Engineering student at the **Federal University of Uberlândia (UFU)**.

- 💼 Portfolio: https://vhcdev.netlify.app/
- 🐙 GitHub: https://github.com/Vhcmorais
- ✉️ vhcmdev@gmail.com

---

## 🙏 Acknowledgments

Special thanks to the professors, researchers, and colleagues of the **Automation, Electronic Systems, and Control Laboratory (LASEC)** at UFU for their guidance and support throughout the development of this project.

🤖 Built for research, learning, and robotic competition.
Special thanks to the professors, researchers, and colleagues of the **Automation, Electronic Systems, and Control Laboratory (LASEC)** at UFU for their guidance and support throughout the development of this project.

🤖 Built for research, learning, and robotic competition.
