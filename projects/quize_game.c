//question quize game
#include<stdio.h>
char answer;
int score = 0;
int main(){
    printf("welcome to quize game\n");

    //question 1;
    printf("\nQ1. what is the GDP of india in 2025?\n");
    printf("a) 3.5 trillion dollars\n");
    printf("b) 4.1 trillion dollars\n");
    printf("c) 5.1 trillion dollars\n");
    printf("d) 2.9 trillion dollars\n");
    printf("enter your answer: ");
    scanf("%c", &answer);

    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    

    //question 2
    printf("\nQ2. who is the current prime minister of india?\n");
    printf("a) MR.Narendra Modi\n");
    printf("b) mr.yogi adityanath\n");
    printf("c)mr. nitish kumar\n");
    printf("d)mr. amit shah\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 3
    printf("\nQ3. name a weapon jisne pakistan ki gand fad di thi operation sindoor me?\n");
    printf("a) bramhmos missile\n");
    printf("b) akash air defence system\n");
    printf("c) k4 rocket\n");
    printf("d) s-400 defence system\n");
    printf(" e)all of these: ");
    scanf(" %c", &answer);

    if(answer == 'e' || answer == 'E'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 4
    printf("\nQ4. which country has given number 0?\n");
    printf("a) india\n");
    printf("b) greece\n");
    printf("c) egypt\n");
    printf("d) china\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }

     //question 5
    printf("\nQ5. demons slayer me sabka baap kaun tha?\n");
    printf("a) zenitsu\n");
    printf("b) inosuke\n");
    printf("c) nezuko\n");
    printf("d) tanjiro\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 6;
    printf("\nQ6. kya app lete lete mahine ke lakho kaaman chahte hai?\n");
    printf("a) haan\n");
    printf("b) nahi\n");
    printf("c) depond on the situation \n");
    printf("d) scheme kya hai\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 7;
    printf("\nQ7. what is the oil price in india now ?\n");
    printf("a) 100 rs per liter\n");
    printf("b) 97 rs per liter\n");
    printf("c) 95 rs per liter\n");
    printf("d) 105 rs per liter\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 8;

    printf("\nQ8. whiuch one is your fav character in better call soul?\n");
    printf("a) saul goodman\n");
    printf("b) gus fring\n");
    printf("c) mike ehrmantraut\n");
    printf("d) lalo salamanca\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'c' || answer == 'C'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 9
    printf("\nQ9.26 me to duniya hi khatam hai ye line kis country ke liye hai?\n");
    printf("a) bangladesh\n");
    printf("b) pakistan\n");
    printf("c) china\n");
    printf("d) america\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 10
    printf("\nQ10. how much rupees in 1 billion?\n");
    printf("a) 9000 crore\n");
    printf("b) 9100 crore\n");
    printf("c) 8900 crore\n");
    printf("d) 100 crore\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //qustion 11
    printf("\nQ11. which one is your fav web series ?\n");
    printf("a) the walking dead\n");
    printf("b) the 100 \n");
    printf("c) the wire\n");
    printf("d) 3 body problem\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'd' || answer == 'D'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 12
    printf("\nQ12. which one is your fav movie ?\n");
    printf("a) the martion\n");
    printf("b) interstaller\n");
    printf("c) inception\n");
    printf("d) the dark knight\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 13
    printf("Q13. which one is your fav anime ?\n");
    printf("a) solo leveling\n");
    printf("b) naruto\n");
    printf("c) demons slayer\n");
    printf("d) jujustu kaisen\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'c' || answer == 'C'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 14
    printf("\nQ14. according to you which country lead the world in next 50 years ?\n");
    printf("a) usa\n");
    printf("b) china\n");
    printf("c) india\n");
    printf("d) russia\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'c' || answer == 'C'){
        printf("congratulations! your answer is correct\n");
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 15
    printf("\nQ15.which country has potential has to end the war between usa and iran ?\n");
    printf("a) india\n");
    printf("b) bharat\n");
    printf("c) hindustan\n");
    printf("d) pakistan ka baap\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'd' || answer == 'D'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //quwstion 16
    printf("\nQ16.which country is enter the war and end the war in just 1 day ?\n");
    printf("a) india\n");
    printf("b) north korea\n");
    printf("c) russia\n");
    printf("d) china\n");

    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 17
    printf("\nQ17.one word for all countrys in the world ?\n");
    printf("a) india = sabke sath accha rista hai\n");
    printf("b) china = kuch bhi kha leta hai\n");
    printf("c) russia = sabko akele nipta deta hai\n");
    printf("d) north korea = jo mar pit ke liye ready rahta hai vo bhi nuclear le ke \n");
    printf("e) all of the above\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'e' || answer == 'E'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
     //question 18
    printf("\nQ18.which things present inside protons ?\n");
    printf("a) quarks\n");
    printf("b) gluons\n");
    printf("c) sendark\n");
    printf("d) metapit\n");
  
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
//question 19
    printf("\nQ19. warking of large hydeon collider ?\n");
    printf("a) to acceseleate the particles\n");
    printf("b) to break the particles\n");
    printf("c) to create new particles\n");
    printf("d) all of the above\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'd' || answer == 'D'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 20
    printf("\nQ20. what is the capital of russia ?\n");
    printf("a) moscow\n");
    printf("b) st petersburg\n");

    printf("c) kazan\n");
    printf("d) sochi\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 21
    printf("\nQ21. which one is your fav sport ?\n");
    printf("a) cricket\n");
    printf("b) football\n");
    printf("c) basketball\n");
    printf("d) tennis\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }

    //question 22
    printf("\nQ22. what is the capital of france ?\n");
    printf("a) london\n");
    printf("b) paris\n");
    printf("c) berlin\n");
    printf("d)rome\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 23
    printf("\nQ23. which one is your fav programming language ?\n");
    printf("a) python\n");
    printf("b) java\n");
    printf("c) c++\n");
    printf("d) javascript\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 24
    printf("\nQ24. which one is your fav movie genre ?\n");
    printf("a) action\n");
    printf("b) comedy\n");
    printf("c) horror\n");
    printf("d) science fiction\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'd' || answer == 'D'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 25
    printf("\nQ25. which one is your fav music genre ?\n");
    printf("a) religious\n");
    printf("b) old\n");
    printf("c) rap\n");
    printf("d) marathi\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'd' || answer == 'D'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 26
    printf("\nQ26. what is your opinion about better call saul web series ?\n");
    printf("a) great\n");
    printf("b) good\n");
    printf("c) average\n");
    printf("d) bad\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 27
    printf("\nQ27. best dilogues in breaking bad web sries ?\n");
    printf("a) i am the danger\n");
    printf("b) say my name\n");
    printf("c) i am the one who knocks\n");
    printf("d) all of the above\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'b' || answer == 'B'){
        printf("congratulations! your answer is correct\n");        score++;    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 28
    printf("\nQ28. what is the name of actor who played role of thomas shelby in peaky blinders web series ?\n");
    printf("a) cillian murphy\n");
    printf("b) adrian brody\n");
    printf("c) johnny depp\n");
    printf("d) brad pitt\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);
    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
    } else {
        printf("sorry, your answer is incorrect\n");
    }

    //question 29
    printf("\nQ29. which one is your fav web series ?\n");

    printf("a) breaking bad\n");
    printf("b) peaky blinders\n");

    printf("c) the wire\n");
    printf("d) the 100\n");
    printf("enter your answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A'){
        printf("congratulations! your answer is correct\n");
        score++;
    } else {
        printf("sorry, your answer is incorrect\n");
    }
    //question 30
    
    

    // Display Results
    float percentage = (score / 29.0) * 100;
    printf("\n=============================\n");
    printf("         QUIZ RESULTS        \n");
    printf("=============================\n");
    printf("Total Questions: 29\n");
    printf("Correct Answers: %d\n", score);
    printf("Your Score: %.2f%%\n", percentage);
    printf("=============================\n");
    
    return 0;
}