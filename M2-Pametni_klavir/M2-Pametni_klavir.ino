#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include "NeoPixel.h"


//double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
void igra2();
double __var__80_108_97_121_101_100_32_116_105_109_101_114;
double __var__115_111_110_103_32_108_101_110_103_104_116;
double currentTime = 0;
double lastTime = 0;
void igra3();
double counter;
double Izbornik;
void Igra2Ton(double Ton, double Trajanje, double led, double pin);
double T1;
double T2;
double getLastTime(){
    	return currentTime = millis()/1000.0 - lastTime;
}
void tipkaC(double number1);
void tipkaD();
void tipkaE();
void tipkaF();
void tipkaG();
void tipkaA();
void tipkaB();
void Klavir();
double __var__84_105_112_107_97_32_112_114_101_115_115_101_100;
void igra4();
double memo1;
double memo2;
double memo3;
double memo4;
double memo5;
double memo6;
double memo7;
double memo8;
double memo9;
void igra1();
double pin;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(7, 10, NEO_GRB + NEO_KHZ800);


void igra2()
{
    strip.setPixelColor(0, 255, 0, 255);
    strip.show();
    
    strip.setPixelColor(1, 255, 0, 255);
    strip.show();
    
    strip.setPixelColor(2, 255, 0, 0);
    strip.show();
    
    strip.setPixelColor(3, 255, 0, 255);
    strip.show();
    
    strip.setPixelColor(4, 255, 0, 255);
    strip.show();
    
    strip.setPixelColor(5, 255, 0, 255);
    strip.show();
    
    strip.setPixelColor(6, 255, 0, 255);
    strip.show();
    
    while(!(!(digitalRead(4))))
    {
        _loop();
    }
    
    strip.setPixelColor(2, 255, 0, 255);
    strip.show();
    
    _delay(1);
    
    lastTime = millis()/1000.0;
    
    __var__80_108_97_121_101_100_32_116_105_109_101_114 = 0;
    
    __var__115_111_110_103_32_108_101_110_103_104_116 = 0;
    
    for(int __i__=0;__i__<2;++__i__)
    {
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(330,1,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(330,1,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(392,0.5,4,6);
        Igra2Ton(262,0.75,0,2);
        Igra2Ton(294,0.25,1,3);
        Igra2Ton(330,1.5,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(349,0.5,3,5);
        Igra2Ton(349,0.5,3,5);
        Igra2Ton(349,0.75,3,5);
        Igra2Ton(349,0.25,3,5);
        Igra2Ton(349,0.5,3,5);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(294,0.5,1,3);
        Igra2Ton(294,0.5,1,3);
        Igra2Ton(330,0.5,2,4);
        Igra2Ton(294,0.5,1,3);
        Igra2Ton(392,1,4,6);
    }
    
    _delay(1);
    
    if((__var__80_108_97_121_101_100_32_116_105_109_101_114) > (((__var__115_111_110_103_32_108_101_110_103_104_116) * (1)) / (8))){
        strip.setPixelColor(0, 100, 255, 0);
        strip.show();
    }
    
    _delay(0.2);
    
    if((__var__80_108_97_121_101_100_32_116_105_109_101_114) > (((__var__115_111_110_103_32_108_101_110_103_104_116) * (2)) / (8))){
        strip.setPixelColor(1, 100, 255, 0);
        strip.show();
    }
    
    _delay(0.2);
    
    if((__var__80_108_97_121_101_100_32_116_105_109_101_114) > (((__var__115_111_110_103_32_108_101_110_103_104_116) * (3)) / (8))){
        strip.setPixelColor(2, 100, 255, 0);
        strip.show();
    }
    
    _delay(0.2);
    
    if((__var__80_108_97_121_101_100_32_116_105_109_101_114) > (((__var__115_111_110_103_32_108_101_110_103_104_116) * (4)) / (8))){
        strip.setPixelColor(3, 100, 255, 0);
        strip.show();
    }
    
    _delay(0.2);
    
    if((__var__80_108_97_121_101_100_32_116_105_109_101_114) > (((__var__115_111_110_103_32_108_101_110_103_104_116) * (5)) / (8))){
        strip.setPixelColor(4, 100, 255, 0);
        strip.show();
    }
    
    _delay(0.2);
    
    if((__var__80_108_97_121_101_100_32_116_105_109_101_114) > (((__var__115_111_110_103_32_108_101_110_103_104_116) * (6)) / (8))){
        strip.setPixelColor(5, 100, 255, 0);
        strip.show();
    }
    
    _delay(0.2);
    
    if((__var__80_108_97_121_101_100_32_116_105_109_101_114) > (((__var__115_111_110_103_32_108_101_110_103_104_116) * (7)) / (8))){
        strip.setPixelColor(6, 100, 255, 0);
        strip.show();
    }
    
    _delay(2);
    
}

void igra3()
{
    counter = 35;
    
    strip.setPixelColor(0, 50, 100, 0);
    strip.show();
    
    strip.setPixelColor(1, 50, 100, 0);
    strip.show();
    
    strip.setPixelColor(2, 50, 100, 0);
    strip.show();
    
    strip.setPixelColor(3, 50, 100, 0);
    strip.show();
    
    strip.setPixelColor(4, 50, 100, 0);
    strip.show();
    
    strip.setPixelColor(5, 50, 100, 0);
    strip.show();
    
    strip.setPixelColor(6, 50, 100, 0);
    strip.show();
    
    while(!(((Izbornik)==(1))))
    {
        _loop();
        if(!(digitalRead(2))){
            counter += -3;
            while(!(digitalRead(2)))
            {
                _loop();
            }
            _delay(0.2);
        }
        if((counter) < (1)){
            strip.setPixelColor(0, 50, 255, 50);
            strip.show();
            tone(11,262,500); // write to buzzer
            delay(500);
            strip.setPixelColor(1, 50, 255, 50);
            strip.show();
            tone(11,294,500); // write to buzzer
            delay(500);
            strip.setPixelColor(2, 50, 255, 50);
            strip.show();
            tone(11,330,500); // write to buzzer
            delay(500);
            strip.setPixelColor(3, 50, 255, 50);
            strip.show();
            tone(11,349,500); // write to buzzer
            delay(500);
            strip.setPixelColor(4, 50, 255, 50);
            strip.show();
            tone(11,392,500); // write to buzzer
            delay(500);
            strip.setPixelColor(5, 50, 255, 50);
            strip.show();
            tone(11,440,500); // write to buzzer
            delay(500);
            strip.setPixelColor(6, 50, 255, 50);
            strip.show();
            tone(11,494,500); // write to buzzer
            delay(500);
            Izbornik = 1;
        }
        if(!(digitalRead(8))){
            counter += 3;
            while(!(digitalRead(8)))
            {
                _loop();
            }
            _delay(0.2);
        }
        if((counter) > (70)){
            strip.setPixelColor(6, 50, 255, 50);
            strip.show();
            tone(11,494,500); // write to buzzer
            delay(500);
            strip.setPixelColor(5, 50, 255, 50);
            strip.show();
            tone(11,440,500); // write to buzzer
            delay(500);
            strip.setPixelColor(4, 50, 255, 50);
            strip.show();
            tone(11,392,500); // write to buzzer
            delay(500);
            strip.setPixelColor(3, 50, 255, 50);
            strip.show();
            tone(11,349,500); // write to buzzer
            delay(500);
            strip.setPixelColor(2, 50, 255, 50);
            strip.show();
            tone(11,330,500); // write to buzzer
            delay(500);
            strip.setPixelColor(1, 50, 255, 50);
            strip.show();
            tone(11,294,500); // write to buzzer
            delay(500);
            strip.setPixelColor(0, 50, 255, 50);
            strip.show();
            tone(11,262,500); // write to buzzer
            delay(500);
            Izbornik = 1;
        }
        if((counter) < (10)){
            strip.setPixelColor(0, 255, 50, 50);
            strip.show();
        }else{
            strip.setPixelColor(0, 50, 50, 255);
            strip.show();
        }
        if((counter) < (20)){
            strip.setPixelColor(1, 255, 50, 50);
            strip.show();
        }else{
            strip.setPixelColor(1, 50, 50, 255);
            strip.show();
        }
        if((counter) < (30)){
            strip.setPixelColor(2, 255, 50, 50);
            strip.show();
        }else{
            strip.setPixelColor(2, 50, 50, 255);
            strip.show();
        }
        if((counter) < (40)){
            strip.setPixelColor(3, 255, 50, 50);
            strip.show();
        }else{
            strip.setPixelColor(3, 50, 50, 255);
            strip.show();
        }
        if((counter) < (50)){
            strip.setPixelColor(4, 255, 50, 50);
            strip.show();
        }else{
            strip.setPixelColor(4, 50, 50, 255);
            strip.show();
        }
        if((counter) < (60)){
            strip.setPixelColor(5, 255, 50, 50);
            strip.show();
        }else{
            strip.setPixelColor(5, 50, 50, 255);
            strip.show();
        }
        if((counter) < (70)){
            strip.setPixelColor(6, 255, 50, 50);
            strip.show();
        }else{
            strip.setPixelColor(6, 50, 50, 255);
            strip.show();
        }
    }
    
    strip.setPixelColor(2, 255, 0, 0);
    strip.show();
    
    _delay(2);
    
}

void Igra2Ton(double Ton, double Trajanje, double led, double pin)
{
    lastTime = millis()/1000.0;
    
    while(!((getLastTime()) > (Trajanje)))
    {
        _loop();
        strip.setPixelColor(led, 255, 0, 0);
        strip.show();
        if(!(digitalRead(pin))){
            _delay(0.03);
            if(!(digitalRead(pin))){
                T1 = getLastTime();
                strip.setPixelColor(led, 150, 150, 150);
                strip.show();
                tone(11,Ton,0); // write to buzzer
                while(!(((getLastTime()) > (Trajanje)) || (digitalRead(pin))))
                {
                    _loop();
                }
                T2 = (Trajanje) - (getLastTime());
                tone(11,Ton,1); // write to buzzer
            }
        }
    }
    
    strip.setPixelColor(led, 255, 0, 255);
    strip.show();
    
    __var__80_108_97_121_101_100_32_116_105_109_101_114 = (__var__80_108_97_121_101_100_32_116_105_109_101_114) + ((Trajanje) - ((T1) + (T2)));
    
    __var__115_111_110_103_32_108_101_110_103_104_116 = (__var__115_111_110_103_32_108_101_110_103_104_116) + (Trajanje);
    
}

void tipkaC(double number1)
{
    if(!(digitalRead(2))){
        _delay(0.03);
        if(!(digitalRead(2))){
            strip.setPixelColor(0, 255, 0, 255);
            strip.show();
            tone(11,262,0); // write to buzzer
            while(!(((getLastTime()) > (number1)) || (digitalRead(2))))
            {
                _loop();
            }
            tone(11,262,1); // write to buzzer
            if((getLastTime()) > (3)){
                Izbornik = 1;
            }
        }
    }
    
}

void tipkaD()
{
    if(!(digitalRead(3))){
        _delay(0.03);
        if(!(digitalRead(3))){
            strip.setPixelColor(1, 255, 0, 255);
            strip.show();
            tone(11,294,0); // write to buzzer
            while(!(digitalRead(3)))
            {
                _loop();
            }
            tone(11,294,1); // write to buzzer
        }
    }
    
}

void tipkaE()
{
    if(!(digitalRead(4))){
        _delay(0.03);
        if(!(digitalRead(4))){
            strip.setPixelColor(2, 255, 0, 255);
            strip.show();
            tone(11,330,0); // write to buzzer
            while(!(digitalRead(4)))
            {
                _loop();
            }
            tone(11,330,1); // write to buzzer
        }
    }
    
}

void tipkaF()
{
    if(!(digitalRead(5))){
        _delay(0.03);
        if(!(digitalRead(5))){
            strip.setPixelColor(3, 255, 0, 255);
            strip.show();
            tone(11,349,0); // write to buzzer
            while(!(digitalRead(5)))
            {
                _loop();
            }
            tone(11,349,1); // write to buzzer
        }
    }
    
}

void tipkaG()
{
    if(!(digitalRead(6))){
        _delay(0.03);
        if(!(digitalRead(6))){
            strip.setPixelColor(4, 255, 0, 255);
            strip.show();
            tone(11,392,0); // write to buzzer
            while(!(digitalRead(6)))
            {
                _loop();
            }
            tone(11,392,1); // write to buzzer
        }
    }
    
}

void tipkaA()
{
    if(!(digitalRead(7))){
        _delay(0.03);
        if(!(digitalRead(7))){
            strip.setPixelColor(5, 255, 0, 255);
            strip.show();
            tone(11,440,0); // write to buzzer
            while(!(digitalRead(7)))
            {
                _loop();
            }
            tone(11,440,1); // write to buzzer
        }
    }
    
}

void tipkaB()
{
    if(!(digitalRead(8))){
        _delay(0.03);
        if(!(digitalRead(8))){
            strip.setPixelColor(6, 255, 0, 255);
            strip.show();
            tone(11,494,0); // write to buzzer
            while(!(digitalRead(8)))
            {
                _loop();
            }
            tone(11,494,1); // write to buzzer
        }
    }
    
}

void Klavir()
{
    __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 7;
    
    while(!(!(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(7)))))
    {
        _loop();
        if(!(digitalRead(2))){
            __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 0;
        }else{
            if(!(digitalRead(3))){
                __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 1;
            }else{
                if(!(digitalRead(4))){
                    __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 2;
                }else{
                    if(!(digitalRead(5))){
                        __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 3;
                    }else{
                        if(!(digitalRead(6))){
                            __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 4;
                        }else{
                            if(!(digitalRead(7))){
                                __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 5;
                            }else{
                                if(!(digitalRead(8))){
                                    __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 6;
                                }else{
                                    __var__84_105_112_107_97_32_112_114_101_115_115_101_100 = 7;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
}

void igra4()
{
    Izbornik = 0;
    
    while(!(((Izbornik)==(9))))
    {
        _loop();
        Izbornik = 0;
        strip.setPixelColor(0, 100, 0, 100);
        strip.show();
        strip.setPixelColor(1, 100, 0, 100);
        strip.show();
        strip.setPixelColor(2, 100, 0, 100);
        strip.show();
        strip.setPixelColor(3, 100, 0, 100);
        strip.show();
        strip.setPixelColor(4, 100, 0, 100);
        strip.show();
        strip.setPixelColor(5, 100, 0, 100);
        strip.show();
        strip.setPixelColor(6, 100, 0, 100);
        strip.show();
        memo1 = random(0,(6)+1);
        strip.setPixelColor(memo1, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo1, 100, 0, 100);
        strip.show();
        _delay(1);
        memo2 = random(0,(6)+1);
        strip.setPixelColor(memo2, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo2, 100, 0, 100);
        strip.show();
        _delay(1);
        memo3 = random(0,(6)+1);
        strip.setPixelColor(memo3, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo3, 100, 0, 100);
        strip.show();
        _delay(1);
        memo4 = random(0,(6)+1);
        strip.setPixelColor(memo4, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo4, 100, 0, 100);
        strip.show();
        _delay(1);
        memo5 = random(0,(6)+1);
        strip.setPixelColor(memo5, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo5, 100, 0, 100);
        strip.show();
        _delay(1);
        memo6 = random(0,(6)+1);
        strip.setPixelColor(memo6, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo6, 100, 0, 100);
        strip.show();
        _delay(1);
        memo7 = random(0,(6)+1);
        strip.setPixelColor(memo7, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo7, 100, 0, 100);
        strip.show();
        _delay(1);
        memo8 = random(0,(6)+1);
        strip.setPixelColor(memo8, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo8, 100, 0, 100);
        strip.show();
        _delay(1);
        memo9 = random(0,(6)+1);
        strip.setPixelColor(memo9, 0, 0, 255);
        strip.show();
        _delay(1);
        strip.setPixelColor(memo9, 100, 0, 100);
        strip.show();
        _delay(1);
        strip.setPixelColor(0, 0, 100, 100);
        strip.show();
        strip.setPixelColor(1, 0, 100, 100);
        strip.show();
        strip.setPixelColor(2, 0, 100, 100);
        strip.show();
        strip.setPixelColor(3, 0, 100, 100);
        strip.show();
        strip.setPixelColor(4, 0, 100, 100);
        strip.show();
        strip.setPixelColor(5, 0, 100, 100);
        strip.show();
        strip.setPixelColor(6, 0, 100, 100);
        strip.show();
        _delay(1);
        strip.setPixelColor(0, 100, 0, 100);
        strip.show();
        strip.setPixelColor(1, 100, 0, 100);
        strip.show();
        strip.setPixelColor(2, 100, 0, 100);
        strip.show();
        strip.setPixelColor(3, 100, 0, 100);
        strip.show();
        strip.setPixelColor(4, 100, 0, 100);
        strip.show();
        strip.setPixelColor(5, 100, 0, 100);
        strip.show();
        strip.setPixelColor(6, 100, 0, 100);
        strip.show();
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo1))){
            strip.setPixelColor(memo1, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo1, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo1, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo1, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo2))){
            strip.setPixelColor(memo2, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo2, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo2, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo2, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo3))){
            strip.setPixelColor(memo3, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo3, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo3, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo3, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo4))){
            strip.setPixelColor(memo4, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo4, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo4, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo4, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo5))){
            strip.setPixelColor(memo5, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo5, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo5, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo5, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo6))){
            strip.setPixelColor(memo6, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo6, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo6, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo6, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo7))){
            strip.setPixelColor(memo7, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo7, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo7, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo7, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo8))){
            strip.setPixelColor(memo8, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo8, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo8, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo8, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        Klavir();
        if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(memo9))){
            strip.setPixelColor(memo9, 0, 255, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo9, 100, 0, 100);
            strip.show();
            Izbornik += 1;
            _delay(0.2);
        }else{
            strip.setPixelColor(memo9, 255, 0, 0);
            strip.show();
            _delay(0.2);
            strip.setPixelColor(memo9, 100, 0, 100);
            strip.show();
            _delay(0.2);
        }
        strip.setPixelColor(0, 0, 100, 100);
        strip.show();
        strip.setPixelColor(1, 0, 100, 100);
        strip.show();
        strip.setPixelColor(2, 0, 100, 100);
        strip.show();
        strip.setPixelColor(3, 0, 100, 100);
        strip.show();
        strip.setPixelColor(4, 0, 100, 100);
        strip.show();
        strip.setPixelColor(5, 0, 100, 100);
        strip.show();
        strip.setPixelColor(6, 0, 100, 100);
        strip.show();
        _delay(1);
        strip.setPixelColor(0, 100, 0, 100);
        strip.show();
        strip.setPixelColor(1, 100, 0, 100);
        strip.show();
        strip.setPixelColor(2, 100, 0, 100);
        strip.show();
        strip.setPixelColor(3, 100, 0, 100);
        strip.show();
        strip.setPixelColor(4, 100, 0, 100);
        strip.show();
        strip.setPixelColor(5, 100, 0, 100);
        strip.show();
        strip.setPixelColor(6, 100, 0, 100);
        strip.show();
        if((Izbornik) < (9)){
            strip.setPixelColor(0, 255, 0, 0);
            strip.show();
            strip.setPixelColor(3, 0, 255, 0);
            strip.show();
            Klavir();
            if(((__var__84_105_112_107_97_32_112_114_101_115_115_101_100)==(3))){
                Izbornik = 0;
            }else{
                Izbornik = 9;
            }
        }else{
            Izbornik = 9;
        }
    }
    
    strip.setPixelColor(0, 0, 100, 100);
    strip.show();
    
    strip.setPixelColor(1, 0, 100, 100);
    strip.show();
    
    strip.setPixelColor(2, 0, 100, 100);
    strip.show();
    
    strip.setPixelColor(3, 0, 100, 100);
    strip.show();
    
    strip.setPixelColor(4, 0, 100, 100);
    strip.show();
    
    strip.setPixelColor(5, 0, 100, 100);
    strip.show();
    
    strip.setPixelColor(6, 0, 100, 100);
    strip.show();
    
    _delay(1);
    
    strip.setPixelColor(0, 100, 0, 100);
    strip.show();
    
    strip.setPixelColor(1, 100, 0, 100);
    strip.show();
    
    strip.setPixelColor(2, 100, 0, 100);
    strip.show();
    
    strip.setPixelColor(3, 100, 0, 100);
    strip.show();
    
    strip.setPixelColor(4, 100, 0, 100);
    strip.show();
    
    strip.setPixelColor(5, 100, 0, 100);
    strip.show();
    
    strip.setPixelColor(6, 100, 0, 100);
    strip.show();
    
    _delay(1);
    
}

void igra1()
{
    while(!(((Izbornik)==(1))))
    {
        _loop();
        lastTime = millis()/1000.0;
        strip.setPixelColor(0, 0, 0, 100);
        strip.show();
        strip.setPixelColor(1, 0, 0, 100);
        strip.show();
        strip.setPixelColor(2, 0, 0, 100);
        strip.show();
        strip.setPixelColor(3, 0, 0, 100);
        strip.show();
        strip.setPixelColor(4, 0, 0, 100);
        strip.show();
        strip.setPixelColor(5, 0, 0, 100);
        strip.show();
        strip.setPixelColor(6, 0, 0, 100);
        strip.show();
        tipkaC(3);
        tipkaD();
        tipkaE();
        tipkaF();
        tipkaG();
        tipkaA();
        tipkaB();
    }
    
    strip.setPixelColor(0, 255, 0, 0);
    strip.show();
    
    _delay(2);
    
}


void setup(){
    strip.begin(); 
    pin = 3;
    
    pinMode(5,INPUT_PULLUP);
    pinMode(3,INPUT_PULLUP);
    pinMode(11,OUTPUT);
    pinMode(9,INPUT_PULLUP);
    pinMode(pin,INPUT_PULLUP);
    pinMode(2,INPUT_PULLUP);
    pinMode(4,INPUT_PULLUP);
    pinMode(6,INPUT_PULLUP);
    pinMode(7,INPUT_PULLUP);
    pinMode(8,INPUT_PULLUP);
}

void loop(){
    
    Izbornik = 0;
    strip.setPixelColor(0, 0, 100, 0);
    strip.show();
    strip.setPixelColor(1, 0, 100, 0);
    strip.show();
    strip.setPixelColor(2, 0, 100, 0);
    strip.show();
    strip.setPixelColor(3, 0, 100, 0);
    strip.show();
    strip.setPixelColor(4, 0, 100, 0);
    strip.show();
    strip.setPixelColor(5, 0, 100, 0);
    strip.show();
    strip.setPixelColor(6, 0, 100, 0);
    strip.show();
    if(!(digitalRead(2))){
        strip.setPixelColor(0, 255, 0, 0);
        strip.show();
        _delay(0.5);
        igra1();
    }
    if(!(digitalRead(3))){
        strip.setPixelColor(1, 255, 0, 0);
        strip.show();
        _delay(0.5);
        igra2();
    }
    if(!(digitalRead(4))){
        strip.setPixelColor(2, 255, 0, 0);
        strip.show();
        _delay(0.5);
        igra3();
    }
    if(!(digitalRead(5))){
        strip.setPixelColor(3, 255, 0, 0);
        strip.show();
        _delay(0.5);
        igra4();
    }
    
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
    
}
