//
//  ReadDate.h
//  bigdata1
//
//  Created by siqiyaoyao on 15/4/11.
//  Copyright (c) 2015年 siqiyaoyao. All rights reserved.
//

#ifndef __bigdata1__ReadDate__
#define __bigdata1__ReadDate__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <map>
//#include "command.h"
//#include "class.h"
using namespace std;
#endif /* defined(__bigdata1__ReadDate__) */

class data
{
public:
    unsigned int  AdID;
    int  Depth;
    int  Position;
    unsigned int  QueryID;
    int Click;
    int Impression;
    unsigned int  AdvertiserID;
    unsigned int  KeywordID;
    unsigned int  TitleID;
    unsigned int  DescriptionID;
    string  DisplayURL;

    
    
    
};
class AdData
{
public:
    size_t UserID;
    int Click;
    int Impression;
};

void Read_Data(multimap<size_t,data> &MapUser,multimap<size_t,AdData> &MapAd,string strFileAddress);

void ReadCommand( string &command,multimap<size_t,data> &MapUser,multimap<size_t,AdData> &MapAd);
void ImpressedCommand(vector<size_t>& ImpressedData, string command);
void ProfitCommand(vector<size_t>& ProfitData, string command,multimap<size_t,AdData> &MapAd);


// deal with data
void get(multimap<size_t,data> &MapUser, vector<size_t> GetData);
void CallClick(multimap<size_t,data> MapUser,string command);
