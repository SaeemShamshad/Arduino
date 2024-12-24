int pin2= 2;
int pin3 = 3;
int pin4= 4;
int pin5= 5;
int waittime= 1000;

int j= HIGH;
int k= LOW;
int x, y, z, a;
int save_y, save_z, save_a;






void setup() {
  // put your setup code here, to run once:
pinMode (pin2, OUTPUT);
pinMode (pin3, OUTPUT);
pinMode (pin4, OUTPUT);
pinMode (pin5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


y=LOW;
z=LOW;
a=LOW;

for(int i=1; ;i++){

if (i%2==0)
{
  x=j;
}
else{
  x=k;
}

if (x==HIGH&y==LOW)
save_y=j;
else if(x==j&y==j)
save_y=k;

// else save_y=k;

if(x&y==HIGH&z==LOW)
save_z=j;
else if (x&y==HIGH&z==HIGH)
save_z=k;
// else save_z=k;

if(x&y&z==HIGH&a==LOW)
save_a=j;
else if (x&y&z&a==HIGH)
save_a=k;
// else save_a=k;

digitalWrite(pin2, x);
digitalWrite(pin3, y);
digitalWrite(pin4, z);
digitalWrite(pin5, a);
delay(waittime);

y=save_y;
z=save_z;
a=save_a;
}










}
