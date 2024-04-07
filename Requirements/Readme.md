# Requirements

# Introduction

   The "Multilevel Security System" project uses two steps to enhance security. First, it checks a saved password against what the user enters. If correct, it sends a new, random password to the user's phone. Users must correctly enter both passwords to gain access. This project aims to provide strong, two-layer security for safer access control.

# Research

   
   The need for your "Multilevel Security System" in real-time scenarios is significant, particularly in areas requiring stringent access control and security measures. This includes:

* Financial Institutions: Banks and financial companies can utilize this system to secure sensitive data and financial transactions, ensuring that access is only granted to authenticated personnel.

* Smart Home Systems: For homeowners seeking advanced security solutions, your system can safeguard against unauthorized access, controlling entry to premises and sensitive information.

* Corporate Security: Companies can implement this system to protect confidential data and restrict access to designated areas, ensuring that only employees who pass the two-step verification can enter.

* Government Facilities: In environments where security is paramount, such as military bases or government buildings, your system can provide an added layer of protection against espionage or unauthorized entry.

* Healthcare Facilities: To protect patient records and ensure that only authorized staff can access certain areas or information systems, your project offers a robust solution.

   By requiring two forms of verification, your system significantly reduces the risk of unauthorized access, making it a valuable tool in any setting where security is a top priority

# Features

 
* Dual-layer authentication
* I2C EEPROM password storage
* UART GSM communication
* Random password generation
* Mobile notification
* Secure access control
* User verification
* Enhanced security measures
* Real-time password dispatch
* Multi-level protection

# Benefits

* Increased security
* Reduced unauthorized access
* User-friendly
* Immediate notifications
* Scalable security solution
* Versatile application
* Enhanced data protection
* Real-time authentication
* Improved access management
* Cost-effective security upgrade

# Explanation

  The "Multilevel Security System" project is an advanced security solution designed to provide enhanced protection and access control using a combination of technologies and methodologies. Here's a detailed explanation of how the project works, its components, and the technologies it employs:

## Core Components:
   * I2C EEPROM: A non-volatile memory used for storing the initial user password securely. The I2C (Inter-Integrated Circuit) protocol facilitates communication between the EEPROM and the microcontroller, ensuring that password data is transmitted securely and efficiently.

   * UART GSM Module: A module that allows the system to communicate over mobile networks. It is used to send a randomly generated password to the user's mobile phone as part of the second authentication step. UART (Universal Asynchronous Receiver/Transmitter) is the communication protocol used to interface with the GSM module.

## How It Works:
### First Level of Security:

* The system prompts the user to enter a password.
* The entered password is compared with the one stored in the I2C EEPROM.
* If the password matches, access to the second level of security is granted.
### Second Level of Security:

* Upon successful verification at the first level, the system generates a random password.
* This random password is sent to the registered mobile number of the user via the UART GSM module.
* The user then enters this password into the system.
* If the entered password matches the randomly generated one, the user is granted access to the system.
## Key Features:
### Dual-Layer Authentication: 
   This approach significantly enhances security by requiring two distinct forms of verification before access is granted.

### Secure Password Storage: 
   Utilizing EEPROM for password storage provides a secure and reliable way to manage user credentials.

### Real-Time Communication: 
   The use of a GSM module for real-time password delivery adds an extra layer of security, ensuring that only the intended user can gain access at any given time.

### Random Password Generation:
   By generating a random password that is valid for only one session, the system effectively mitigates the risk of password theft or replay attacks.

# 4W's and 1'H

## Who

* Homeowners
* Businesses
* Government agencies
* Financial institutions
* Healthcare facilities
* Educational institutions
* Research labs
* Security firms
* IT departments
* Property management companies

## What

   To used for enhancing security through dual-layer authentication for secure access control.

## When

   Used whenever secure, authenticated access is required, around the clock.

## Where
   
   Useful in environments requiring enhanced security measures, such as homes, offices, and secure facilities.

## How

   Secures access by verifying a stored password and then confirming identity with a one-time password sent to the user's mobile.
