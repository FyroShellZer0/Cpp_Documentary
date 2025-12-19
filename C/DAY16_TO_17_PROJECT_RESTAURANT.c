#include <stdio.h>
#include <stdbool.h>
double orderSummary(double main, double side, double soup, double dessert, double drink) {
    printf("------------------------------------------\n");
    double total = main + side + soup + dessert + drink;
    printf("------------------------------------------\n");
    return total;
}
double Discounted(double foodprice, double discount) {
    return foodprice * discount;
}
double mainPassValue(int maindishchoice
    , double adobo, double lechon, double sisig, double kaldereta, double bicolExpress, double kinilaw, double crispyPata, double tapsilog) {
        double mainprice = 0.0;
    switch(maindishchoice) {
                case 1:
                    mainprice = adobo;
                    
                    break;
                case 2:
                    mainprice = lechon;
                    break;
                case 3:
                    mainprice = sisig;
                    break;
                case 4:
                    mainprice = kaldereta;
                    break;
                case 5:
                    mainprice = bicolExpress;
                    break;
                case 6:
                    mainprice = kinilaw;
                    break;
                case 7:
                    mainprice = crispyPata;
                    break;
                case 8:
                    mainprice = tapsilog;
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            return mainprice;
}
double sidePassValue (int sideDishChoice, 
    double lumpiaShanghai, double pancitCanton, double tortangTalong, double pinakbet, double chicharon) {
    double sideprice = 0.0;
    switch(sideDishChoice) {
                case 1:
                    sideprice = lumpiaShanghai;
                    break;  
                case 2:
                    sideprice = pancitCanton;
                    break;
                case 3:
                    sideprice = tortangTalong;
                    break;
                case 4:
                    sideprice = pinakbet;
                    break;
                case 5:
                    sideprice = chicharon;
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            return sideprice;
}
double soupPassValue (int soupsChoice, double sinigang, double bulalo, double tinola, double LaPazBatchoy) {
    double soupprice = 0.0;
    switch(soupsChoice) {
                case 1:
                    soupprice = sinigang;
                    break;
                case 2:
                    soupprice = bulalo;
                    break;
                case 3:
                    soupprice = tinola;
                    break;
                case 4:
                    soupprice = LaPazBatchoy;
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            return soupprice;
}
double dessertsPassValue(int dessertsChoice, double halohalo, double leche, double turon, double ubeHalaya, double putoKutsinta) {
    double dessertprice = 0.0;
    switch(dessertsChoice) {
                case 1:
                    dessertprice = halohalo;
                    break;
                case 2:
                    dessertprice = leche;
                    break;
                case 3:
                    dessertprice = turon;
                    break;
                case 4:
                    dessertprice = ubeHalaya;
                    break;
                case 5:
                    dessertprice = putoKutsinta;
                    break;
            }
            return dessertprice;
}
double drinkPassValue(int drinkChoice, double sago, double buko, double kalamansi, double cucumber) {
    double drinkprice = 0.0;
    switch(drinkChoice){
                case 1:
                    drinkprice = sago;
                    break;
                case 2:
                    drinkprice = buko;
                    break;
                case 3:
                    drinkprice = kalamansi;
                    break;
                case 4:
                    drinkprice = cucumber;
                    break;
            }
            return drinkprice;
}
int main() {
// double adobo, double lechon, double sisig, double bicolExpress, double kinilaw, double crispyPata, double tapsilog, double lumpiaShanghai, double pancitCanton, double tortangTalong, double pinakbet, double chicharon, double sinigang, double bulalo, double tinola, double LaPazBatchoy, double halohalo, double leche, double turon, double ubeHalaya, double puto, double sago, double buko, double kalamansi, double cucumber
    bool isStudent = false;
    bool isSenior = true;

      
    const double studentsenior = 0.7;
    const double student = 0.9;
    const double senior = 0.8;

    int choice = 0;
    double receipt = 0.0;
    int mainDishChoice = 0;
    int sideDishChoice = 0;
    int soupsChoice = 0;
    int dessertsChoice = 0;
    int drinkChoice = 0;
    double mainprice = 0.0, sideprice = 0.0, soupprice = 0.0, dessertprice = 0.0, drinkprice = 0.0;
    double calculatedPrice = 0.0;
    //maindish
    double adobo = 1.50;
    double lechon = 5.20;
    double sisig = 2.12;
    double kaldereta = 2.50;
    double bicolExpress = 2.11;
    double kinilaw = 1.0;
    double crispyPata = 9.2;
    double tapsilog = 1.0;
  
    //side dish
    double lumpiaShanghai = 1.2;    
    double pancitCanton = 0.5;
    double tortangTalong = 2.5;
    double pinakbet = 2.0;
    double chicharon = 3.0;
    //soup
    double sinigang = 3.9;
    double bulalo = 6.3;
    double tinola = 2.9;
    double LaPazBatchoy = 3.0;
    //dessert
    double halohalo = 3.6;
    double leche = 1.5;
    double turon = 0.8;
    double ubeHalaya = 2.4;
    double putoKutsinta = 0.2;
    //drinks
    double sago = 1.5;
    double buko = 1.5;
    double kalamansi = 1.5;
    double cucumber = 1.5;
    printf("------------------Jen's Restaurant---------------------\n");

    
    if (isSenior && isStudent) {
        printf("You got a senior and student discount of 30percent!\n");
        printf("1. See menu\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 1) {
            printf("30 percent off: \n");
            adobo = Discounted(adobo, studentsenior); // variable name discounted(adobo price, studentsenior 30% 0.7 pass down to function)
            lechon = Discounted(lechon, studentsenior);
            sisig = Discounted(sisig, studentsenior);
            kaldereta = Discounted(kaldereta, studentsenior);
            bicolExpress = Discounted(bicolExpress, studentsenior);
            kinilaw = Discounted(kinilaw, studentsenior);
            crispyPata = Discounted(crispyPata, studentsenior);
            tapsilog = Discounted(tapsilog, studentsenior);

            printf("## MAIN DISHES\n");
            printf("1. $%.2lf - Adobo (The national dish, typically chicken or pork)\n", adobo);
            printf("2. $%.2lf - Lechon (Whole roasted pig with crispy skin)\n", lechon);
            printf("3. $%.2lf - Sisig (Sizzling, chopped pork face and liver)\n", sisig);
            printf("4. $%.2lf - Kaldereta (Beef stew in tomato sauce and liver spread)\n", kaldereta);
            printf("5. $%.2lf - Bicol Express (Pork stew with chilies and coconut milk)\n", bicolExpress);
            printf("6. $%.2lf - Kinilaw (Filipino-style ceviche, fish cured in vinegar)\n", kinilaw);
            printf("7. $%.2lf - Crispy Pata (Deep-fried pork knuckle)\n", crispyPata);
            printf("8. $%.2lf - Tapsilog (Tapa, Sinangag, and Itlog breakfast combo)\n", tapsilog);
            printf("------------------------------------------\n\n");
            printf("Enter your main dish order: ");
            scanf("%d", &mainDishChoice);
            getchar();

            mainprice = mainPassValue(mainDishChoice, adobo, lechon, sisig, kaldereta, bicolExpress, kinilaw, crispyPata, tapsilog);

            lumpiaShanghai = Discounted(lumpiaShanghai, studentsenior);
            pancitCanton = Discounted(pancitCanton, studentsenior);
            tortangTalong = Discounted(tortangTalong, studentsenior);
            pinakbet = Discounted(pinakbet, studentsenior);
            chicharon = Discounted(chicharon, studentsenior);
            printf("## SIDE DISHES & SNACKS\n");
            printf("1. $%.2lf - Lumpia Shanghai (Small, fried meat spring rolls)\n", lumpiaShanghai);
            printf("2. $%.2lf - Pancit Canton (Stir-fried egg noodles with vegetables and meat)\n", pancitCanton);
            printf("3. $%.2lf - Tortang Talong (Eggplant omelet)\n", tortangTalong);
            printf("4. $%.2lf - Pinakbet (Mixed vegetables steamed in fish sauce/bagoong)\n", pinakbet);
            printf("5. $%.2lf - Chicharon (Crispy fried pork rinds)\n", chicharon);
            printf("------------------------------------------\n\n");
            printf("Enter your side dish order: ");
            scanf("%d", &sideDishChoice);
            getchar();

            sideprice = sidePassValue(sideDishChoice, lumpiaShanghai, pancitCanton, tortangTalong, pinakbet, chicharon);

            sinigang = Discounted(sinigang, studentsenior);
            bulalo = Discounted(bulalo, studentsenior);
            tinola = Discounted(tinola, studentsenior);
            LaPazBatchoy = Discounted(LaPazBatchoy, studentsenior);
            printf("## SOUPS\n");
            printf("1. $%.2lf - Sinigang (Sour and savory tamarind broth soup)\n", sinigang);
            printf("2. $%.2lf - Bulalo (Clear soup with beef shanks and bone marrow)\n", bulalo);
            printf("3. $%.2lf - Tinola (Chicken soup seasoned with ginger and fish sauce)\n", tinola);
            printf("4. $%.2lf - La Paz Batchoy (Noodle soup with pork offal, chicharon, and egg)\n", LaPazBatchoy);
            printf("------------------------------------------\n\n");
            printf("Enter your soup order: ");
            scanf("%d", &soupsChoice);
            getchar();
            soupprice = soupPassValue(soupsChoice, sinigang, bulalo, tinola, LaPazBatchoy);

            
            halohalo = Discounted(halohalo, studentsenior);
            leche = Discounted(leche, studentsenior);
            turon = Discounted(turon, studentsenior);
            ubeHalaya = Discounted(ubeHalaya, studentsenior);
            putoKutsinta = Discounted(putoKutsinta, studentsenior);
            printf("## DESSERTS\n");
            printf("1. $%.2lf - Halo-Halo (Mixed ice cream, beans, fruits, and leche flan on shaved ice)\n", halohalo);
            printf("2. $%.2lf - Leche Flan (Custard made with condensed milk and egg yolks)\n", leche);
            printf("3. $%.2lf - Turon (Fried banana spring roll, often with jackfruit)\n", turon);
            printf("4. $%.2lf - Ube Halaya (Sweet purple yam jam)\n", ubeHalaya);
            printf("5. $%.2lf - Puto and Kutsinta (Steamed rice cakes, often served with grated coconut)\n", putoKutsinta);
            printf("------------------------------------------\n\n");
            printf("Enter your dessert order: ");
            scanf("%d", &dessertsChoice);
            getchar();

            dessertprice = dessertsPassValue(dessertsChoice, halohalo, leche, turon, ubeHalaya, putoKutsinta);
            
            sago = Discounted(sago, studentsenior);
            buko = Discounted(buko, studentsenior);
            kalamansi = Discounted(kalamansi, studentsenior);
            cucumber = Discounted(cucumber, studentsenior);
            printf("## DRINKS\n");
            printf("1. $%.2lf - Sago't Gulaman (Sweet drink with tapioca pearls and jelly)\n", sago);
            printf("2. $%.2lf - Buko Juice (Fresh young coconut water)\n", buko);
            printf("3. $%.2lf - Calamansi Juice (Juice from the small Filipino lime)\n", kalamansi);
            printf("4. $%.2lf - Cucumber juice (Sweet and refreshing cucumber drink)", cucumber);
            printf("------------------------------------------\n");
            printf("Enter your drink order: ");
            scanf("%d", &drinkChoice);
            getchar();
            drinkprice = drinkPassValue(drinkChoice, sago, buko, kalamansi, cucumber);

            double total = orderSummary(mainprice, sideprice, soupprice, dessertprice, drinkprice);
            printf("Total: $%.2lf", total);
        }
        else if (choice == 2) {
            printf("Exiting...");
            return 0;
        }
        else {
            printf("Invalid choice!\n");
            return 0;
        }
    }
    else {
        if (isStudent) {
            printf("You got a student discount of 10 percent!\n");
            printf("1. See menu\n");
            printf("2. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            getchar();
            if (choice == 1) {
                printf("10 percent off: \n");
                adobo = Discounted(adobo, student); 
                lechon = Discounted(lechon, student);
                sisig = Discounted(sisig, student);
                kaldereta = Discounted(kaldereta, student);
                bicolExpress = Discounted(bicolExpress, student);
                kinilaw = Discounted(kinilaw, student);
                crispyPata = Discounted(crispyPata, student);
                tapsilog = Discounted(tapsilog, student);

                printf("## MAIN DISHES\n");
                printf("1. $%.2lf - Adobo (The national dish, typically chicken or pork)\n", adobo);
                printf("2. $%.2lf - Lechon (Whole roasted pig with crispy skin)\n", lechon);
                printf("3. $%.2lf - Sisig (Sizzling, chopped pork face and liver)\n", sisig);
                printf("4. $%.2lf - Kaldereta (Beef stew in tomato sauce and liver spread)\n", kaldereta);
                printf("5. $%.2lf - Bicol Express (Pork stew with chilies and coconut milk)\n", bicolExpress);
                printf("6. $%.2lf - Kinilaw (Filipino-style ceviche, fish cured in vinegar)\n", kinilaw);
                printf("7. $%.2lf - Crispy Pata (Deep-fried pork knuckle)\n", crispyPata);
                printf("9. $%.2lf - Tapsilog (Tapa, Sinangag, and Itlog breakfast combo)\n", tapsilog);
                printf("------------------------------------------\n\n");
                printf("Enter your main dish order: ");
                scanf("%d", &mainDishChoice);
                getchar();
                mainprice = mainPassValue(mainDishChoice, adobo, lechon, sisig, kaldereta, bicolExpress, kinilaw, crispyPata, tapsilog);
                lumpiaShanghai = Discounted(lumpiaShanghai, student);
                pancitCanton = Discounted(pancitCanton, student);
                tortangTalong = Discounted(tortangTalong, student);
                pinakbet = Discounted(pinakbet, student);
                chicharon = Discounted(chicharon, student);
                printf("## SIDE DISHES & SNACKS\n");
                printf("1. $%.2lf - Lumpia Shanghai (Small, fried meat spring rolls)\n", lumpiaShanghai);
                printf("2. $%.2lf - Pancit Canton (Stir-fried egg noodles with vegetables and meat)\n", pancitCanton);
                printf("3. $%.2lf - Tortang Talong (Eggplant omelet)\n", tortangTalong);
                printf("4. $%.2lf - Pinakbet (Mixed vegetables steamed in fish sauce/bagoong)\n", pinakbet);
                printf("5. $%.2lf - Chicharon (Crispy fried pork rinds)\n", chicharon);
                printf("------------------------------------------\n\n");
                printf("Enter your side dish order: ");
                scanf("%d", &sideDishChoice);
                getchar();
                sideprice = sidePassValue(sideDishChoice, lumpiaShanghai, pancitCanton, tortangTalong, pinakbet, chicharon);
                sinigang = Discounted(sinigang, student);
                bulalo = Discounted(bulalo, student);
                tinola = Discounted(tinola, student);
                LaPazBatchoy = Discounted(LaPazBatchoy, student);
                printf("## SOUPS\n");
                printf("1. $%.2lf - Sinigang (Sour and savory tamarind broth soup)\n", sinigang);
                printf("2. $%.2lf - Bulalo (Clear soup with beef shanks and bone marrow)\n", bulalo);
                printf("3. $%.2lf - Tinola (Chicken soup seasoned with ginger and fish sauce)\n", tinola);
                printf("4. $%.2lf - La Paz Batchoy (Noodle soup with pork offal, chicharon, and egg)\n", LaPazBatchoy);
                printf("------------------------------------------\n\n");
                printf("Enter your soup order: ");
                scanf("%d", &soupsChoice);
                getchar();
                soupprice = soupPassValue(soupsChoice, sinigang, bulalo, tinola, LaPazBatchoy);

                halohalo = Discounted(halohalo, student);
                leche = Discounted(leche, student);
                turon = Discounted(turon, student);
                ubeHalaya = Discounted(ubeHalaya, student);
                putoKutsinta = Discounted(putoKutsinta, student);
                printf("## DESSERTS\n");
                printf("1. $%.2lf - Halo-Halo (Mixed ice cream, beans, fruits, and leche flan on shaved ice)\n", halohalo);
                printf("2. $%.2lf - Leche Flan (Custard made with condensed milk and egg yolks)\n", leche);
                printf("3. $%.2lf - Turon (Fried banana spring roll, often with jackfruit)\n", turon);
                printf("4. $%.2lf - Ube Halaya (Sweet purple yam jam)\n", ubeHalaya);
                printf("5. $%.2lf - Puto and Kutsinta (Steamed rice cakes, often served with grated coconut)\n", putoKutsinta);
                printf("------------------------------------------\n\n");
                printf("Enter your dessert order: ");
                scanf("%d", &dessertsChoice);
                getchar();
                dessertprice = dessertsPassValue(dessertsChoice, halohalo, leche, turon, ubeHalaya, putoKutsinta);

                sago = Discounted(sago, student);
                buko = Discounted(buko, student);
                kalamansi = Discounted(kalamansi, student);
                cucumber = Discounted(cucumber, student);
                printf("## DRINKS\n");
                printf("1. $%.2lf - Sago't Gulaman (Sweet drink with tapioca pearls and jelly)\n", sago);
                printf("2. $%.2lf - Buko Juice (Fresh young coconut water)\n", buko);
                printf("3. $%.2lf - Calamansi Juice (Juice from the small Filipino lime)\n", kalamansi);
                printf("4. $%.2lf - Cucumber juice (Sweet and refreshing cucumber drink)", cucumber);
                printf("------------------------------------------\n");
                printf("Enter your drink order: ");
                scanf("%d", &drinkChoice);
                getchar();
                drinkprice = drinkPassValue(drinkChoice, sago, buko, kalamansi, cucumber);

                double total = orderSummary(mainprice, sideprice, soupprice, dessertprice, drinkprice);
                printf("Total: $%.2lf", total);
        }
    }
        if (isSenior) {
            printf("You got a senior discount of 20 percent!\n");
            printf("1. See menu\n");
            printf("2. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            getchar();
            if (choice == 1) {
                printf("20 percent off: \n");
                adobo = Discounted(adobo, senior); 
                lechon = Discounted(lechon, senior);
                sisig = Discounted(sisig, senior);
                kaldereta = Discounted(kaldereta, senior);
                bicolExpress = Discounted(bicolExpress, senior);
                kinilaw = Discounted(kinilaw, senior);
                crispyPata = Discounted(crispyPata, senior);
                tapsilog = Discounted(tapsilog, senior);

                printf("## MAIN DISHES\n");
                printf("1. $%.2lf - Adobo (The national dish, typically chicken or pork)\n", adobo);
                printf("2. $%.2lf - Lechon (Whole roasted pig with crispy skin)\n", lechon);
                printf("3. $%.2lf - Sisig (Sizzling, chopped pork face and liver)\n", sisig);
                printf("4. $%.2lf - Kaldereta (Beef stew in tomato sauce and liver spread)\n", kaldereta);
                printf("5. $%.2lf - Bicol Express (Pork stew with chilies and coconut milk)\n", bicolExpress);
                printf("6. $%.2lf - Kinilaw (Filipino-style ceviche, fish cured in vinegar)\n", kinilaw);
                printf("7. $%.2lf - Crispy Pata (Deep-fried pork knuckle)\n", crispyPata);
                printf("9. $%.2lf - Tapsilog (Tapa, Sinangag, and Itlog breakfast combo)\n", tapsilog);
                printf("------------------------------------------\n\n");
                printf("Enter your main dish order: ");
                scanf("%d", &mainDishChoice);
                getchar();
                mainprice = mainPassValue(mainDishChoice, adobo, lechon, sisig, kaldereta, bicolExpress, kinilaw, crispyPata, tapsilog);
                lumpiaShanghai = Discounted(lumpiaShanghai, senior);
                pancitCanton = Discounted(pancitCanton, senior);
                tortangTalong = Discounted(tortangTalong, senior);
                pinakbet = Discounted(pinakbet, senior);
                chicharon = Discounted(chicharon, senior);
                printf("## SIDE DISHES & SNACKS\n");
                printf("1. $%.2lf - Lumpia Shanghai (Small, fried meat spring rolls)\n", lumpiaShanghai);
                printf("2. $%.2lf - Pancit Canton (Stir-fried egg noodles with vegetables and meat)\n", pancitCanton);
                printf("3. $%.2lf - Tortang Talong (Eggplant omelet)\n", tortangTalong);
                printf("4. $%.2lf - Pinakbet (Mixed vegetables steamed in fish sauce/bagoong)\n", pinakbet);
                printf("5. $%.2lf - Chicharon (Crispy fried pork rinds)\n", chicharon);
                printf("------------------------------------------\n\n");
                printf("Enter your side dish order: ");
                scanf("%d", &sideDishChoice);
                getchar();
                sideprice = sidePassValue(sideDishChoice, lumpiaShanghai, pancitCanton, tortangTalong, pinakbet, chicharon);
                sinigang = Discounted(sinigang, senior);
                bulalo = Discounted(bulalo, senior);
                tinola = Discounted(tinola, senior);
                LaPazBatchoy = Discounted(LaPazBatchoy, senior);
                printf("## SOUPS\n");
                printf("1. $%.2lf - Sinigang (Sour and savory tamarind broth soup)\n", sinigang);
                printf("2. $%.2lf - Bulalo (Clear soup with beef shanks and bone marrow)\n", bulalo);
                printf("3. $%.2lf - Tinola (Chicken soup seasoned with ginger and fish sauce)\n", tinola);
                printf("4. $%.2lf - La Paz Batchoy (Noodle soup with pork offal, chicharon, and egg)\n", LaPazBatchoy);
                printf("------------------------------------------\n\n");
                printf("Enter your soup order: ");
                scanf("%d", &soupsChoice);
                getchar();
                soupprice = soupPassValue(soupsChoice, sinigang, bulalo, tinola, LaPazBatchoy);
                halohalo = Discounted(halohalo, senior);
                leche = Discounted(leche, senior);
                turon = Discounted(turon, senior);
                ubeHalaya = Discounted(ubeHalaya, senior);
                putoKutsinta = Discounted(putoKutsinta, senior);
                printf("## DESSERTS\n");
                printf("1. $%.2lf - Halo-Halo (Mixed ice cream, beans, fruits, and leche flan on shaved ice)\n", halohalo);
                printf("2. $%.2lf - Leche Flan (Custard made with condensed milk and egg yolks)\n", leche);
                printf("3. $%.2lf - Turon (Fried banana spring roll, often with jackfruit)\n", turon);
                printf("4. $%.2lf - Ube Halaya (Sweet purple yam jam)\n", ubeHalaya);
                printf("5. $%.2lf - Puto and Kutsinta (Steamed rice cakes, often served with grated coconut)\n", putoKutsinta);
                printf("------------------------------------------\n\n");
                printf("Enter your dessert order: ");
                scanf("%d", &dessertsChoice);
                getchar();
                dessertprice = dessertsPassValue(dessertsChoice, halohalo, leche, turon, ubeHalaya, putoKutsinta);
                sago = Discounted(sago, senior);
                buko = Discounted(buko, senior);
                kalamansi = Discounted(kalamansi, senior);
                cucumber = Discounted(cucumber, senior);
                printf("## DRINKS\n");
                printf("1. $%.2lf - Sago't Gulaman (Sweet drink with tapioca pearls and jelly)\n", sago);
                printf("2. $%.2lf - Buko Juice (Fresh young coconut water)\n", buko);
                printf("3. $%.2lf - Calamansi Juice (Juice from the small Filipino lime)\n", kalamansi);
                printf("4. $%.2lf - Cucumber juice (Sweet and refreshing cucumber drink)", cucumber);
                printf("------------------------------------------\n");
                printf("Enter your drink order: ");
                scanf("%d", &drinkChoice);
                getchar();
                drinkprice = drinkPassValue(drinkChoice, sago, buko, kalamansi, cucumber);

                double total = orderSummary(mainprice, sideprice, soupprice, dessertprice, drinkprice);
                printf("Total: $%.2lf", total);
            }
        }
    }
    return 0;
}
