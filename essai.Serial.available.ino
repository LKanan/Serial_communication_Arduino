char val;
void conv(char g){//fonction pour la convertion des lettres: minuscule en majiscule ou l'inverse   
if(g>='A'&&g<='Z'){//convertion maj en min
                   g=g-'A';
                   g=g+'a';
                   Serial.println(g);
}
else if(g>='a'&&g<='z'){//convertion min en maj
                   g=g+'A';
                   g=g-'a';
                   Serial.println(g);
}
else{Serial.write(g);//on envoie le caractere entré si ce n'est pas une lettre 
}}
void setup(){Serial.begin(9600);
}
void loop(){
int recept=0;
recept=Serial.available();//variable pour la verification de la présence d'une valeur à entrer
while(Serial.available()>0){
                   val=Serial.read();//variable qui prend le caractère écrit
                   conv(val);
}}
