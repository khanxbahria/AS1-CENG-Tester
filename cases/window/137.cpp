#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab N = Tab("o", "yyy","uuu");
wind->getActiveTab();
wind->moveActiveTabTo(4);
Tab R = Tab("zzz", "w","iii");
wind->getActiveTab();
Tab O = Tab("ff", "qqq","e");
wind->moveActiveTabTo(2);
Tab H = Tab("qqq", "n","k");
wind->isEmpty();
Tab Y = Tab("hh", "p","zz");
wind->getActiveTab();
Tab W = Tab("nnn", "c","ll");
wind->closeTab();
Tab L = Tab("o", "l","rr");
wind->isEmpty();
Tab B = Tab("qq", "ppp","xx");
wind->moveActiveTabTo(5);
Tab T = Tab("ss", "cc","n");
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(4);
Tab A = Tab("qqq", "g","o");
wind->print();
wind->newTab(A);
Tab E = Tab("u", "q","uu");
wind->isEmpty();
Tab J = Tab("eee", "ooo","ooo");
wind->newTab(B);
wind->print();
Tab M = Tab("k", "xxx","hhh");
wind->print();
wind->newTab(E);
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->closeTab();
Tab V = Tab("h", "zzz","uuu");
wind->print();
Tab G = Tab("ee", "ttt","yy");
wind->getActiveTab();
Tab Z = Tab("n", "nnn","zz");
wind->print();
wind->print();
Tab P = Tab("zz", "aa","c");
wind->print();
wind->closeTab();
Tab S = Tab("ggg", "ppp","kkk");
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->newTab(G);
wind->print();
wind->newTab(H);
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(2);
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->newTab(J);
wind->changeActiveTabTo(3);
wind->newTab(L);
wind->getActiveTab();
wind->getActiveTab();
Tab F = Tab("l", "ww","ss");
wind->closeTab();
Tab Q = Tab("cc", "bbb","jjj");
wind->print();
wind->changeActiveTabTo(1);
wind->print();
Tab K = Tab("mmm", "x","uuu");
wind->moveActiveTabTo(3);
wind->print();
wind->print();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->isEmpty();
wind->newTab(F);
wind->isEmpty();
Tab D = Tab("dd", "kkk","u");
wind->changeActiveTabTo(3);
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(0);
Tab I = Tab("y", "qqq","ii");
wind->newTab(D);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(2);
wind->print();
Tab U = Tab("lll", "ooo","oo");
wind->changeActiveTabTo(2);
wind->closeTab();
wind->changeActiveTabTo(0);
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(5);
Tab C = Tab("qqq", "vv","e");
wind->isEmpty();
Tab X = Tab("e", "kk","h");
wind->newTab(C);
wind->print();
wind->closeTab();
wind->newTab(I);
wind->newTab(K);
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->closeTab();
wind->print();
wind->newTab(M);
wind->getActiveTab();
wind->isEmpty();
delete wind;
}
	return 0;
}