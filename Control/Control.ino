int LA= 9;
int LB= 10;
int RA= 4;
int RB= 5;
void forward(){
  digitalWrite( LA, HIGH);
  digitalWrite( LB, LOW);
  digitalWrite( RA, HIGH);
  digitalWrite( RB, LOW);
}
void right(){
  digitalWrite( LA, HIGH);
  digitalWrite( LB, LOW);
  digitalWrite( RA, LOW);
  digitalWrite( RB, HIGH);
  
  }
void left(){
  digitalWrite( LA, LOW);
  digitalWrite( LB, HIGH);
  digitalWrite( RA, HIGH);
  digitalWrite( RB, LOW);
}

void stop_car(){
  digitalWrite( LA, LOW);
  digitalWrite( LB, LOW);
  digitalWrite( RA, LOW);
  digitalWrite( RB, LOW);
}

void back(){
  digitalWrite( LA, LOW);
  digitalWrite( LB, HIGH);
  digitalWrite( RA, LOW);
  digitalWrite( RB, HIGH);
}
char val = 0;
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  pinMode( LA, OUTPUT);
  pinMode( LB, OUTPUT);
  pinMode( RA, OUTPUT);
  pinMode( RB, OUTPUT);
}

void loop() {
  
  if(Serial.available()>0){
    val = Serial.read();
    Serial.println(val);
    if(val == '1')
     forward();
    else if(val == '2')
     right();
    else if(val == '3')
     left();
    else if(val == '4')
     stop_car();
     else if(val == '5')
     back();

  }

}
