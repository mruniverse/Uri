#include <iostream>

using namespace std;

int main(){
    float oldsalary,newsalary;
    float increase;
    int perc;

    cin >> oldsalary;

    if(oldsalary >= 0 && oldsalary <= 400){
        increase = oldsalary*(15.0/100);
        newsalary = oldsalary + increase;
        perc = 15;
    }
    else if(oldsalary > 400 && oldsalary <= 800){
        increase = oldsalary*(12.0/100);
        newsalary = oldsalary + increase;
        perc = 12;
    }
    else if(oldsalary > 800 && oldsalary <= 1200){
        increase = oldsalary*(10.0/100);
        newsalary = oldsalary + increase;
        perc = 10;
    }
    else if(oldsalary > 1200 && oldsalary <= 2000){
        increase = oldsalary*(7.0/100);
        newsalary = oldsalary + increase;
        perc = 7;
    }
    else{
        increase = oldsalary*(4.0/100);
        newsalary = oldsalary + increase;
        perc = 4;
    }

    printf("Novo salario: %.2f\n",newsalary);
    printf("Reajuste ganho: %.2f\n",increase);
    printf("Em percentual: %d %%\n",perc);

    return 0;
}
