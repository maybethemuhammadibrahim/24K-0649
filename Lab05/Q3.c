#include<stdio.h>
int main(){
    char coffee, size;
	float add_time_multiplier,manual,water,sugar,mix,add_coffee,milk,total_time;
     
    //input coffee type
    printf("Enter the type of coffee you want to prepare(B for Black and W for White): ");
    scanf(" %c", &coffee);
    //input validation
    switch(coffee){
        case 'w': coffee = 'W';break;
        case 'b': coffee = 'B';break;
        default:
        printf("Wrong Type Of Coffee Entered!!");
        return 0;
    }

    //input size
    printf("Enter the size of coffee(O for Orignal and D for Double and M for Manual): ");
    scanf(" %c", &size);
    //size validation
    switch(size){
        case 'o':  size = 'O';
        break;
        case 'd':  size = 'D';
        break;
        case 'm':  size = 'M';
        break;
        default:
        printf("Wrong Size Entered!!");
        return 0;
    }
   
   //making increase multiplier
    switch(size){
        case 'O': 
        add_time_multiplier = 1; 
        break;
        case 'D': 
        add_time_multiplier = 1 + 50.0/100;
        printf("%f", add_time_multiplier);
        //50 percent increase means 150% of orignal value
        break;
        case 'M': 
        printf("By how much percentage do you want to increase the orignal cup size (in %): ");
        scanf(" %f", &manual);
        add_time_multiplier = 1 + manual/100; //n percent increase
        break;
        default:printf("Wrong Size Entered");
    }

    //printing and calculating time
    switch(coffee){
        case 'W':
        water= 15*add_time_multiplier;
        sugar= 15*add_time_multiplier;
        mix= 20*add_time_multiplier;
        add_coffee= 2*add_time_multiplier;
        milk= 20*add_time_multiplier;
        total_time = water+sugar+mix+add_coffee+milk+mix;
        printf("Putting Water:%.1f mins\n", water);
        printf("Putting Sugar:%.1f mins\n", sugar);
        printf("Mixing:%.1f mins\n",mix);
        printf("Adding Coffee:%.1f mins\n",add_coffee );
        printf("Adding Milk:%.1f mins\n", milk);
        printf("Mixing:%.1f mins\n", mix);
        printf("Total Time: %.1f mins", total_time);
        break;
        
        case 'B':
        water= 20*add_time_multiplier;
        sugar= 20*add_time_multiplier;
        mix= 25*add_time_multiplier;
        add_coffee= 15*add_time_multiplier;
        total_time = water+sugar+mix+add_coffee+mix;
        printf("Putting Water:%.1f mins\n", water);
        printf("Putting Sugar:%.1f mins\n", sugar);
        printf("Mixing:%.1f mins\n",mix);
        printf("Adding Coffee:%.1f mins\n",add_coffee );
        printf("Mixing:%.1f mins\n", mix);
        printf("Total Time: %.1f mins", total_time);
        break;
        deault:
        printf("test");
    }
}
