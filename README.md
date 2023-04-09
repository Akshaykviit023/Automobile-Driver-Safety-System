# Automobile-Driver-Safety-System
Drowsiness detection system integrated with PC and Arduino UNO to create an alert system. And creating a system to alert the nearest emergency points whenever the driver accident is encountered.

A project done for the course CSE3505 - Essentials of Data Analytics under <b>ELANGO N M</b>
<h3>Team members</h3>
<ul>
<li><b>AKSHAY GIRISH 20BCE1573</b> Github: <a href="https://github.com/Akshaykviit023">Akshaykviit023</a></li>
<li><b>HRITHIK U 20BCE1501</b> Github: <a href="">HU</a></li>
<li><b>SANKER KUMAR 20BCE1505</b> Github: <a href=""SK</a></li>
</ul>
<h2>Abstract</h2>
Earthquakes are natural disasters that can cause significant damage and loss of life. Accurate prediction of earthquakes is essential for developing early warning systems, disaster planning, risk assessment, and scientific research.
This project aims to predict the magnitude and probability of Earthquake occurring in a particular region from the historic data of that region using various Machine learning models.

<h2>Algorithms Used</h2>


<ul>
<li><b>Haar Cascade Classifier: </b>The Haar Cascade Classifier is a machine learning-based object detection algorithm used to identify objects of interest in images or videos. It uses a set of trained classifiers, each representing a specific feature of the object, to scan the image at various scales and locations. The algorithm applies the classifiers to each region of the image and returns the location and size of the detected object(s). In the above code, the Haar Cascade Classifier is used to detect faces, left eyes, and right eyes in video frames, which are subsequently used to determine whether the eyes are open or closed. The algorithm is widely used in computer vision applications such as face detection, pedestrian detection, and gesture recognition.</li>

<li><b>Convolutional Neural Network (CNN): </b>The Convolutional Neural Network (CNN) is a type of neural network used for image classification, object detection, and other visual recognition tasks. It is designed to automatically learn and identify visual patterns in images by using convolutional layers, pooling layers, and fully connected layers. In the above code, a CNN model is trained on a dataset of open and closed eyes to detect the state of the eyes in real-time video frames. The model takes in a 24x24 grayscale image of the eye and outputs a probability score for each class (open or closed). The algorithm uses the predicted classes to determine whether the person is feeling drowsy or not. CNNs are widely used in computer vision applications and have achieved state-of-the-art results in various tasks.</li>

<li><b>Argmax: </b>The Argmax function is a mathematical operation used to determine the index of the maximum value in an array or tensor. In the above code, the Argmax function is used to predict the state of the eyes by finding the index with the highest probability score. The CNN model outputs a probability score for each class (open or closed) for a given input image. The Argmax function is applied to the output array to find the index with the highest score, which corresponds to the predicted class. This predicted class is then used to determine whether the person is feeling drowsy or not. The Argmax function is commonly used in machine learning and deep learning applications for classification tasks.</li>

<li><b>Image Preprocessing: </b>
<ol>
<li>Grayscale Conversion: The input color image is first converted to a grayscale image using cv2.cvtColor() function. This is done to reduce the complexity of the image data and also to enhance the contrast of the image.</li>

<li>Image Resizing: The left and right eye regions of the face are cropped out and resized to 24x24 pixels using cv2.resize() function. This is done to ensure that the input image has a fixed size and to reduce the computational complexity of the CNN.</li>

<li>Normalization: The pixel intensities of the resized images are scaled to the range of 0 to 1 by dividing them by 255. This is done to make the input image compatible with the CNN model.</li>

<li>Image Augmentation: Data augmentation techniques such as random rotations, flips, and zooms are not used in this code. However, in other applications, image augmentation is commonly used to increase the size of the training set and improve the generalization performance of the CNN model.</li>
</ol>
</li>

<li><b>Serial Communication: </b>The Serial Communication protocol is used to exchange data between the computer and an external device such as Arduino. In the above code, the computer sends signals to the Arduino through the serial port to control an external device based on the driver's drowsiness level. The PySerial library provides the necessary tools for establishing communication between the computer and Arduino. The serial communication protocol sends data bits one at a time over a wire or wireless medium. The protocol has a fixed baud rate that specifies the number of bits transmitted per second. The communication is synchronized using a start and stop bit for each character transmitted, and error detection techniques are used to ensure data integrity.</li>
</ul>


<h2>Introduction</h2>
The SOCR Earthquake Dataset can be used to build machine learning models to predict earthquakes or to better understand earthquake patterns and characteristics. Here are a few possible ways machine learning models can be used with this dataset:
<br>
<br>
<ol>
<li>Earthquake prediction: You can use this dataset to build a model that predicts when and where an earthquake might occur based on past earthquake data. You could use techniques such as time series analysis, clustering, or classification to identify patterns in the data and make predictions.</li>

<li>Magnitude prediction: You can use this dataset to build a model that predicts the magnitude of an earthquake based on other factors such as location, depth, or the number of seismic stations that recorded the earthquake. You could use regression techniques to build this model.</li>

<li>Risk assessment: You can use this dataset to identify areas that are at higher risk of earthquakes based on historical earthquake data. You could use clustering or classification techniques to identify patterns in the data and identify areas with similar characteristics.</li>

<li>Anomaly detection: You can use this dataset to detect anomalies or outliers in the data, which could represent earthquakes that are unusual or unexpected. You could use techniques such as clustering or classification to identify patterns in the data and detect anomalies.</li>

<li>Data visualization: You can use this dataset to create visualizations of earthquake data, which could help you identify patterns and relationships in the data. You could use techniques such as scatter plots, heat maps, or geographic information systems (GIS) to visualize the data.</li>
</ol>
<br>
These are just a few examples of the many ways that machine learning models can be used with the SOCR Earthquake Dataset. The specific approach you take will depend on your research question and the goals of your analysis. In this project we focus mainly on Earthquake prediction and Magnitude prediction.
<br>
<h2>Class diagram</h2>
<div align="center">
<img src="https://user-images.githubusercontent.com/113085803/229195883-8aec511d-0e24-46c4-8cd2-67e4bdfb759c.png"/>
</div>
<h2>Data visualization</h2>
Software used: <b>Tableau</b>
<br>
<br>
<div align="center">
  <img src="https://user-images.githubusercontent.com/113085803/229277065-c75d240b-1b1c-4a42-a43a-53311275cdf0.png"/><br>
  <b><i>Figure 1<br> Earthquake (identified by Event ID) and the number of stations recording it</i></b>
  <br>
  <br>

  <img src="https://user-images.githubusercontent.com/113085803/229278389-8b9951d6-a06b-4316-bed9-fa220b5170a8.png"/>
  <b><i>Figure 2<br>Earthquake based on its magnitude</i></b>
  <br>
  <br>
  
  <img src="https://user-images.githubusercontent.com/113085803/229277078-5e2a9ab0-10af-43f6-a862-7727770659ec.png"/>
  <b><i>Figure 3<br>EEarthquake based on its magnitude type</i></b>
  <br>
  <br>
  
  <img alt ="[Earthquake magnitude and depth over the years]"
       src="https://user-images.githubusercontent.com/113085803/229277278-88821402-2d5d-4beb-8644-e2b0b9bd73c0.png"/>
  <b><i>Figure 4<br>Earthquake magnitude and depth over the years</i></b>
  <br>
  <br>
</div>

<h2>Implementation</h2>
We will use four models in this project:
<ol>
<li>Linear regression</li>
<li>Support Vector Machine(SVM)</li>
<li>NaiveBayes</li>
<li>Random Forest</li>

</ol>
<h3>Linear Regression</h3>
<p>Linear regression is a type of supervised machine learning algorithm that is used to model the linear relationship between a dependent variable (in this case, earthquake magnitude) and one or more independent variables (in this case, latitude, longitude, depth, and the number of seismic stations that recorded the earthquake).</p>

<p>The basic idea behind linear regression is to find the line of best fit through the data that minimizes the sum of the squared residuals (the difference between the predicted and actual values of the dependent variable). The coefficients of the line of best fit are estimated using a method called ordinary least squares, which involves minimizing the sum of the squared residuals with respect to the coefficients.</p>

<p>In this situation, we have used multiple linear regression to model the relationship between earthquake magnitude and latitude, longitude, depth, and the number of seismic stations that recorded the earthquake. The multiple linear regression model assumes that there is a linear relationship between the dependent variable (magnitude) and each of the independent variables (latitude, longitude, depth, and number of seismic stations), and that the relationship is additive (i.e., the effect of each independent variable on the dependent variable is independent of the other independent variables).</p>

<p>Once the model has been fit to the data, we can use it to predict the magnitude of a new earthquake given its latitude, longitude, depth, and the number of seismic stations that recorded it. This can be useful for earthquake monitoring and early warning systems, as well as for understanding the underlying causes of earthquakes and improving our ability to predict them in the future.</p>

<div align="center">
<img src="https://user-images.githubusercontent.com/113085803/229284656-286a3290-3c96-4929-ae31-761456cbc3e4.png"><br>
<b><i>Figure 5<br>Multiple linear regression plot using seaborn library(python)</i></b>
 <br>
 <br>
</div>

<p>The linear regression equation used in our multiple linear regression model for earthquake magnitude prediction with latitude, longitude, depth, and number of seismic stations as independent variables can be written as:</p>

<p>Magnitude = -0.6028 * Latitude + 1.2012 * Longitude - 0.0008 * Depth + 0.0239 * No_of_stations + 0.1573</p>

<p>Where:</p>
<ul>
<li>Magnitude is the dependent variable, representing the magnitude of the earthquake</li>
<li>Latitude, Longitude, Depth, and No_of_stations are the independent variables</li>
<li>The coefficients (-0.6028, 1.2012, -0.0008, and 0.0239) represent the slopes of the regression line for each independent variable</li>
<li>The intercept (0.1573) represents the predicted magnitude when all independent variables are zero.</li>
<li>This equation allows us to predict the magnitude of an earthquake based on its latitude, longitude, depth, and the number of seismic stations that recorded it. By plugging in the values of the independent variables for a given earthquake, we can obtain an estimate of its magnitude.</li>
</ul>

<h3>SVM</h3>
<p>Support Vector Machines (SVM) is a type of supervised machine learning algorithm that can be used for both regression and classification tasks. The basic idea behind SVM is to find the best boundary that separates the data into different classes or predicts a continuous output variable (in this case, earthquake magnitude).
</p>
<p>
In SVM, the data points are mapped to a higher-dimensional space where the boundary can be easily determined. The best boundary is the one that maximizes the margin, which is the distance between the boundary and the closest data points from each class. This boundary is called the "hyperplane."
</p>
<p>
For regression tasks, SVM uses a similar approach but instead of a hyperplane, it finds a line (or curve in higher dimensions) that best fits the data while maximizing the margin. This line is the "support vector regression line."
</p>
<p>
SVM can handle both linear and non-linear data by using different kernels that transform the data into a higher-dimensional space. Some commonly used kernels include linear, polynomial, and radial basis function (RBF) kernels.
</p>
<p>
Once the SVM model has been trained on the data, it can be used to predict the magnitude of a new earthquake given its features (latitude, longitude, depth, and number of seismic stations). This can be useful for predicting the magnitude of earthquakes in real-time and for better understanding the factors that contribute to earthquake occurrence.
</p>
<div align="center">
<img src="https://github.com/akash-r34/Earthquake-prediction-using-Machine-learning-models/blob/main/images/SVM_plot.png"><br>
<b><i>Figure 6<br>SVM plot using matplotlib.pyplot library(python)</i></b>
 <br>
 <br>
</div>
<p>
The predicted values from SVM model when evaluated using metrics of linear regression:
<br>
MSE = 0.53
<br>
with R<sup>2</sup> = -1.92
<br>
</p>




<h3>Naive Bayes</h3>
---FINISH THE MODEL DESCRIPTION HERE--

<h3>Random Forest</h3>
---FINISH THE MODEL DESCRIPTION HERE--
