#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab Q = Tab("l", "s","a");
wind->moveActiveTabTo(3);
Tab P = Tab("xxx", "ss","t");
wind->isEmpty();
Tab V = Tab("e", "nnn","xxx");
wind->changeActiveTabTo(4);
Tab T = Tab("gg", "yy","ii");
wind->newTab(P);
Tab C = Tab("r", "xxx","aaa");
wind->changeActiveTabTo(2);
wind->getActiveTab();
Tab N = Tab("vv", "rrr","s");
wind->closeTab();
wind->moveActiveTabTo(3);
wind->isEmpty();
Tab J = Tab("sss", "vv","vv");
wind->newTab(C);
Tab G = Tab("lll", "y","z");
wind->newTab(G);
Tab R = Tab("uu", "ppp","uuu");
wind->isEmpty();
Tab M = Tab("eee", "m","ee");
wind->print();
Tab Y = Tab("qqq", "s","bb");
wind->getActiveTab();
Tab U = Tab("jjj", "m","eee");
wind->closeTab();
Tab W = Tab("n", "w","kk");
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->newTab(J);
Tab A = Tab("nnn", "b","jjj");
wind->print();
wind->isEmpty();
Tab S = Tab("ddd", "e","i");
wind->changeActiveTabTo(3);
wind->closeTab();
Tab L = Tab("dd", "o","m");
wind->closeTab();
Tab Z = Tab("l", "p","ggg");
wind->changeActiveTabTo(2);
Tab I = Tab("k", "r","g");
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->closeTab();
wind->closeTab();
wind->print();
wind->moveActiveTabTo(1);
Tab E = Tab("d", "w","ggg");
wind->changeActiveTabTo(2);
wind->isEmpty();
Tab X = Tab("pp", "mmm","sss");
wind->closeTab();
wind->getActiveTab();
Tab K = Tab("fff", "kkk","kk");
wind->changeActiveTabTo(5);
wind->print();
Tab B = Tab("nn", "e","bb");
wind->getActiveTab();
wind->closeTab();
Tab H = Tab("d", "nnn","zzz");
wind->closeTab();
wind->newTab(A);
wind->getActiveTab();
Tab O = Tab("jj", "hhh","gg");
wind->print();
wind->newTab(B);
wind->isEmpty();
wind->newTab(E);
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->print();
wind->moveActiveTabTo(5);
Tab D = Tab("n", "vv","eee");
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->newTab(D);
wind->getActiveTab();
wind->moveActiveTabTo(1);
Tab F = Tab("zzz", "mm","tt");
wind->newTab(F);
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
wind->newTab(H);
wind->newTab(I);
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->print();
wind->print();
wind->newTab(K);
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->newTab(L);
wind->print();
wind->newTab(M);
wind->moveActiveTabTo(5);
wind->print();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->print();
delete wind;
}
	return 0;
}