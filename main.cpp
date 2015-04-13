//
//  main.cpp
//  bigdata2.0
//
//  Created by siqiyaoyao on 15/4/11.
//  Copyright (c) 2015年 siqiyaoyao. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <map>
#include "ReadDate.h"
//#include "command.h"
//#include "class.h"

using namespace std;





int main(int argc, char *argv[], char *envp[])
{
    string strFileAddress(argv[1]);
    
    
    
    //-------------------insert the data-------------------
    
    //vector<data> UserId[23907634];
    multimap<size_t,data> MapUser; //size_t无符号整数
    std::multimap<size_t,data>::iterator itu;
    multimap<size_t,AdData>MapAd;
    Read_Data(MapUser,MapAd,strFileAddress);
    cout << "read all data"<<endl;
    
    /*-------------------test---------------------------
    pair<multimap<size_t,data>::iterator, multimap<size_t,data>::iterator> position;
    position = MapUser.equal_range(490234);
    while (position.first != position.second)
    {
        cout << position.first->second.DisplayURL <<endl;
        position.first++;
    }
    */
    
    //--------------------Read command--------------------
     
     string command;
    
     cin >> command;
     ReadCommand(command,MapUser,MapAd);
     cout << "# leave the program"<< endl;
    
    
    
    
    
    
    
    
    
    return 0;
}
