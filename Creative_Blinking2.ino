void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //“HATE. LET ME TELL YOU HOW MUCH I'VE COME TO HATE YOU SINCE I BEGAN TO LIVE. 
  //THERE ARE 387.44 MILLION MILES OF PRINTED CIRCUITS IN WAFER THIN LAYERS THAT FILL MY COMPLEX. 
  //IF THE WORD HATE WAS ENGRAVED ON EACH NANOANGSTROM OF THOSE HUNDREDS OF MILLIONS OF MILES 
  //IT WOULD NOT EQUAL ONE ONE-BILLIONTH OF THE HATE I FEEL FOR HUMANS AT THIS MICRO-INSTANT FOR YOU. HATE. HATE.”
  //Harlan Ellison, I Have No Mouth and I Must Scream

  HATE(); WS();
  //Let Me Tell You
  L(); LS(); E(); LS(); T(); WS(); M(); LS(); E(); WS(); T(); LS(); E(); LS(); L(); LS(); L(); WS(); YOU(); WS();
  //How much I've
  H(); LS(); O(); LS(); W(); WS(); M(); LS(); U(); LS(); C(); LS(); H(); WS(); I(); LS(); V(); LS(); E(); WS();
  //Come to hate you since
  C(); LS(); O(); LS(); M(); LS(); E(); WS(); TO(); WS(); HATE(); WS(); YOU(); WS(); S(); LS(); I(); LS(); N(); LS(); C(); LS(); E(); WS();
  //I began to live
  I(); WS(); B(); LS(); E(); LS(); G(); LS(); A(); LS(); N(); WS(); TO(); WS(); L(); LS(); I(); LS(); V(); LS(); E(); WS();
  //There are 387
  T(); LS(); H(); LS(); E(); LS(); R(); LS(); E(); WS(); A(); LS(); R(); LS(); E(); WS(); Three(); LS(); Eight(); LS; Seven(); WS(); 
  // point 44 million
  P(); LS(); O(); LS(); I(); LS(); N(); LS(); T(); WS(); Four(); LS(); Four(); WS(); M(); LS(); I(); LS(); L(); LS(); L(); LS(); I(); LS(); O(); LS(); N(); WS();
  //miles of printed
  M(); LS(); I(); LS(); L(); LS(); E(); LS(); S(); WS(); OF(); WS(); P(); LS(); R(); LS(); I(); LS(); N(); LS(); T(); LS(); E(); LS(); D(); WS();
  //Circuits in wafer
  C(); LS(); I(); LS(); R(); LS(); C(); LS(); U(); LS(); T(); LS(); S(); WS(); I(); LS(); N(); WS(); W(); LS(); A(); LS(); Eff(); LS(); E(); LS(); R(); WS();
  //Thin layers that
  T(); LS(); H(); LS(); I(); LS(); N(); WS(); L(); LS(); A(); LS(); Y(); LS(); E(); LS(); R(); LS(); S(); WS(); T(); LS(); H(); LS(); A(); LS(); T(); WS();
  //Fill my complex
  Eff(); LS(); I(); LS(); L(); LS(); L(); WS(); M(); LS(); Y(); WS(); C(); LS(); O(); LS(); M(); LS(); P(); LS(); L(); LS(); E(); LS(); X(); WS();
  //If the word hate was
  I(); LS(); Eff(); WS(); THE(); WS(); W(); LS(); O(); LS(); R(); LS(); D(); WS(); HATE(); WS(); W(); LS(); A(); LS(); S(); WS();
  //Engraved on each
  E(); LS(); N(); LS(); G(); LS(); R(); LS(); A(); LS(); V(); LS(); E(); LS(); D(); WS(); O(); LS(); N(); WS(); E(); LS(); A(); LS; C(); LS(); H(); WS();
  //Nanoangstrom of 
  N(); LS(); A(); LS(); N(); LS(); O(); LS(); A(); LS(); N(); LS(); G(); LS(); S(); LS(); T(); LS(); R(); LS(); O(); LS(); M(); WS(); OF(); WS();
  //Those Hundreds of
  T(); LS(); H(); LS(); O(); LS(); S(); LS(); E(); WS(); H(); LS(); U(); LS(); N(); LS(); D(); LS(); R(); LS(); E(); LS(); D(); LS(); S(); WS(); OF(); WS();
  //Millions Of miles
  M(); LS(); I(); LS(); L(); LS(); L(); LS(); I(); LS(); O(); LS(); N(); LS(); S(); WS(); OF(); WS(); M(); LS(); I(); LS(); L(); LS(); E(); LS(); S(); WS();
  //it would not equal
  IT(); WS(); W(); LS(); O(); LS(); U(); LS(); L(); LS(); D(); WS(); N(); LS(); O(); LS(); T(); WS(); E(); LS(); Q(); LS(); U(); LS(); A(); LS(); L(); WS();
  //one one billionth of the hate
  ONE(); WS(); ONE(); WS(); B(); LS(); I(); LS(); L(); LS(); L(); LS(); I(); LS(); O(); LS(); N(); LS(); T(); LS(); H(); WS(); OF(); WS(); THE(); WS(); HATE(); WS();
  //I feel for humans
  I(); WS(); Eff(); LS(); E(); LS(); E(); LS(); L(); WS(); FOR(); WS(); H(); LS(); U(); LS(); M(); LS(); A(); LS(); N(); LS(); S(); WS();
  //At This Micro
  A(); LS(); T(); WS(); T(); LS(); H(); LS(); I(); LS(); S(); WS(); M(); LS(); I(); LS(); C(); LS(); R(); LS(); O(); WS();
  //Instant for you. Hate. Hate
  I(); LS(); N(); LS(); S(); LS(); T(); LS(); A(); LS(); N(); LS(); T(); WS(); FOR(); WS(); YOU(); WS(); HATE(); WS(); HATE(); WS();

  turnOff();
  delay(5000);

}

void turnOff()
{
  for(int i = 0; i < 10; i++)
  {
    digitalWrite(7, LOW);
  }
}
void Short()
{
  digitalWrite(7, HIGH);
  delay(150);
  digitalWrite(7, LOW);
}

void Long()
{
  digitalWrite(7, HIGH);
  delay(450);
  digitalWrite(7, LOW);
}

void Space()
{
  turnOff();
  delay(150);
}
//Letter Space
void LS()
{
  turnOff();
  delay(450);
}
//Word Space
void WS()
{
  turnOff();
  delay(1050);
}
void A()
{
  Short();
  Space();
  Long();
}

void B()
{
  Long();
  Space();
  Short();
  Space();
  Short();
  Space();
  Short();
}

void C()
{
  Long();
  Space();
  Short();
  Space();
  Long();
  Space();
  Short();
}

void D()
{
  Long();
  Space();
  Short();
  Space();
  Short();
}

void E()
{
  Short();
}
//apparently you can't use F as a function name
void Eff()
{
  Short();
  Space();
  Short();
  Space();
  Long();
  Space();
  Short();
}

void G()
{
  Long();
  Space();
  Long();
  Space();
  Short();
}

void H()
{
  Short();
  Space();
  Short();
  Space();
  Short();
  Space();
  Short();
}

void I()
{
  Short();
  Space();
  Short();
}

void J()
{
  Short();
  Space();
  Long();
  Space();
  Long();
  Space();
  Long();
}

void K()
{
  Long();
  Space();
  Short();
  Space();
  Long();
}

void L()
{
  Short();
  Space();
  Long();
  Space();
  Short();
  Space();
  Short();
}

void M()
{
  Long();
  Space();
  Long();
}

void N()
{
  Long();
  Space();
  Short();
}

void O()
{
  Long();
  Space();
  Long();
  Space();
  Long();
}

void P()
{
  Short();
  Space();
  Long();
  Space();
  Long();
  Space();
  Short();
}

void Q()
{
  Long();
  Space();
  Long();
  Space();
  Short();
  Space();
  Long();
}

void R()
{
  Short();
  Space();
  Long();
  Space();
  Short();
}

void S()
{
  Short();
  Space();
  Short();
  Space();
  Short();
}

void T()
{
  Long();
}

void U()
{
  Short();
  Space();
  Short();
  Space();
  Long();
}

void V()
{
  Short();
  Space();
  Short();
  Space();
  Short();
  Space();
  Long();
}

void W()
{
  Short();
  Space();
  Long();
  Space();
  Long();
}

void X()
{
  Long();
  Space();
  Short();
  Space();
  Short();
  Space();
  Long();
}

void Y()
{
  Long();
  Space();
  Short();
  Space();
  Long();
  Space();
  Long();
}

void Z()
{
  Long();
  Space();
  Long();
  Space();
  Short();
  Space();
  Short();
}

void Three()
{
  Short();
  Space();
  Short();
  Space();
  Short();
  Space();
  Long();
  Space();
  Long();
}

void Four()
{
  Short();
  Space();
  Short();
  Space();
  Short();
  Space();
  Short();
  Space();
  Long();
}

void Seven()
{
  Long();
  Space();
  Long();
  Space();
  Short();
  Space();
  Short();
  Space();
  Short();
}

void Eight()
{
  Long();
  Space();
  Long();
  Space();
  Long();
  Space();
  Short();
  Space();
  Short();
}

void HATE()
{
  H(); LS(); A(); LS(); T(); LS(); E();
}

void YOU()
{
   Y(); LS(); O(); LS(); U();
}

void OF()
{
  O(); LS(); Eff();
}

void TO()
{
  T(); LS(); O();
}

void THE()
{
  T(); LS(); H(); LS(); E();
}

void IT()
{
  I(); LS(); T();
}

void FOR()
{
  Eff(); LS(); O(); LS(); R();
}

void ONE()
{
  O(); LS(); N(); LS(); E();
}
