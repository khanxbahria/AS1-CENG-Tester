#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(5);
Tab R = Tab("uu", "vvv","rr");
wind->moveActiveTabTo(1);
Tab V = Tab("o", "yyy","ii");
wind->changeActiveTabTo(1);
Tab U = Tab("yyy", "bb","qqq");
wind->moveActiveTabTo(0);
Tab G = Tab("g", "sss","n");
wind->print();
Tab T = Tab("ccc", "sss","a");
wind->closeTab();
Tab A = Tab("jj", "pp","uuu");
wind->moveActiveTabTo(2);
Tab H = Tab("ccc", "ppp","aa");
wind->print();
Tab X = Tab("xxx", "bb","r");
wind->print();
Tab N = Tab("ppp", "uuu","j");
wind->isEmpty();
wind->newTab(A);
wind->print();
Tab I = Tab("f", "j","j");
wind->closeTab();
Tab Y = Tab("ss", "xxx","zzz");
wind->closeTab();
Tab E = Tab("o", "x","ooo");
wind->moveActiveTabTo(1);
Tab Q = Tab("rrr", "k","kkk");
wind->print();
Tab P = Tab("nnn", "vv","rrr");
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->getActiveTab();
Tab K = Tab("xx", "sss","aaa");
wind->closeTab();
Tab C = Tab("cc", "a","qq");
wind->moveActiveTabTo(5);
wind->print();
Tab D = Tab("uuu", "zz","ggg");
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(C);
wind->print();
Tab S = Tab("ss", "nnn","ll");
wind->closeTab();
wind->getActiveTab();
wind->newTab(D);
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(4);
Tab J = Tab("ttt", "j","zz");
wind->isEmpty();
wind->isEmpty();
wind->newTab(E);
wind->newTab(G);
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->newTab(H);
wind->getActiveTab();
Tab M = Tab("h", "bb","o");
wind->newTab(I);
wind->print();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->newTab(J);
wind->newTab(K);
wind->changeActiveTabTo(3);
wind->print();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->newTab(M);
wind->closeTab();
wind->newTab(N);
Tab F = Tab("m", "ccc","g");
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->changeActiveTabTo(5);
wind->newTab(F);
wind->moveActiveTabTo(5);
Tab O = Tab("w", "mm","p");
wind->print();
Tab Z = Tab("a", "mm","aaa");
wind->newTab(O);
wind->print();
wind->moveActiveTabTo(5);
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(3);
Tab W = Tab("ccc", "o","mmm");
wind->newTab(P);
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(3);
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->newTab(Q);
wind->changeActiveTabTo(2);
Tab L = Tab("qqq", "mmm","h");
wind->isEmpty();
wind->newTab(L);
wind->newTab(R);
wind->moveActiveTabTo(4);
wind->newTab(S);
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->print();
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->newTab(T);
wind->newTab(U);
delete wind;
}
	return 0;
}