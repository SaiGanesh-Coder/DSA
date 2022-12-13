#include<iostream>
#include<cstring>
using namespace std;

bool mystrcmp(char str1[],char str2[]){
    if(strlen(str1) != strlen(str2)) return false;

    for(int i=0;i<strlen(str1);i++){
        if (str1[i]!=str2[i]) return false;
    }
    return true;
}

int main(){
    char str1[100]="abcde";
    char str2[100]="hello";
                                                        //cin>>str1>>str2;                                        
                                                                  /*strlen
                                                                         int len = strlen(str1);
                                                                         cout<<"String Lenght "<<len;*/

                                                                  /*strcmp
                                                                          if(strcmp(str1,str2)==0){
                                                                           cout<<"Strings are equal"<<endl;
                                                                          }else{
                                                                           cout<<"Strings are not equal"<<endl;
                                                                          }
                                                                          mystrcmp(str1,str2);
                                                                          if(mystrcmp(str1,str2)==true){
                                                                           cout<<"Strings are equal"<<endl;
                                                                          }else{
                                                                           cout<<"Strings are not equal"<<endl;
                                                                          }*/
                                                                   /*strcpy
                                                                            cout<<"Strings before coping"<<endl;
                                                                            cout<<str1<<endl;
                                                                            cout<<str2<<endl;
                                                                            strcpy(str1,str2);
                                                                            cout<<"Strings after coping"<<endl;
                                                                            cout<<str1<<endl;
                                                                            cout<<str2<<endl;*/
                                                                    /*strncpy
                                                                            cout<<"Strings before coping"<<endl;
                                                                            cout<<str1<<endl;
                                                                            cout<<str2<<endl;
                                                                            strncpy(str1,str2,3);
                                                                            cout<<"Strings after coping"<<endl;
                                                                            cout<<str1<<endl;
                                                                            cout<<str2<<endl;*/ 
                                                                    /*strncat
                                                                            cout<<"Strings before coping"<<endl;
                                                                            cout<<str1<<endl;
                                                                            cout<<str2<<endl;
                                                                            strcat(str1,str2);
                                                                            cout<<"Strings after coping"<<endl;
                                                                            cout<<str1<<endl;
                                                                            cout<<str2<<endl;*/ 
                                                                      
    return 0;
}