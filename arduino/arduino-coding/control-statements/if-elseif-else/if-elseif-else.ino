//Let's build a simple if conditional
int a =67;
int b = 78;
void setup(){
    Serial.begin(115200);
}
void loop(){
    if(b>a){
        Serial.println("b is more than a");
    }
    else if (b=a){
        Serial.println("The numbers are equal");
    }
    else{
        Serial.println("a is more than b");
    }

    delay(2000);
}


