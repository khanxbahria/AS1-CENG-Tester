#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->print();
Tab Y = Tab("ggg", "ll","n");
wind->print();
Tab X = Tab("tt", "yyy","aaa");
wind->moveActiveTabTo(0);
Tab P = Tab("lll", "qqq","m");
wind->newTab(P);
wind->getActiveTab();
Tab G = Tab("p", "yy","ooo");
wind->getActiveTab();
Tab F = Tab("lll", "www","ww");
wind->moveActiveTabTo(3);
Tab U = Tab("o", "c","zzz");
wind->getActiveTab();
Tab D = Tab("tt", "qq","mmm");
wind->moveActiveTabTo(3);
Tab Q = Tab("oo", "mm","nnn");
wind->newTab(D);
Tab C = Tab("b", "pp","rr");
wind->closeTab();
wind->changeActiveTabTo(1);
Tab Z = Tab("lll", "j","hh");
wind->changeActiveTabTo(5);
Tab L = Tab("p", "www","y");
wind->newTab(C);
wind->getActiveTab();
Tab V = Tab("zz", "k","qq");
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->getActiveTab();
Tab B = Tab("hhh", "ppp","sss");
wind->print();
Tab J = Tab("tt", "yy","tt");
wind->changeActiveTabTo(0);
wind->newTab(B);
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->newTab(F);
Tab W = Tab("fff", "b","ooo");
wind->isEmpty();
Tab S = Tab("qqq", "ddd","z");
wind->closeTab();
wind->newTab(G);
wind->moveActiveTabTo(2);
wind->getActiveTab();
Tab K = Tab("e", "www","f");
wind->newTab(J);
wind->changeActiveTabTo(1);
Tab A = Tab("ss", "bb","w");
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->changeActiveTabTo(0);
Tab E = Tab("qq", "t","jjj");
wind->closeTab();
wind->print();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->newTab(A);
wind->closeTab();
Tab T = Tab("ll", "m","kkk");
wind->isEmpty();
wind->print();
Tab O = Tab("n", "vvv","nn");
wind->changeActiveTabTo(2);
Tab M = Tab("rr", "n","i");
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->newTab(E);
wind->newTab(K);
wind->closeTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->newTab(L);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(5);
wind->newTab(M);
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(5);
wind->print();
wind->print();
wind->newTab(O);
wind->print();
wind->isEmpty();
wind->newTab(Q);
wind->newTab(S);
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(5);
Tab N = Tab("vvv", "bb","b");
wind->closeTab();
wind->print();
wind->moveActiveTabTo(0);
Tab R = Tab("ww", "s","r");
wind->newTab(N);
wind->moveActiveTabTo(5);
wind->newTab(R);
wind->print();
wind->closeTab();
wind->changeActiveTabTo(5);
Tab I = Tab("s", "q","h");
wind->changeActiveTabTo(4);
wind->print();
wind->closeTab();
wind->newTab(I);
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->newTab(T);
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->closeTab();
delete wind;
}
	return 0;
}