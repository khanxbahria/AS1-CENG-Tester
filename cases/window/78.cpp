#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(0);
Tab X = Tab("rr", "ttt","ddd");
wind->changeActiveTabTo(4);
Tab D = Tab("kk", "c","r");
wind->isEmpty();
Tab A = Tab("l", "cc","zz");
wind->newTab(A);
Tab P = Tab("cc", "x","g");
wind->newTab(D);
wind->newTab(P);
Tab M = Tab("vvv", "sss","eee");
wind->isEmpty();
Tab V = Tab("yyy", "mmm","ww");
wind->changeActiveTabTo(0);
Tab W = Tab("aaa", "jj","j");
wind->newTab(M);
wind->isEmpty();
Tab K = Tab("gg", "kkk","j");
wind->moveActiveTabTo(4);
Tab E = Tab("ww", "zz","xx");
wind->closeTab();
wind->print();
wind->newTab(E);
Tab Y = Tab("ttt", "e","ooo");
wind->print();
wind->newTab(K);
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->changeActiveTabTo(1);
Tab Q = Tab("kk", "ss","eee");
wind->isEmpty();
Tab J = Tab("mm", "ggg","nnn");
wind->getActiveTab();
wind->newTab(J);
Tab S = Tab("ff", "ggg","hh");
wind->changeActiveTabTo(0);
Tab H = Tab("r", "t","tt");
wind->closeTab();
Tab Z = Tab("cc", "t","uu");
wind->moveActiveTabTo(0);
wind->isEmpty();
Tab O = Tab("bb", "ee","l");
wind->print();
Tab I = Tab("q", "n","p");
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->changeActiveTabTo(2);
Tab G = Tab("ff", "o","uuu");
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->print();
wind->print();
wind->print();
wind->changeActiveTabTo(2);
Tab L = Tab("mmm", "qq","aa");
wind->isEmpty();
wind->getActiveTab();
wind->newTab(G);
wind->closeTab();
wind->print();
Tab C = Tab("vvv", "zzz","eee");
wind->closeTab();
wind->getActiveTab();
Tab T = Tab("ttt", "m","xx");
wind->closeTab();
Tab B = Tab("g", "l","rrr");
wind->print();
wind->newTab(B);
wind->newTab(C);
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(3);
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->newTab(H);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->getActiveTab();
Tab U = Tab("h", "ww","ppp");
wind->newTab(I);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(L);
wind->newTab(O);
wind->closeTab();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->newTab(Q);
Tab F = Tab("ddd", "xxx","kkk");
wind->newTab(F);
wind->newTab(S);
wind->moveActiveTabTo(2);
wind->newTab(T);
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->newTab(U);
wind->changeActiveTabTo(3);
wind->closeTab();
wind->print();
Tab N = Tab("q", "hh","s");
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(4);
delete wind;
}
	return 0;
}