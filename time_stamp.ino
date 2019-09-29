int hours   = 10;
int minutes = 37;
int seconds = 53;
bool fh = false, fm = false;
void setup()
{
  Serial.begin(2000000);
}

void loop()
{
  char r[32];
  sprintf(r, "%02d:%02d:%02d\n", hours, minutes, seconds);
  Serial.write((char*)r);
  if(seconds == 59){
    seconds = 0;
    fm = true;
  }
  else
    seconds++;
  
  if(fm){
    if(minutes == 59){
      minutes = 0;
      fh = true;
    }
    else
      minutes++;
    fm = false;
  }

  if(fh){
    if(hours == 23){
      hours = 0;
    }
    else
      hours++;
    fh = false;
  }
  delay(1000);
}