#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(5);
Tab Y = Tab("xx", "s","dd");
wind->closeTab();
Tab K = Tab("xxx", "ll","i");
wind->getActiveTab();
Tab I = Tab("r", "qqq","gg");
wind->closeTab();
Tab W = Tab("aaa", "zz","vvv");
wind->moveActiveTabTo(4);
Tab C = Tab("c", "hh","l");
wind->getActiveTab();
Tab D = Tab("jjj", "k","ff");
wind->changeActiveTabTo(3);
wind->newTab(C);
Tab R = Tab("ggg", "w","ff");
wind->getActiveTab();
wind->isEmpty();
wind->newTab(D);
Tab X = Tab("p", "ooo","p");
wind->newTab(I);
wind->moveActiveTabTo(0);
Tab Z = Tab("w", "rrr","uuu");
wind->getActiveTab();
wind->changeActiveTabTo(2);
Tab L = Tab("aaa", "ggg","mm");
wind->isEmpty();
wind->newTab(K);
Tab T = Tab("n", "ss","a");
wind->isEmpty();
Tab H = Tab("a", "e","s");
wind->isEmpty();
Tab A = Tab("g", "sss","e");
wind->changeActiveTabTo(4);
Tab V = Tab("q", "pp","nn");
wind->closeTab();
Tab S = Tab("zzz", "g","ee");
wind->moveActiveTabTo(5);
wind->closeTab();
Tab O = Tab("uu", "q","ee");
wind->newTab(A);
Tab J = Tab("nn", "p","ccc");
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
Tab E = Tab("ppp", "v","zzz");
wind->closeTab();
wind->changeActiveTabTo(5);
Tab B = Tab("zzz", "iii","uuu");
wind->newTab(B);
wind->moveActiveTabTo(4);
wind->closeTab();
wind->getActiveTab();
Tab Q = Tab("ii", "fff","uuu");
wind->isEmpty();
wind->closeTab();
Tab U = Tab("iii", "y","uuu");
wind->changeActiveTabTo(2);
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->getActiveTab();
Tab P = Tab("mm", "h","bbb");
wind->print();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->print();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->isEmpty();
wind->newTab(E);
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->newTab(H);
wind->closeTab();
wind->moveActiveTabTo(5);
wind->closeTab();
wind->closeTab();
wind->print();
wind->isEmpty();
wind->closeTab();
wind->newTab(J);
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(2);
wind->print();
wind->changeActiveTabTo(1);
wind->newTab(L);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->print();
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
Tab N = Tab("gg", "lll","jjj");
wind->getActiveTab();
wind->changeActiveTabTo(3);
Tab G = Tab("zz", "yyy","vvv");
wind->changeActiveTabTo(0);
wind->newTab(G);
Tab F = Tab("hhh", "ll","vvv");
wind->isEmpty();
wind->print();
wind->closeTab();
Tab M = Tab("dd", "nn","ttt");
wind->newTab(F);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->newTab(M);
wind->moveActiveTabTo(5);
wind->newTab(N);
wind->changeActiveTabTo(0);
delete wind;
}
	return 0;
}