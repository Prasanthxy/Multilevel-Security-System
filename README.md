# Multilevel-Security-System

 ## Multilevel Security System with Double Protection Layer using LPC2129 ARM Microcontroller

  * Our project focuses on enhancing security through a Multilevel Security System implemented on the LPC2129 ARM-based microcontroller. This system employs two layers of protection to ensure robust access control.

## Layer 1 - I2C EEPROM (AT24C08):
  * In the first layer, a secure I2C EEPROM (AT24C08) is utilized to store the primary password. Users attempting to access the system must enter a password, which is then compared with the pre-stored password in the EEPROM. If an incorrect password is entered three times consecutively, access is denied.

## Layer 2 - Dynamic Password Generation and GSM Communication:
  * Upon successful entry of the initial password, the system advances to the second layer of protection. Here, a dynamic one-time password (OTP) is generated within the microcontroller. This OTP serves as an additional layer of security and is sent to the user's mobile number via GSM communication using UART.

## Mobile OTP Verification:
  * The user receives the OTP on their mobile device and is prompted to input it. The microcontroller verifies the entered OTP against the generated one. Only if the OTP matches, the user is granted access to the secured product.

## Security Measures:

  * Information Storage: Critical information such as passwords is securely stored in the I2C EEPROM.
Access Monitoring: Failed attempts are tracked, and after three consecutive failures, access is restricted.
OTP Generation: A dynamic OTP adds an extra layer of security, preventing unauthorized access even if the primary password is compromised.
GSM Communication: UART GSM communication ensures reliable and quick transmission of OTP to the user's mobile device.

## Conclusion:
  * The Multilevel Security System with double protection layers provides a robust and reliable security solution, ensuring that access to the protected product is granted only to authorized users who successfully navigate both layers of authentication.
