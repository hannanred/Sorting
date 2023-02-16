#ifndef __SORTS_H
#define __SORTS_H

#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "list.cpp"
#include "list.h"

using namespace std;

vector<long> MergeSort(vector<long> nums);
void sort(List<long> &srt,int l, int h);
void merge(List<long> &srt,int start1, int end1, int start2, int end2);


#endif