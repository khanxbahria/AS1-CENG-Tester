#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab D = Tab("n", "i","aaa");
wind->newTab(D);
Tab A = Tab("t", "fff","ooo");
wind->newTab(A);
Tab N = Tab("gg", "mmm","sss");
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(2);
Tab I = Tab("yy", "a","ggg");
wind->changeActiveTabTo(4);
Tab C = Tab("f", "x","g");
wind->moveActiveTabTo(3);
Tab O = Tab("ww", "zz","h");
wind->changeActiveTabTo(5);
Tab S = Tab("jjj", "ppp","w");
wind->isEmpty();
Tab Z = Tab("h", "y","n");
wind->isEmpty();
Tab E = Tab("g", "ppp","jj");
wind->newTab(C);
wind->closeTab();
Tab B = Tab("zz", "q","c");
wind->print();
Tab T = Tab("yy", "ii","p");
wind->isEmpty();
Tab F = Tab("ww", "k","xx");
wind->changeActiveTabTo(3);
wind->newTab(B);
Tab K = Tab("ee", "d","dd");
wind->newTab(E);
Tab M = Tab("ddd", "k","f");
wind->changeActiveTabTo(0);
Tab V = Tab("uuu", "ppp","ttt");
wind->print();
Tab Q = Tab("rr", "pp","iii");
wind->getActiveTab();
Tab X = Tab("hh", "gg","f");
wind->closeTab();
wind->changeActiveTabTo(3);
wind->newTab(F);
wind->newTab(I);
wind->newTab(K);
Tab Y = Tab("f", "h","iii");
wind->newTab(M);
wind->moveActiveTabTo(1);
wind->newTab(N);
wind->moveActiveTabTo(3);
Tab W = Tab("ggg", "g","q");
wind->changeActiveTabTo(0);
Tab G = Tab("eee", "yyy","v");
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(1);
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(2);
Tab U = Tab("ee", "p","gg");
wind->newTab(G);
wind->print();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->closeTab();
Tab J = Tab("yy", "jj","vvv");
wind->print();
wind->closeTab();
wind->newTab(J);
wind->closeTab();
wind->print();
Tab R = Tab("aa", "nn","f");
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->newTab(O);
wind->isEmpty();
Tab H = Tab("ddd", "jj","o");
wind->newTab(H);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(Q);
wind->isEmpty();
wind->print();
wind->newTab(R);
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->newTab(S);
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->isEmpty();
wind->newTab(T);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->getActiveTab();
wind->newTab(U);
wind->closeTab();
Tab P = Tab("u", "dd","xxx");
wind->moveActiveTabTo(0);
wind->newTab(P);
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->closeTab();
Tab L = Tab("nnn", "l","rr");
wind->newTab(L);
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
delete wind;
}
	return 0;
}