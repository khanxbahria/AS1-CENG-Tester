#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->print();
Tab E = Tab("www", "i","fff");
wind->moveActiveTabTo(1);
Tab Y = Tab("p", "q","mm");
wind->changeActiveTabTo(3);
Tab G = Tab("pp", "mmm","bbb");
wind->changeActiveTabTo(4);
Tab J = Tab("bb", "ii","m");
wind->getActiveTab();
Tab R = Tab("dd", "i","bbb");
wind->print();
Tab K = Tab("jjj", "yyy","x");
wind->print();
wind->isEmpty();
Tab N = Tab("k", "aaa","ss");
wind->closeTab();
Tab T = Tab("qqq", "mm","v");
wind->newTab(E);
wind->getActiveTab();
Tab A = Tab("mmm", "q","oo");
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->closeTab();
Tab W = Tab("yyy", "o","m");
wind->isEmpty();
wind->isEmpty();
Tab I = Tab("zzz", "e","q");
wind->changeActiveTabTo(5);
Tab H = Tab("vvv", "y","c");
wind->isEmpty();
Tab X = Tab("yy", "vv","sss");
wind->closeTab();
Tab C = Tab("qqq", "m","nn");
wind->closeTab();
Tab U = Tab("tt", "ccc","bbb");
wind->newTab(A);
Tab Q = Tab("n", "ttt","x");
wind->closeTab();
Tab L = Tab("eee", "i","ggg");
wind->changeActiveTabTo(0);
Tab O = Tab("ll", "mmm","iii");
wind->newTab(C);
wind->print();
Tab D = Tab("ff", "bbb","tt");
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->newTab(D);
Tab V = Tab("ttt", "a","ii");
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(0);
Tab S = Tab("vv", "ppp","ppp");
wind->changeActiveTabTo(3);
wind->newTab(G);
wind->print();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->newTab(H);
Tab F = Tab("ee", "dd","eee");
wind->isEmpty();
Tab P = Tab("yy", "aa","u");
wind->moveActiveTabTo(1);
wind->newTab(F);
wind->changeActiveTabTo(5);
wind->closeTab();
Tab B = Tab("yyy", "rrr","a");
wind->closeTab();
wind->newTab(B);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(2);
wind->print();
wind->moveActiveTabTo(2);
Tab Z = Tab("x", "ppp","ddd");
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(5);
Tab M = Tab("uu", "hh","ii");
wind->newTab(I);
wind->moveActiveTabTo(4);
wind->closeTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->isEmpty();
wind->newTab(J);
wind->print();
wind->changeActiveTabTo(3);
wind->print();
wind->closeTab();
wind->newTab(K);
wind->closeTab();
wind->print();
wind->print();
wind->closeTab();
wind->print();
wind->newTab(L);
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->newTab(M);
wind->moveActiveTabTo(5);
wind->newTab(N);
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(4);
wind->print();
wind->getActiveTab();
wind->newTab(O);
wind->getActiveTab();
wind->newTab(P);
wind->closeTab();
wind->newTab(Q);
wind->moveActiveTabTo(1);
wind->newTab(R);
wind->getActiveTab();
delete wind;
}
	return 0;
}