const int buttonPin_1 = 8;     
const int buttonPin_2 = 9;     
const int ledPin =  10;     

// variables will change:
int buttonState1 = 0;        
int buttonState2 = 0;        

void setup(void)
{
   
    pinMode(ledPin, OUTPUT);
   
    pinMode(buttonPin_1, INPUT);
    pinMode(buttonPin_2, INPUT);
}

void loop(void)
{
    
    buttonState1 = digitalRead(buttonPin_1);
    buttonState2 = digitalRead(buttonPin_2);

   
    if (buttonState1 == HIGH || buttonState2 == HIGH){
        // turn LED on:
        digitalWrite(ledPin, HIGH);
    }
    else{
        // turn LED off:
        digitalWrite(ledPin, LOW);
    }
}
