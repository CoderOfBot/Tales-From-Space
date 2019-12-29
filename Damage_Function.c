#include <stdio.h>
#include <math.h>


int main(){
    uint32_t armour;
    uint32_t hpTotal;
    uint32_t damageDealt;
    char damageType;
    int end;
    float h;
        
    puts("To end program enter ""-1"" in end value");
    
    puts("Enter armour value: ");
    scanf("%u", &armour);
    
    puts("Enter Total HP of unit: ");
    scanf("%u", &hpTotal);
    long int newHealth = hpTotal;

    puts("Enter damage dealt to unit: ");
    scanf("%u", &damageDealt);
    
    puts("enter damage type (L, P, or B for Laser, Plasma, or Ballistic)\n");
    scanf("%c", &damageType);
    scanf("%c", &damageType);
    puts("");

        
    while(1){
        h = (double)armour/hpTotal;
        
        if(damageType == 'L'){
            if(h < 0.5){
                newHealth -= ceil((double)damageDealt - 2.0*damageDealt*h);
                puts("Laser Hit");
            }
            
        }else if(damageType == 'P'){
            if(h < 1.0){
                newHealth -= ceil((double)damageDealt - (double)damageDealt*h);
                puts("Plasma Hit");
            }
     
        }else if(damageType == 'B'){
            if(h < 2.0){
                newHealth -= ceil((double)damageDealt - 0.5*damageDealt*h);
                puts("Ballistic Hit");
            }
        
        }else{
            puts("not a L P or B, Sp the Program will exit");
            break;
        }

        if(h >= 1){
            armour -= damageDealt;
        }else{
            armour -= ceil((double)damageDealt*h);
        }
        printf("New Armour is: %d\n", armour);
        printf("New Health is: %d\n", newHealth);
        puts("");        
        
        puts("end?");
        scanf("%d", &end);
        if(end == -1){
            break;
        }
        puts("");
        
        puts("Enter damage dealt to unit: ");
        scanf("%u", &damageDealt);
        
        printf("enter damage type (L, P, or B for Laser, Plasma, or Balistic)\n");
        scanf("%c", &damageType);
        scanf("%c", &damageType);
        puts("");
    }
}