#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(3);
Tab T = Tab("tt", "qq","aaa");
wind->print();
Tab L = Tab("w", "yyy","ii");
wind->closeTab();
Tab P = Tab("kk", "zz","b");
wind->getActiveTab();
Tab Z = Tab("ss", "zz","aaa");
wind->isEmpty();
Tab J = Tab("bbb", "sss","b");
wind->getActiveTab();
Tab B = Tab("ss", "x","o");
wind->moveActiveTabTo(1);
Tab R = Tab("ee", "hhh","vvv");
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(4);
Tab O = Tab("oo", "rrr","i");
wind->print();
Tab D = Tab("ww", "nnn","l");
wind->isEmpty();
Tab Y = Tab("kk", "vv","sss");
wind->changeActiveTabTo(1);
Tab Q = Tab("yy", "e","zz");
wind->print();
Tab U = Tab("x", "pp","vvv");
wind->newTab(B);
Tab S = Tab("mmm", "aaa","ss");
wind->newTab(D);
Tab X = Tab("a", "ccc","qqq");
wind->newTab(J);
Tab H = Tab("cc", "k","ttt");
wind->getActiveTab();
Tab E = Tab("ll", "e","zz");
wind->moveActiveTabTo(1);
wind->newTab(E);
wind->newTab(H);
Tab N = Tab("h", "b","tt");
wind->closeTab();
Tab I = Tab("qqq", "j","o");
wind->newTab(I);
wind->changeActiveTabTo(0);
Tab M = Tab("k", "ww","nnn");
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(1);
Tab A = Tab("g", "jj","g");
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->closeTab();
wind->newTab(A);
wind->closeTab();
wind->print();
Tab C = Tab("qqq", "k","t");
wind->closeTab();
Tab W = Tab("rrr", "ggg","j");
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->isEmpty();
Tab F = Tab("ii", "jjj","z");
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->newTab(C);
wind->print();
wind->changeActiveTabTo(4);
wind->print();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->print();
wind->print();
wind->getActiveTab();
wind->closeTab();
wind->newTab(F);
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->print();
wind->newTab(L);
wind->changeActiveTabTo(5);
wind->closeTab();
wind->moveActiveTabTo(2);
wind->print();
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->closeTab();
wind->newTab(M);
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->print();
Tab V = Tab("nn", "z","rr");
wind->closeTab();
wind->closeTab();
wind->newTab(N);
wind->newTab(O);
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->print();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->isEmpty();
Tab K = Tab("n", "b","ll");
delete wind;
}
	return 0;
}