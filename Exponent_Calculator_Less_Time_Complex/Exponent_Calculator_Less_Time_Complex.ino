int ans;
 
void setup() {
  Serial.begin(9600);
  
  ans = exp(3, 2);
  Serial.println(ans);
  
  ans = exp(5, 1);
  Serial.println(ans);
  
  ans = exp(9, 0);
  Serial.println(ans);
  
  ans = exp(2, 14);
  Serial.println(ans);
  
  ans = exp(0, 4);
  Serial.println(ans);
}
 
void loop() {
  ;
}
 
int exp(int x, int y) {
  if (x==0){
  	return 0;
  }
  
  else if (y%2 == 0){
    int buffer = 1;
    int k = y/2;
    while (k>0){	
      	buffer *= x;
      	k--;
    }
    buffer = buffer * buffer;
    return buffer;
  }
  
  else{
    return x * exp(x, y-1); 
  }
}