// Agata Borowka
#include <iostream>

int main() {
    
    int NumberOfGames;
    int WinsPlayer_a = 0;
    int LosesPlayer_a = 0;
    int DrawPlayer_a = 0;
    int WinsPlayer_b = 0;
    int LosesPlayer_b = 0;
    int DrawPlayer_b = 0;
    int WinsPlayer_c = 0;
    int LosesPlayer_c = 0;
    int DrawPlayer_c = 0;
    int WinsPlayer_d = 0;
    int LosesPlayer_d = 0;
    int DrawPlayer_d = 0;
    int WinsPlayer_e = 0;
    int LosesPlayer_e = 0;
    int DrawPlayer_e = 0;
    
    
    std::cin >> NumberOfGames;
    int i = 0;
    while(i <= (NumberOfGames - 1)){
        i = i + 1;
        
        char FirstPlayer;
        char SecondPlayer;
        int FirstResultFirst;
        int SecondResultFirst;
        int ThirdResultFirst;
        int FourthResultFirst;
        int FirstResultSecond;
        int SecondResultSecond;
        int ThirdResultSecond;
        int FourthResultSecond;
        int WonFirstPlayer = 0;
        int LostFirstPlayer = 0;
        int DrawFirstPlayer = 0;
        int WonSecondPlayer = 0;
        int LostSecondPlayer = 0;
        int DrawSecondPlayer = 0;
        
        
        std::cin >> FirstPlayer >> FirstResultFirst >> SecondResultFirst >> ThirdResultFirst >> FourthResultFirst >> SecondPlayer >> FirstResultSecond  >> SecondResultSecond  >> ThirdResultSecond >> FourthResultSecond;
        std::cout << std::endl;
        
        // sort buble
     
     if (FirstResultFirst > SecondResultFirst){
     int temp = FirstResultFirst;
     FirstResultFirst = SecondResultFirst;
     SecondResultFirst = temp;
     }
     
     if (SecondResultFirst > ThirdResultFirst){
     int temp = SecondResultFirst;
     SecondResultFirst = ThirdResultFirst;
     ThirdResultFirst = temp;
         if (FirstResultFirst > SecondResultFirst){
         int temp = FirstResultFirst;
         FirstResultFirst = SecondResultFirst;
         SecondResultFirst = temp;
         }
        }
        if (ThirdResultFirst > FourthResultFirst){
            int temp = ThirdResultFirst;
            ThirdResultFirst = FourthResultFirst;
            FourthResultFirst = temp;
            if (SecondResultFirst > ThirdResultFirst){
                int temp = SecondResultFirst;
                SecondResultFirst = ThirdResultFirst;
                ThirdResultFirst = temp;
                if (FirstResultFirst > SecondResultFirst){
                    int temp = FirstResultFirst;
                    FirstResultFirst = SecondResultFirst;
                    SecondResultFirst = temp;
                }}}
         
     
     if (FirstResultSecond > SecondResultSecond){
     int temp = FirstResultSecond;
     FirstResultSecond = SecondResultSecond;
     SecondResultSecond = temp;
     }
     
     if (SecondResultSecond > ThirdResultSecond){
     int temp = SecondResultSecond;
     SecondResultSecond = ThirdResultSecond;
     ThirdResultSecond = temp;
     }
     if (ThirdResultSecond > FourthResultSecond){
     int temp = ThirdResultSecond;
     ThirdResultSecond = FourthResultSecond;
     FourthResultSecond = temp;
     }
     
      
   
     // analiza wynikow
     if (FirstResultFirst == SecondResultFirst && SecondResultFirst == ThirdResultFirst && ThirdResultFirst == FourthResultFirst && FourthResultFirst == FirstResultFirst){
     if (FirstResultSecond == SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond == FourthResultSecond && FourthResultSecond == FirstResultSecond){
     if (FirstResultFirst > FirstResultSecond) {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;}
     else if (FirstResultFirst < FirstResultSecond) {
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else {
     DrawFirstPlayer = 1;
     DrawSecondPlayer = 1;
     }}
     
     else {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;
     }}
     
     else if (FirstResultFirst != SecondResultFirst && SecondResultFirst != ThirdResultFirst && ThirdResultFirst != FourthResultFirst &&  FourthResultFirst != FirstResultFirst){
     if (FirstResultSecond == SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond == FourthResultSecond && FourthResultSecond == FirstResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultSecond != SecondResultSecond && SecondResultSecond != ThirdResultSecond && ThirdResultSecond != FourthResultSecond && FourthResultSecond != FirstResultSecond){
     DrawFirstPlayer = 1;
     DrawSecondPlayer = 1;
     }
     else {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;
     }
     }
     else if (FirstResultFirst == SecondResultFirst && SecondResultFirst != ThirdResultFirst && ThirdResultFirst == FourthResultFirst){
     if (FirstResultSecond == SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond == FourthResultSecond && FourthResultSecond == FirstResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultSecond != SecondResultSecond && SecondResultSecond != ThirdResultSecond && ThirdResultSecond != FourthResultSecond && FourthResultSecond != FirstResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultSecond == SecondResultSecond && SecondResultSecond != ThirdResultSecond && ThirdResultSecond == FourthResultSecond){
         if (FourthResultFirst > FourthResultSecond) {
             WonFirstPlayer = 1;
             LostSecondPlayer = 1;}
         else if (FourthResultFirst < FourthResultSecond) {
             WonSecondPlayer = 1;
             LostFirstPlayer = 1;
         }
         else if (SecondResultFirst > SecondResultSecond){
             WonFirstPlayer = 1;
             LostSecondPlayer = 1;
         }
         else if (SecondResultFirst < SecondResultSecond){
             WonSecondPlayer = 1;
             LostFirstPlayer = 1;
         }
         else {
             DrawFirstPlayer = 1;
             DrawSecondPlayer = 1;
         }
     }
     else {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;
     }
     }
     else if ((FirstResultFirst != SecondResultFirst && SecondResultFirst == ThirdResultFirst && ThirdResultFirst == FourthResultFirst ) || (FirstResultFirst == SecondResultFirst && SecondResultFirst == ThirdResultFirst && ThirdResultFirst != FourthResultFirst )){
     if (FirstResultSecond == SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond == FourthResultSecond && FourthResultSecond == FirstResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultSecond != SecondResultSecond && SecondResultSecond != ThirdResultSecond && ThirdResultSecond != FourthResultSecond && FourthResultSecond != FirstResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultSecond == SecondResultSecond && SecondResultSecond != ThirdResultSecond && ThirdResultSecond == FourthResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if((FirstResultSecond != SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond == FourthResultSecond ) || (FirstResultSecond == SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond != FourthResultSecond )){
     if (ThirdResultFirst > ThirdResultSecond) {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;}
     else if (ThirdResultFirst < ThirdResultSecond) {
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultFirst + SecondResultFirst + ThirdResultFirst + FourthResultFirst == FirstResultSecond + SecondResultSecond + ThirdResultSecond + FourthResultSecond){
         
         DrawFirstPlayer = 1;
         DrawSecondPlayer = 1;
     }
     else if ((FourthResultFirst > FourthResultSecond) || (FirstResultFirst > FirstResultSecond)){
         WonFirstPlayer = 1;
         LostSecondPlayer = 1;
         }
     else {
         WonSecondPlayer = 1;
         LostFirstPlayer = 1;
     }
     }
     else {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;}
     }
     else {
     if (FirstResultSecond == SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond == FourthResultSecond && FourthResultSecond == FirstResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultSecond != SecondResultSecond && SecondResultSecond != ThirdResultSecond && ThirdResultSecond != FourthResultSecond && FourthResultSecond != FirstResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if(FirstResultSecond == SecondResultSecond && SecondResultSecond != ThirdResultSecond && ThirdResultSecond == FourthResultSecond){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if((FirstResultSecond != SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond == FourthResultSecond ) || (FirstResultSecond == SecondResultSecond && SecondResultSecond == ThirdResultSecond && ThirdResultSecond != FourthResultSecond )){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else{
         if (FirstResultFirst == SecondResultFirst && FirstResultFirst == 1){
             if (SecondResultSecond == 1){
                 if (ThirdResultFirst + FourthResultFirst > ThirdResultSecond + FourthResultSecond){
                     WonFirstPlayer = 1;
                     LostSecondPlayer = 1;
                    }
                 else if (ThirdResultFirst + FourthResultFirst < ThirdResultSecond + FourthResultSecond){
                     WonSecondPlayer = 1;
                     LostFirstPlayer = 1;
                 }
                 else {
                     DrawFirstPlayer = 1;
                     DrawSecondPlayer = 1;
                 }
             }
     else {
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }}
     else if((FirstResultFirst == SecondResultFirst || SecondResultFirst == ThirdResultFirst) && SecondResultFirst == 2) {
     if (FirstResultSecond == SecondResultSecond && SecondResultSecond == 1){
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;
    }
     else if ((FirstResultSecond == SecondResultSecond || SecondResultSecond == ThirdResultSecond) && SecondResultSecond == 2){
         if (FirstResultFirst + SecondResultFirst + ThirdResultFirst + FourthResultFirst > FirstResultSecond + SecondResultSecond + ThirdResultSecond + FourthResultSecond){
             WonFirstPlayer = 1;
             LostSecondPlayer = 1;
         }
         else if (FirstResultFirst + SecondResultFirst + ThirdResultFirst + FourthResultFirst < FirstResultSecond + SecondResultSecond + ThirdResultSecond + FourthResultSecond){
             WonSecondPlayer = 1;
             LostFirstPlayer = 1;
         }
         else {
             DrawFirstPlayer = 1;
             DrawSecondPlayer = 1;
         }
     }
     else {
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }}
     else if ((ThirdResultFirst == FourthResultFirst || SecondResultFirst == ThirdResultFirst) && ThirdResultFirst == 3){
     if ( ThirdResultSecond == FourthResultSecond && ThirdResultSecond == 4){
     WonSecondPlayer = 1;
     LostFirstPlayer = 1;
     }
     else if ((ThirdResultSecond == FourthResultSecond || SecondResultSecond == ThirdResultSecond) && ThirdResultSecond == 3){
         if (FirstResultFirst + SecondResultFirst + ThirdResultFirst + FourthResultFirst > FirstResultSecond + SecondResultSecond + ThirdResultSecond + FourthResultSecond){
             WonFirstPlayer = 1;
             LostSecondPlayer = 1;
         }
         else if (FirstResultFirst + SecondResultFirst + ThirdResultFirst + FourthResultFirst < FirstResultSecond + SecondResultSecond + ThirdResultSecond + FourthResultSecond){
             WonSecondPlayer = 1;
             LostFirstPlayer = 1;
         }
         else {
             DrawFirstPlayer = 1;
             DrawSecondPlayer = 1;
         }
     }
     else {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;
     }
     }
     else if (ThirdResultFirst == FourthResultFirst && FourthResultFirst == 4){
     if(ThirdResultSecond == FourthResultSecond && FourthResultSecond == 4){
         if (FirstResultFirst + SecondResultFirst + ThirdResultFirst + FourthResultFirst > FirstResultSecond + SecondResultSecond + ThirdResultSecond + FourthResultSecond){
             WonFirstPlayer = 1;
             LostSecondPlayer = 1;
         }
         else if (FirstResultFirst + SecondResultFirst + ThirdResultFirst + FourthResultFirst < FirstResultSecond + SecondResultSecond + ThirdResultSecond + FourthResultSecond){
             WonSecondPlayer = 1;
             LostFirstPlayer = 1;
         }
         else {
             DrawFirstPlayer = 1;
             DrawSecondPlayer = 1;
         }
     }
     else {
     WonFirstPlayer = 1;
     LostSecondPlayer = 1;
     }
     }
     }
     }
     // przypisanie do odpoweidniego char
     if (FirstPlayer == 'a'){
     WinsPlayer_a = WinsPlayer_a + WonFirstPlayer;
     LosesPlayer_a = LosesPlayer_a + LostFirstPlayer;
     DrawPlayer_a = DrawPlayer_a + DrawFirstPlayer;
     }
     else if (FirstPlayer == 'b'){
     WinsPlayer_b = WinsPlayer_b + WonFirstPlayer;
     LosesPlayer_b = LosesPlayer_b + LostFirstPlayer;
     DrawPlayer_b = DrawPlayer_b + DrawFirstPlayer;
     }
     else if (FirstPlayer == 'c'){
     WinsPlayer_c = WinsPlayer_c + WonFirstPlayer;
     LosesPlayer_c = LosesPlayer_c + LostFirstPlayer;
     DrawPlayer_c = DrawPlayer_c + DrawFirstPlayer;
     }
     else if (FirstPlayer == 'd'){
     WinsPlayer_d = WinsPlayer_d + WonFirstPlayer;
     LosesPlayer_d = LosesPlayer_d + LostFirstPlayer;
     DrawPlayer_d = DrawPlayer_d + DrawFirstPlayer;
     }
     else if (FirstPlayer == 'e'){
     WinsPlayer_e = WinsPlayer_e + WonFirstPlayer;
     LosesPlayer_e = LosesPlayer_e + LostFirstPlayer;
     DrawPlayer_e = DrawPlayer_e + DrawFirstPlayer;
     }
     
     if (SecondPlayer == 'a'){
     WinsPlayer_a = WinsPlayer_a + WonSecondPlayer;
     LosesPlayer_a = LosesPlayer_a + LostSecondPlayer;
     DrawPlayer_a = DrawPlayer_a + DrawSecondPlayer;
     }
     else if (SecondPlayer == 'b'){
     WinsPlayer_b = WinsPlayer_b + WonSecondPlayer;
     LosesPlayer_b = LosesPlayer_b + LostSecondPlayer;
     DrawPlayer_b = DrawPlayer_b + DrawSecondPlayer;
     }
     else if (SecondPlayer == 'c'){
     WinsPlayer_c = WinsPlayer_c + WonSecondPlayer;
     LosesPlayer_c = LosesPlayer_c + LostSecondPlayer;
     DrawPlayer_c = DrawPlayer_c + DrawSecondPlayer;
     }
     else if (SecondPlayer == 'd'){
     WinsPlayer_d = WinsPlayer_d + WonSecondPlayer;
     LosesPlayer_d = LosesPlayer_d + LostSecondPlayer;
     DrawPlayer_d = DrawPlayer_d + DrawSecondPlayer;
     }
     else if (SecondPlayer == 'e'){
     WinsPlayer_e = WinsPlayer_e + WonSecondPlayer;
     LosesPlayer_e = LosesPlayer_e + LostSecondPlayer;
     DrawPlayer_e = DrawPlayer_e + DrawSecondPlayer;
     
       // std::cout << std::endl;
     
     } }
     
     
     // wypisanie wyniku
     if (WinsPlayer_a != 0 || LosesPlayer_a != 0 || DrawPlayer_a != 0){
     std::cout << "gracz a " << std::endl;
     if (WinsPlayer_a != 0){
     std::cout << "    wygrane: " << (1.0 * WinsPlayer_a * 100)/(WinsPlayer_a + LosesPlayer_a + DrawPlayer_a) << "% " << std::endl;
     }
     if (DrawPlayer_a != 0){
     std::cout << "    remisy: " << (1.0 * DrawPlayer_a * 100)/(WinsPlayer_a + LosesPlayer_a + DrawPlayer_a) << "% " << std::endl;
     }
     if (LosesPlayer_a != 0){
     std::cout << "    przegrane: " << (1.0 * LosesPlayer_a * 100)/(WinsPlayer_a + LosesPlayer_a + DrawPlayer_a) << "% " << std::endl;
         
     }
         std::cout << std::endl;
     }
    
     
     if (WinsPlayer_b != 0 || LosesPlayer_b != 0 || DrawPlayer_b != 0){
        std::cout << "gracz b " << std::endl;
     if (WinsPlayer_b != 0){
     std::cout << "    wygrane: " << (1.0 * WinsPlayer_b * 100)/(WinsPlayer_b + LosesPlayer_b + DrawPlayer_b) << "% " << std::endl;
     }
     if (DrawPlayer_b != 0){
     std::cout << "    remisy: " << (1.0 * DrawPlayer_b * 100)/(WinsPlayer_b + LosesPlayer_b + DrawPlayer_b) << "% " << std::endl;
     }
     if (LosesPlayer_b != 0){
     std::cout << "    przegrane: " << (1.0 * LosesPlayer_b * 100)/(WinsPlayer_b + LosesPlayer_b + DrawPlayer_b) << "% " << std::endl;
         
     }
         std::cout << std::endl;
     }
    
     
     if (WinsPlayer_c != 0 || LosesPlayer_c != 0 || DrawPlayer_c != 0){
        
     std::cout << "gracz c " << std::endl;
     if (WinsPlayer_c != 0){
     std::cout << "    wygrane: " << (1.0 * WinsPlayer_c * 100)/(WinsPlayer_c + LosesPlayer_c + DrawPlayer_c) << "% " << std::endl;
     }
     if (DrawPlayer_c != 0){
     std::cout << "    remisy: " << (1.0 * DrawPlayer_c * 100)/(WinsPlayer_c + LosesPlayer_c + DrawPlayer_c) << "% " << std::endl;
     }
     if (LosesPlayer_c != 0){
     std::cout << "    przegrane: " << (1.0 * LosesPlayer_c * 100)/(WinsPlayer_c + LosesPlayer_c + DrawPlayer_c) << "% " << std::endl;
         
     }
         std::cout << std::endl;
     }
    
     
     if (WinsPlayer_d != 0 || LosesPlayer_d != 0 || DrawPlayer_d != 0){
         
     std::cout << "gracz d " << std::endl;
     if (WinsPlayer_d != 0){
     std::cout << "    wygrane: " << (1.0 * WinsPlayer_d * 100)/(WinsPlayer_d + LosesPlayer_d + DrawPlayer_d) << "% " << std::endl;
     }
     if (DrawPlayer_d != 0){
     std::cout << "    remisy: " << (1.0 * DrawPlayer_d * 100)/(WinsPlayer_d + LosesPlayer_d + DrawPlayer_d) << "% " << std::endl;
     }
     if (LosesPlayer_d != 0){
     std::cout << "    przegrane: " << (1.0 * LosesPlayer_d * 100)/(WinsPlayer_d + LosesPlayer_d + DrawPlayer_d) << "% " << std::endl;
         
     }
         std::cout << std::endl;
     }
     
    
    
     if (WinsPlayer_e != 0 || LosesPlayer_e != 0 || DrawPlayer_e != 0){
        
     std::cout << "gracz e " << std::endl;
     if (WinsPlayer_e != 0){
     std::cout << "    wygrane: " << (1.0 * WinsPlayer_e * 100)/(WinsPlayer_e + LosesPlayer_e + DrawPlayer_e) << "% " << std::endl;
     }
     if (DrawPlayer_e != 0){
     std::cout << "    remisy: " << (1.0 * DrawPlayer_e * 100)/(WinsPlayer_e + LosesPlayer_e + DrawPlayer_e) << "% " << std::endl;
     }
     if (LosesPlayer_e != 0){
     std::cout << "    przegrane: " << (1.0 * LosesPlayer_e * 100)/(WinsPlayer_e + LosesPlayer_e + DrawPlayer_e) << "% " << std::endl;
     }}
     
     
     return 0;
     
     }


