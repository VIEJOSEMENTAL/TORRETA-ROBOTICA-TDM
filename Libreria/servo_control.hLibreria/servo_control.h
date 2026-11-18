
#ifndef SERVO_CONTROL_H
#define SERVO_CONTROL_H

// Libreria para PIC18F4550
// MikroC PRO for PIC 7.6.0
// Frecuencia: 20 MHz

// Prototipos de funciones
void Servo_Iniciar();
void Servo_Posicion_X(unsigned short angulo);
void Servo_Posicion_Y(unsigned short angulo);
void Servo_Centrar();

#endif
