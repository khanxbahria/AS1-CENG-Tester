#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
Tab G = Tab("kk", "x","mmm");
wind->changeActiveTabTo(5);
Tab J = Tab("kk", "x","ppp");
wind->getActiveTab();
Tab O = Tab("f", "xxx","bb");
wind->isEmpty();
Tab D = Tab("ff", "xxx","xxx");
wind->closeTab();
Tab S = Tab("xxx", "k","n");
wind->moveActiveTabTo(5);
Tab B = Tab("jj", "oo","sss");
wind->changeActiveTabTo(1);
Tab R = Tab("lll", "g","f");
wind->closeTab();
wind->changeActiveTabTo(5);
Tab K = Tab("bb", "cc","ppp");
wind->isEmpty();
Tab Y = Tab("ddd", "ff","bb");
wind->print();
wind->closeTab();
Tab C = Tab("q", "oo","mm");
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(4);
Tab Z = Tab("qqq", "ee","e");
wind->getActiveTab();
wind->newTab(B);
wind->isEmpty();
Tab M = Tab("aa", "yy","c");
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
Tab W = Tab("aaa", "q","ee");
wind->moveActiveTabTo(0);
Tab V = Tab("hh", "ll","dd");
wind->moveActiveTabTo(4);
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
Tab N = Tab("nn", "x","zzz");
wind->closeTab();
wind->isEmpty();
Tab T = Tab("ccc", "uuu","t");
wind->moveActiveTabTo(5);
wind->isEmpty();
Tab P = Tab("rr", "t","z");
wind->changeActiveTabTo(0);
wind->newTab(C);
Tab X = Tab("x", "vv","jjj");
wind->print();
wind->changeActiveTabTo(4);
wind->newTab(D);
wind->newTab(G);
Tab F = Tab("ddd", "sss","aa");
wind->newTab(F);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->isEmpty();
Tab A = Tab("qqq", "jj","uu");
wind->newTab(A);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->newTab(J);
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
Tab Q = Tab("r", "ff","ii");
wind->newTab(K);
wind->moveActiveTabTo(2);
wind->newTab(M);
wind->isEmpty();
Tab E = Tab("oo", "a","j");
wind->changeActiveTabTo(0);
wind->print();
wind->moveActiveTabTo(5);
wind->newTab(E);
wind->moveActiveTabTo(1);
wind->print();
Tab H = Tab("rrr", "aa","bbb");
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(H);
wind->newTab(N);
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->newTab(O);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(5);
Tab L = Tab("h", "e","z");
wind->newTab(L);
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(1);
wind->newTab(P);
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->getActiveTab();
Tab U = Tab("ggg", "dd","nnn");
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->print();
wind->moveActiveTabTo(3);
wind->print();
wind->print();
wind->isEmpty();
wind->newTab(Q);
wind->closeTab();
wind->print();
wind->closeTab();
delete wind;
}
	return 0;
}
