#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(3);
Tab R = Tab("s", "jjj","p");
wind->print();
Tab V = Tab("rrr", "z","mm");
wind->closeTab();
Tab B = Tab("qq", "u","ww");
wind->print();
Tab X = Tab("aaa", "zzz","g");
wind->newTab(B);
Tab O = Tab("qqq", "nnn","u");
wind->isEmpty();
Tab K = Tab("nnn", "kk","qq");
wind->print();
Tab C = Tab("eee", "zz","ll");
wind->print();
Tab M = Tab("lll", "jj","w");
wind->moveActiveTabTo(1);
wind->getActiveTab();
Tab E = Tab("e", "d","o");
wind->changeActiveTabTo(2);
Tab I = Tab("jj", "n","f");
wind->moveActiveTabTo(3);
wind->getActiveTab();
Tab P = Tab("r", "f","j");
wind->print();
Tab N = Tab("g", "c","xxx");
wind->closeTab();
wind->closeTab();
Tab W = Tab("ss", "x","aaa");
wind->print();
wind->newTab(C);
Tab F = Tab("aaa", "sss","v");
wind->closeTab();
wind->print();
Tab A = Tab("qqq", "t","p");
wind->moveActiveTabTo(2);
wind->newTab(A);
Tab D = Tab("h", "a","ccc");
wind->getActiveTab();
Tab J = Tab("k", "oo","tt");
wind->newTab(D);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(0);
Tab Q = Tab("ppp", "aaa","www");
wind->print();
Tab L = Tab("o", "ttt","d");
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(0);
wind->newTab(E);
wind->getActiveTab();
wind->print();
wind->closeTab();
Tab Y = Tab("f", "hhh","g");
wind->moveActiveTabTo(2);
wind->newTab(F);
wind->closeTab();
Tab G = Tab("ccc", "q","ttt");
wind->newTab(G);
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(4);
Tab S = Tab("tt", "bbb","ccc");
wind->print();
wind->isEmpty();
wind->print();
wind->print();
wind->moveActiveTabTo(1);
wind->newTab(I);
wind->getActiveTab();
wind->closeTab();
Tab T = Tab("hhh", "vv","ee");
wind->print();
Tab H = Tab("ss", "sss","e");
wind->changeActiveTabTo(2);
wind->closeTab();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
wind->newTab(H);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(0);
Tab U = Tab("t", "vvv","c");
wind->getActiveTab();
wind->newTab(J);
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->newTab(K);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(2);
Tab Z = Tab("ll", "ttt","d");
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(2);
wind->newTab(L);
wind->newTab(M);
wind->newTab(N);
wind->newTab(O);
wind->closeTab();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->newTab(P);
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->newTab(Q);
wind->getActiveTab();
wind->getActiveTab();
delete wind;
}
	return 0;
}