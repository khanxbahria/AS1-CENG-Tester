#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
Tab P = Tab("a", "y","vv");
wind->moveActiveTabTo(2);
Tab W = Tab("d", "ppp","mmm");
wind->newTab(P);
Tab Q = Tab("cc", "hhh","ttt");
wind->isEmpty();
Tab T = Tab("ggg", "vvv","sss");
wind->print();
Tab J = Tab("c", "gg","zzz");
wind->isEmpty();
Tab X = Tab("qq", "n","d");
wind->getActiveTab();
Tab A = Tab("uuu", "ll","yyy");
wind->print();
Tab Y = Tab("x", "x","mm");
wind->newTab(A);
Tab B = Tab("o", "ww","t");
wind->moveActiveTabTo(4);
Tab I = Tab("ooo", "zz","zz");
wind->newTab(B);
wind->closeTab();
Tab U = Tab("xx", "gg","ff");
wind->closeTab();
wind->closeTab();
Tab D = Tab("s", "sss","nnn");
wind->print();
wind->changeActiveTabTo(2);
Tab N = Tab("ww", "eee","www");
wind->print();
Tab L = Tab("ll", "n","tt");
wind->changeActiveTabTo(2);
wind->newTab(D);
Tab H = Tab("oo", "h","tt");
wind->newTab(H);
Tab K = Tab("yy", "eee","ttt");
wind->isEmpty();
Tab Z = Tab("fff", "yyy","w");
wind->print();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->isEmpty();
Tab S = Tab("x", "m","ll");
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(0);
wind->newTab(I);
wind->isEmpty();
Tab V = Tab("aa", "jj","i");
wind->print();
wind->print();
wind->isEmpty();
Tab E = Tab("j", "rrr","dd");
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->closeTab();
wind->print();
wind->print();
wind->getActiveTab();
wind->print();
Tab O = Tab("bbb", "hh","qqq");
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->isEmpty();
wind->newTab(E);
wind->changeActiveTabTo(2);
wind->newTab(J);
wind->closeTab();
wind->changeActiveTabTo(1);
Tab M = Tab("zzz", "t","zzz");
wind->closeTab();
wind->newTab(K);
wind->changeActiveTabTo(2);
Tab G = Tab("uu", "h","yy");
wind->changeActiveTabTo(1);
Tab R = Tab("k", "fff","p");
wind->newTab(G);
Tab F = Tab("n", "hhh","uuu");
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->closeTab();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->newTab(F);
wind->print();
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(4);
wind->print();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->print();
wind->print();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->newTab(L);
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(1);
wind->print();
wind->newTab(M);
Tab C = Tab("zz", "qq","gg");
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->closeTab();
wind->newTab(C);
wind->isEmpty();
wind->newTab(N);
wind->print();
wind->moveActiveTabTo(4);
wind->closeTab();
wind->newTab(O);
wind->changeActiveTabTo(2);
wind->closeTab();
wind->newTab(Q);
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(3);
delete wind;
}
	return 0;
}