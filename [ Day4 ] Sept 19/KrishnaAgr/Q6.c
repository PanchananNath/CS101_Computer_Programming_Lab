 #include <stdio.h>

int main() {
    int num, a1, a2, a3 ;

    
    for (num = 100 ;num <=999; num++) {
      
        a1 = num % 10;
        a2 = (num / 10) % 10;
       
        a3 = (num /100) % 10;  
             
        if (num == (a1*a1*a1) + (a2*a2*a2) + (a3*a3*a3)) {
            printf("%d\n", num);
        }
       
    }
  
    return 0;
}