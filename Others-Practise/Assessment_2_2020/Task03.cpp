#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::nothrow;

  char* normalText(char* text);
 int main(){
   char text[64];
   cin >> text;
   char* newTxt = normalText(text);
   cout << normalText(text) << endl;
    delete[] newTxt; 
   return 0;
 }
 char* normalText(char* text){
   unsigned textLen = strlen(text);
   char* newTxt = new(nothrow) char[textLen+1];
    unsigned resultIndex = 0;
   for(unsigned index = 0; index < textLen;){
     if(index < textLen - 3 && text[index] == text[index+1] && text[index] == text[index+2]&& text[index] == text[index+3]){
       unsigned timesWord=0;
       for(unsigned j = index; text[j] == text[index]; j++, timesWord++){}
       
       newTxt[resultIndex] = '(';
       resultIndex++;

       char num = timesWord + '0';
       newTxt[resultIndex] = num;

       resultIndex++;
       newTxt[resultIndex] = text[index];
       resultIndex++;
       newTxt[resultIndex] = ')';
       resultIndex++;
       index+=timesWord;
     }
     else{
       newTxt[resultIndex] = text[index];
       resultIndex++;
       index++;
     }
   }
   newTxt[resultIndex]=0;
   return newTxt;
 }
