# Introduction

  In an era where data security is paramount, our project introduces an advanced Multilevel Security System, seamlessly integrating layers 
  of protection to safeguard access to a secured product. Developed on the LPC2129 ARM-based microcontroller, this project combines hardware and software components 
  to create a robust security infrastructure.
  
# Objectives

* Build a Secure System:
Develop a system with strong security measures using two layers of protection.

* Use LPC2129 ARM Microcontroller:
Employ the LPC2129 ARM microcontroller for efficient processing and control.

* Store Password Safely:
Securely store a primary password in an I2C EEPROM (AT24C08).

* Verify Primary Password:
Require users to enter the primary password for initial access.

* Monitor Failed Attempts:
Keep track of failed password attempts and block access after three consecutive failures.

* Generate Dynamic OTP:
Create a one-time password (OTP) within the microcontroller for an added security layer.

* Enable GSM Communication:
Use UART GSM communication to send OTPs to users' mobile devices.

* Verify OTP for Access:
Prompt users to enter the received OTP on their mobile devices for access verification.

* Handle Security Information Securely:
Implement secure methods for handling and storing critical security information.

* Log Access Attempts:
Keep a log of both successful and unsuccessful access attempts.

* Follow Security Best Practices:
Adhere to established security best practices in design and implementation.

* User-Friendly Interface:
Design an easy-to-use interface for password input and feedback.

* Thorough Testing:
Conduct comprehensive testing to ensure system reliability and security.

* Documentation and Reporting:
Create clear documentation and a report summarizing project details.

* Demonstrate and Present:
Showcase the system's features and security measures through a demonstration and presentation.

# Benefits

* 1)Protection Against Unauthorized Access
* 2)Data Integrity and Confidentiality
* 3)Reduced Risk of Insider Threats
* 4)Dynamic Security Responses
* 5)Protection Against Cyber Threats
