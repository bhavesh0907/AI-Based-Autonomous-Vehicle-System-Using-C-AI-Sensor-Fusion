**AI-Based Autonomous Vehicle System**

## Overview
The AI-Based Autonomous Vehicle System leverages sensor fusion, AI, and path planning algorithms to enable self-driving capabilities. It integrates LiDAR and camera data for obstacle detection and real-time decision-making, ensuring safe and efficient navigation.

## Features

🚗 **Autonomous Navigation** – Self-driving capabilities with AI-driven decision-making.  
🛑 **Real-Time Obstacle Detection** – Uses LiDAR and camera data for accurate environment perception.  
🧠 **AI-Powered Path Planning** – Advanced algorithms for route optimization.  
🔄 **Sensor Fusion Technology** – Integrates multiple sensor inputs for enhanced accuracy.  
📡 **Vehicle-to-Infrastructure Communication** – Enables seamless interaction with traffic systems.  

## Repository Structure
```
Autonomous-Vehicle-System/
│── sensors/               # LiDAR and camera data processing
│── ai_model/              # Machine learning models for decision-making
│── navigation/            # Path planning and control algorithms
│── data/                  # Collected training and test data
│── scripts/               # Utility scripts for testing and validation
│── results/               # Logs and simulation outputs
│── main.py                # System execution file
│── requirements.txt       # Dependencies
│── README.md              # Project documentation
```

## Technologies Used

- **Programming Language:** Python, C++  
- **Computer Vision:** OpenCV, YOLO, TensorFlow  
- **Sensor Integration:** ROS (Robot Operating System), LiDAR SDK  
- **Machine Learning:** PyTorch, Scikit-Learn  
- **Path Planning:** A* Algorithm, RRT (Rapidly-exploring Random Tree)  

## Installation

### Prerequisites
Ensure you have the following installed:
- Python 3.8+
- ROS (Robot Operating System)
- Required Python libraries (see requirements.txt)

### Setup
```sh
# Clone the repository
git clone https://github.com/your-username/Autonomous-Vehicle-System.git

# Navigate to the project directory
cd Autonomous-Vehicle-System

# Install dependencies
pip install -r requirements.txt

# Run the system
python main.py
```

## Usage
1. Start the system  
   ```sh
   python main.py
   ```
2. Load sensor data for real-time processing.  
3. Observe AI-driven path planning and obstacle avoidance.  
4. Analyze vehicle navigation performance using simulation outputs.  

## Contributors
- **Bhavesh Mishra (Lead Developer)**  
- **Ashutosh Pant (AI Model & Sensor Fusion Development)**  

## Contributing
Contributions are welcome! If you find any issues or want to improve the project, feel free to fork the repository and submit a pull request.

**Developed with ❤️ to drive the future of autonomous mobility.**
