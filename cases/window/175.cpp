#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->print();
Tab G = Tab("f", "i","vvv");
wind->getActiveTab();
Tab Q = Tab("lll", "mmm","o");
wind->closeTab();
Tab W = Tab("lll", "ii","s");
wind->changeActiveTabTo(1);
wind->newTab(G);
wind->isEmpty();
Tab O = Tab("ttt", "z","f");
wind->print();
wind->closeTab();
wind->changeActiveTabTo(5);
Tab L = Tab("d", "ll","gg");
wind->moveActiveTabTo(0);
Tab J = Tab("ppp", "d","i");
wind->closeTab();
wind->changeActiveTabTo(1);
Tab Z = Tab("rrr", "uuu","www");
wind->getActiveTab();
Tab I = Tab("iii", "ss","ss");
wind->isEmpty();
Tab Y = Tab("nn", "ggg","qqq");
wind->moveActiveTabTo(1);
Tab C = Tab("lll", "hh","o");
wind->isEmpty();
wind->closeTab();
wind->print();
wind->print();
Tab K = Tab("n", "pp","ooo");
wind->print();
wind->closeTab();
wind->changeActiveTabTo(4);
Tab P = Tab("q", "j","tt");
wind->moveActiveTabTo(2);
Tab H = Tab("jjj", "nn","ccc");
wind->isEmpty();
Tab X = Tab("l", "ww","cc");
wind->closeTab();
wind->getActiveTab();
Tab N = Tab("lll", "d","hhh");
wind->closeTab();
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(3);
Tab R = Tab("jj", "nnn","nnn");
wind->closeTab();
Tab B = Tab("sss", "k","ll");
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->newTab(B);
wind->isEmpty();
wind->newTab(C);
wind->print();
wind->changeActiveTabTo(0);
wind->newTab(H);
wind->print();
Tab D = Tab("mm", "iii","kkk");
wind->newTab(D);
wind->newTab(I);
Tab S = Tab("zz", "aa","z");
wind->closeTab();
wind->moveActiveTabTo(0);
wind->newTab(J);
wind->isEmpty();
Tab M = Tab("hh", "ppp","ee");
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->closeTab();
wind->newTab(K);
wind->closeTab();
wind->isEmpty();
wind->print();
wind->print();
wind->changeActiveTabTo(0);
wind->newTab(L);
Tab V = Tab("www", "sss","www");
wind->closeTab();
wind->newTab(M);
wind->moveActiveTabTo(3);
Tab A = Tab("h", "h","o");
wind->changeActiveTabTo(1);
wind->newTab(A);
wind->moveActiveTabTo(3);
Tab E = Tab("a", "bb","s");
wind->print();
wind->print();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->changeActiveTabTo(3);
Tab F = Tab("e", "bb","ww");
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->print();
wind->print();
wind->newTab(E);
wind->getActiveTab();
Tab U = Tab("ee", "d","jjj");
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->getActiveTab();
Tab T = Tab("kk", "cc","l");
wind->print();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->isEmpty();
delete wind;
}
	return 0;
}