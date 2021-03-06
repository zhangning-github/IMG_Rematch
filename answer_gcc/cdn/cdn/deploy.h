#ifndef __ROUTE_H__
#define __ROUTE_H__

#include "lib_io.h"
//#include <stdio.h>
//#include <stdlib.h>
#include <queue>
#include <iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<cstring>
#include<fstream>
#include <sys/time.h>
using namespace std;

struct path {
    vector<int> p;        //存储路径
    int f;              //存储当前路径分配的流量
};

struct initial {
    int s;
    int cost;
};
struct Solution_and_cost {
    vector<int> solution;
    pair<int, int> swap;
    int cost;
};
struct valueofOp {
    vector<int> solution;
    pair<int, int> swap;                //查找时不应有顺序因素影响
};
struct H_tral1 {
    int vextec;
    int Hierarchy;
};
struct hot_v {
    int vertex;
    int hot;
};
struct server{
    int capability;
    int serverPrice;
    server(int c, int s) :capability(c), serverPrice(s){}
};

const int N = 10002;

typedef pair<int, int> PAIR;
void process_data(const char * const filename,const char * const resultfile);
int cmp(const PAIR &x, const PAIR &y);
void getsortbyBwandE();
void getTlist();
initial getinitial(long long time,double arg1,double arg2);

void dosomething(vector<int>& p, int f1);
valueofOp dosomething2(vector<Solution_and_cost> nerbou, vector<pair<int, int>> tabuList);
list<path> getpath();
vector<int>Tabu_search(initial r, long long time);
void writeResult(char * result_file,vector<int>solution);
void deploy_server(char * graph[MAX_EDGE_NUM], int edge_num, char * filename);
void get_H_tral();
void getsortByH_E();
void clear_graph();
PAIR mcmf(int s, int t);
void init_graph(vector<int> select);
vector<valueofOp> getdropN(vector<int> solution);
void sortbyflow_edge(vector<int>& solution);
long diff_in_us(struct timeval *finishtime, struct timeval * starttime);
void getfAndedge();
void getf();
int CostofServerAndDeployment(vector<int> solution);
#endif
