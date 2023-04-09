# Automobile-Driver-Safety-System
Drowsiness detection system integrated with PC and Arduino UNO to create an alert system. And creating a system to alert the nearest emergency points whenever the driver accident is encountered.

A project done for the course CSE1901 - Technical Answers for Real-World Problems under <b>Dr.Jayanthi.R</b>
<h3>Team members</h3>
<ul>
<li><b>AKSHAY GIRISH 20BCE1573</b> Github: <a href="https://github.com/Akshaykviit023">Akshaykviit023</a></li>
<li><b>HRITHIK U 20BCE1501</b> Github: <a href="">HU</a></li>
<li><b>SANKER KUMAR 20BCE1505</b> Github: <a href=""SK</a></li>
</ul>
<h2>Abstract</h2>
With thousands of lives lost every year due to traffic accidents caused by various factors such as exhaustion, alcohol, and harsh weather, road safety remains a top concern worldwide. To address this issue, researchers have proposed an integrated driver safety system that uses multiple modules to alert drivers of potential dangers. These modules include a temperature sensor, an alcohol detection module, a tiredness detection module, and an emergency alert system.

The tiredness detection module utilizes a camera and machine learning algorithms to detect signs of driver fatigue, such as head nodding or closing of eyes. Once detected, the driver is alerted to take appropriate action, potentially reducing accidents caused by tired drivers.

The temperature sensor module monitors the vehicle's interior temperature to prevent heatstroke or hypothermia, which can be dangerous during extreme weather conditions. The module continuously checks the temperature and alerts the driver if it becomes hazardous.

The alcohol detection module utilizes an MQ3 sensor to measure the amount of alcohol in the driver's breath. If the driver's breath contains a specified amount of alcohol, the module will prevent the car from starting, reducing accidents caused by drunk driving.

In case of an accident, the emergency warning system immediately alerts nearby emergency services, ensuring a quicker response time and potentially saving lives. The system also automatically notifies the driver's emergency contacts.

The proposed technology can be integrated with existing automotive systems to improve driver safety. Experiments show that the system significantly reduces the probability of accidents caused by alcohol, exhaustion, and extreme temperatures. This comprehensive driver safety system can be a crucial step towards improving overall driving safety and reducing accidents caused by human error.
</br>
<h2>Algorithms Used</h2>


<ul>
<li><b>Haar Cascade Classifier: </b>The Haar Cascade Classifier is a machine learning-based object detection algorithm used to identify objects of interest in images or videos. It uses a set of trained classifiers, each representing a specific feature of the object, to scan the image at various scales and locations. The algorithm applies the classifiers to each region of the image and returns the location and size of the detected object(s). In the above code, the Haar Cascade Classifier is used to detect faces, left eyes, and right eyes in video frames, which are subsequently used to determine whether the eyes are open or closed. The algorithm is widely used in computer vision applications such as face detection, pedestrian detection, and gesture recognition.</li>
</br>
<li><b>Convolutional Neural Network (CNN): </b>The Convolutional Neural Network (CNN) is a type of neural network used for image classification, object detection, and other visual recognition tasks. It is designed to automatically learn and identify visual patterns in images by using convolutional layers, pooling layers, and fully connected layers. In the above code, a CNN model is trained on a dataset of open and closed eyes to detect the state of the eyes in real-time video frames. The model takes in a 24x24 grayscale image of the eye and outputs a probability score for each class (open or closed). The algorithm uses the predicted classes to determine whether the person is feeling drowsy or not. CNNs are widely used in computer vision applications and have achieved state-of-the-art results in various tasks.</li>
</br>
<li><b>Argmax: </b>The Argmax function is a mathematical operation used to determine the index of the maximum value in an array or tensor. In the above code, the Argmax function is used to predict the state of the eyes by finding the index with the highest probability score. The CNN model outputs a probability score for each class (open or closed) for a given input image. The Argmax function is applied to the output array to find the index with the highest score, which corresponds to the predicted class. This predicted class is then used to determine whether the person is feeling drowsy or not. The Argmax function is commonly used in machine learning and deep learning applications for classification tasks.</li>
</br>
<li><b>Image Preprocessing: </b>
<ol>
<li>Grayscale Conversion: The input color image is first converted to a grayscale image using cv2.cvtColor() function. This is done to reduce the complexity of the image data and also to enhance the contrast of the image.</li>
</br>
<li>Image Resizing: The left and right eye regions of the face are cropped out and resized to 24x24 pixels using cv2.resize() function. This is done to ensure that the input image has a fixed size and to reduce the computational complexity of the CNN.</li>
</br>
<li>Normalization: The pixel intensities of the resized images are scaled to the range of 0 to 1 by dividing them by 255. This is done to make the input image compatible with the CNN model.</li>
</br>
<li>Image Augmentation: Data augmentation techniques such as random rotations, flips, and zooms are not used in this code. However, in other applications, image augmentation is commonly used to increase the size of the training set and improve the generalization performance of the CNN model.</li>
</br>
</ol>
</li>
<li><b>Serial Communication: </b>The Serial Communication protocol is used to exchange data between the computer and an external device such as Arduino. In the above code, the computer sends signals to the Arduino through the serial port to control an external device based on the driver's drowsiness level. The PySerial library provides the necessary tools for establishing communication between the computer and Arduino. The serial communication protocol sends data bits one at a time over a wire or wireless medium. The protocol has a fixed baud rate that specifies the number of bits transmitted per second. The communication is synchronized using a start and stop bit for each character transmitted, and error detection techniques are used to ensure data integrity.</li>
</br>
</ul>

</br>
<h2>Introduction</h2>
This study proposes an extensive driver safety system that utilizes various sensors and technologies to identify potential dangers and alert the driver in real-time. The suggested system comprises four modules: an emergency warning system, a temperature sensor, an alcohol detection module, and a module that detects tiredness. The drowsiness detection module uses a camera and machine learning algorithms to identify signs of driver weariness, while the temperature sensor module keeps an eye on the interior temperature to prevent heatstroke or hypothermia. The alcohol detection module employs an MQ3 sensor to detect the presence of alcohol in the driver's breath and prohibits the car from starting if the driver's blood alcohol content is higher than the legal limit. The emergency alert system automatically notifies emergency services in the event of an accident, enabling a swift response to the issue.

Experiments were carried out to evaluate the system's effectiveness, and the findings show that it significantly reduces the likelihood of accidents caused by driver exhaustion, intoxication, and severe weather conditions. The technology accurately detected driver weariness with a detection accuracy of over 90%, while the temperature control module maintained the temperature within the optimal range. Moreover, the breathalyser module prevented the car from starting when the driver's blood alcohol level exceeded the legal limit.

Overall, this research proposes a novel approach to addressing the critical issue of driver safety by leveraging advanced sensors and technologies. The proposed technology has the potential to significantly enhance driver safety and can be a valuable addition to existing vehicle safety systems. The suggested method could be an effective way to mitigate the risk of accidents and save numerous lives, especially given the rising number of automotive accidents worldwide.
<br>
<br>

<h2>Software used: </h2>
<ul>
<li>Visual Studio Code</li>

<li>Arduino IDE</li>

<li>Circuit.io</li>

<li>TinkerCAD</li>
</ul>
</br>

<h2>Hardware used: </h2>
<ul>
<li>PC Camera</li>

<li>Piezo Buzzer</li>

<li>LM35DZ - Temperature Sensor</li>

<li>HC - 05 Bluetooth Serial Module</li>

<li>Alcohol Gas Sensor - MQ-3</li>

<li>QuadBand GPRS-GSM SIM900A</li>

<li>LED – 5mm</li>

<li>Breadboard</li>

<li>Arduino UNO</li>

<li>Triple-axis Accelerometer + Magnetometer</li>

<li>GPS module</li>
</ul>
</br>

<h2>Device setup: </h2>
</br>
<h3>Module-1 Integration</h3>
<div align="center">
<img src="https://user-images.githubusercontent.com/73570745/230781467-55420b66-4247-41bb-b34a-bd3c03412b15.png"><br>

</br>
<h3>Module-2 Integration</h3>
<div align="center">
<img src="https://user-images.githubusercontent.com/73570745/230781485-c97a951a-c577-413b-aad6-cb7cc52c96c0.png"><br>
 <br>
 <br>
</div>

<h2>Block Diagram: </h2>
</br>
<div align="center">
<img src="https://user-images.githubusercontent.com/73570745/230779830-cfc34f35-54a1-45d5-81c0-3d6388b65219.png"><br>

 <br>
 <br>
</div>

<h2>Flowchart: </h2>
</br>
<div align="center">
<img src="https://user-images.githubusercontent.com/73570745/230779794-10538b3f-9ef2-498c-8223-7c6e194deb81.png"><br>

 <br>
 <br>

</div>

<h2>Algorithm: </h2>
</br>
Algorithm for the system's operation:
<br>
<ol>
<li>Start</li>

<li>The system is first powered with the appropriate amount of power supply.</li>

<li>Alcohol sensor determines if the motorist is intoxicated or not once the device is turned on</li>

<li>The device warns the driver if they are too intoxicated, and the car's engine shuts off.</li>

<li>If no alcohol is found, the car will either start right up or keep running.</li>

<li>Eye blink sensors can tell if a motorist is sleepy or awake.</li>

<li>The technology alerts the motorist with an alarm and a red light alert if he is dozing off.</li>

<li>The engine's heat is continuously detected by the temperature sensor, and if the engine is overheated compared to a normal state, the driver receives a red light alert; otherwise, the vehicle continues to move.</li>

<li>If an accident occurs, the accelerometer recognises it and sends a signal to the microcontroller so it may continue to operate.</li>

<li>The position is determined by the GPS module, and the GSM module sends a message with the latitude, longitude, and a link to a Google Map with emergency phone numbers for the police and ambulance.</li>

<li>As soon as the system is turned on, it uses an Arduino Uno microcontroller to continually monitor all the sensors in order to carry out all the prevention, detection, and reporting tasks.</li>
</ol>
</br>

<h2>Sample Result: </h2>
