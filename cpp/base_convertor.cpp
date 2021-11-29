#include<bits/stdc++.h>
using namespace std;


// in '0' o 'A' chie? khob negah konid ina ascii hastand va bedard hex mikhoran (mabna 16) mitavanid code haye ascii ro negah konid
// https://www.petefreitag.com/cheatsheets/ascii-codes/
char tabdil(int num) 
{ 
if (num >= 0 && num <= 9)
    return (char)(num + '0'); 
else
    return (char)(num - 10 + 'A'); 
} 

// bayad in javab ro bar aks konim chon alan bar akse toye tabdil mabna az akhar be aval bayad bekhonim baraye hamin bayad bar aks konim
void reverser(char *str) 
{ 
int len = strlen(str); 
int i; 
for (i = 0; i < len/2; i++) 
{ 
    char temp = str[i]; 
    str[i] = str[len-i-1]; 
    str[len-i-1] = temp; 
} 
} 


char* fromDeci(char res[], int base, int inputNum) 
{ 
int index = 0; // tekrar taghsim ha

//tabdil adad be mabnaye mored nazar inja sorat migire ta vaghti adad ma 0 nashode index yeki behesh ezafe mishe 
while (inputNum > 0) 
{ 
    res[index++] = tabdil(inputNum % base); // baghimande ye adadi ke dadid / bar mabna ra be function tabdil midim
    inputNum /= base; 
}

res[index] = '\0';  
reverser(res); 

return res; 
} 

int main() 
{ 
int inputNum,base;
cout<<"Source Writed By ZenMaxe"<<endl;
cout<<"Addad Ra Vared Konid (Decimal):";
cin>>inputNum;

cout<<"\nMabna Ra Vared Konid:";
cin>>base; 
char res[100]; 
printf("\n Adad %d Dar Mabna %d = "
    " %s\n", inputNum, base, fromDeci(res, base, inputNum)); 
return 0; 
} 
