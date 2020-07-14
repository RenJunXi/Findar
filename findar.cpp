//
//  main.cpp
//  findar
//
//  Created by nxi ju on 2020/7/13.
//  Copyright © 2020 nxi ju. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
string cwd;
string input;
char when_run;
int i;
struct strlist
{
    string str="/";
}strl[1024];
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("The finder for darwin in the UNIX mode.\n");
    printf("Made by junxi in July.\n");
    printf("We have to use English.\n");
    printf("1.0.0 made of C++\n");
    cwd="/";
    strl[i].str=cwd;
    while(true)
    {
        system(("ls "+cwd).c_str());
        //find cwd
        
        cin>>when_run>>input;
        
        if (when_run=='!')
        {
            system((cwd+"/"+input).c_str());
            continue;
        }
        else if (when_run=='*')
        {
            for(int i=0;i<=1023;i++)
                strl[i].str="/";
            strl[0].str=input;
            cwd=input;
            continue;
        }
        else if (when_run=='&')
        {
            if((i-1)<0)
                printf("Is already the path \'/\'");
            else
            { 
                cwd=strl[i-1].str;
                i--;
                continue;
            }
        }
        else if (when_run=='#')
        {
            system(("vim "+cwd+"/"+input).c_str());
            continue;
        }
        else if (when_run=='%')
            break;
        else
            cwd=cwd+"/"+when_run+input;
        system(("cd "+cwd+"/").c_str());
        i++;
        strl[i].str="/"+cwd;
    }
    return 0;
}

